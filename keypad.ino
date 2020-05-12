int rows[] = {A0, A1, A2, A3};
int columns[] = {2, 3, 4, 5};

int row, col;
int pressed = 0;

void setup() {
  Serial.begin(9600);
  for(int i = 0; i < 4; i++){
    pinMode(rows[i], OUTPUT);                 // rows will be enabled and disabled
    pinMode(columns[i], INPUT_PULLUP);        // columns will be scanned for each row
  }
}

void loop() {
  if(pressed == 0){                           // waiting for a button to be pressed
    for(int i = 0; i <4; i++){                // row loop to enable them row by row
      
       for(int k = 0; k < 4; k++){            // go through all rows, disabling (HIGH) all of them except of the current (i) one (LOW)
          digitalWrite(rows[k], k != i);
       }

       for(int j = 0; j < 4; j++){            // column loop to scan each column for a pressed button
          if(digitalRead(columns[j]) == LOW){ // the button is pressed
            pressed = 1;                      // mark it for releasing

            row = i;                          // store row and column value for releasing
            col = j;

            Serial.print((row*4) + (col+1));  // print the value of the pressed button, from 1 to 16
            Serial.println(" pressed");
            break;
          }
          delay(5);                           // software debounce

       }

       if(pressed == 1) break;
    }
  }
  else {                                      // the button stored in "row" and "col" is waiting to be released
    for(int k = 0; k < 4; k++){               // go through all rows, disabling (HIGH) all of them except of the row of the releasing button (LOW)
        digitalWrite(rows[k], k != row);
     }

     if(digitalRead(columns[col]) == LOW){    // the button is released
        pressed = 0;                          // mark it as released, next loop will scan a new button

        Serial.print( (row*4) + (col+1) );    // print the value of the released button, from 1 to 16
        Serial.println(" released");
      }

     delay(5);                                // software debounce
  }
}
