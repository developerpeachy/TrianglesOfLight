/** 
  Code should do: 
  - animate lights based off feedback from sensors / input 
  - push button to ommit light sequences
  - potential to add more than one LED group. 


  Sources: https://www.instructables.com/id/Hit-It-Led-Game/ 
**/

// initialise position of LED's
int LedPin1 = 2; //pin of first led
int LedPin2 = 3; //pin of second led
int LedPin3 = 4; //etc.
int LedPin4 = 5;
int LedPin5 = 6;

// initialise position of button 
const int ButtonPin = 8; 

// initialise light position and speed to be reset to zero
int lightPosition;
int speedOfLight;


void setup() {
  lightPosition = 0;
  speedOfLight = 100; 

  // initialise the output and input
  pinMode(LedPin1, OUTPUT);
  pinMode(LedPin2, OUTPUT);
  pinMode(LedPin3, OUTPUT);
  pinMode(LedPin4, OUTPUT);
  pinMode(LedPin5, OUTPUT);
  pinMode(ButtonPin, INPUT);

}

// to move the position of the light
// will move the light position to the right. 
void move(int lightPosition) {
  for (int x = LedPin1; x <= LedPin5; x++)
  {
      digitalWrite(x, LOW);
  }
  
  digitalWrite(lightPosition + 1, HIGH);
}

void loop() {
  while(true){
    lightPosition++;
    if(lightPosition >= 6) lightPosition = 1;

    move(lightPosition);

    // change the switch and case to animate the LED's

    if (digitalRead(ButtonPin)){
      switch (lightPosition) {
      case 1:
        {
          
          delay(400);
          digitalWrite(LedPin1, HIGH);
          delay(400);
          digitalWrite(LedPin2, HIGH);
          delay(400);
          digitalWrite(LedPin3, HIGH);
          delay(400);
          digitalWrite(LedPin4, HIGH);
          delay(400);
          digitalWrite(LedPin5, HIGH);
          
          delay(400);
          digitalWrite(LedPin5, LOW);
          delay(400);
          digitalWrite(LedPin4, LOW);
          delay(400);
          digitalWrite(LedPin3, LOW);
          delay(400);
          digitalWrite(LedPin2, LOW);
          delay(400);
          digitalWrite(LedPin1, LOW);
        }
        break;
      case 2:
        {
          delay(400);
          digitalWrite(LedPin2, HIGH);
          delay(400);
          digitalWrite(LedPin3, HIGH);
          delay(400);
          digitalWrite(LedPin4, HIGH);
          delay(400);
          digitalWrite(LedPin5, HIGH);
          delay(400);
          digitalWrite(LedPin1, HIGH);
          
          delay(400);
          digitalWrite(LedPin1, LOW);
          delay(400);
          digitalWrite(LedPin5, LOW);
          delay(400);
          digitalWrite(LedPin4, LOW);
          delay(400);
          digitalWrite(LedPin3, LOW);
          delay(400);
          digitalWrite(LedPin2, LOW);
        }
        break;
      case 3:
        {
          delay(400);
          digitalWrite(LedPin3, HIGH);
          delay(400);
          digitalWrite(LedPin4, HIGH);
          delay(400);
          digitalWrite(LedPin5, HIGH);
          delay(400);
          digitalWrite(LedPin1, HIGH);
          delay(400);
          digitalWrite(LedPin2, HIGH);
          
          delay(400);
          digitalWrite(LedPin2, LOW);
          delay(400);
          digitalWrite(LedPin1, LOW);
          delay(400);
          digitalWrite(LedPin5, LOW);
          delay(400);
          digitalWrite(LedPin4, LOW);
          delay(400);
          digitalWrite(LedPin3, LOW);
        }
        break;
       case 4:
       {
          delay(400);
          digitalWrite(LedPin4, HIGH);
          delay(400);
          digitalWrite(LedPin5, HIGH);
          delay(400);
          digitalWrite(LedPin1, HIGH);
          delay(400);
          digitalWrite(LedPin2, HIGH);
          delay(400);
          digitalWrite(LedPin3, HIGH);
          
          delay(400);
          digitalWrite(LedPin3, LOW);
          delay(400);
          digitalWrite(LedPin2, LOW);
          delay(400);
          digitalWrite(LedPin1, LOW);
          delay(400);
          digitalWrite(LedPin5, LOW);
          delay(400);
          digitalWrite(LedPin4, LOW);
       }
       break;
       case 5:
       {
          delay(400);
          digitalWrite(LedPin5, HIGH);
          delay(400);
          digitalWrite(LedPin1, HIGH);
          delay(400);
          digitalWrite(LedPin2, HIGH);
          delay(400);
          digitalWrite(LedPin3, HIGH);
          delay(400);
          digitalWrite(LedPin4, HIGH);
          
          delay(400);
          digitalWrite(LedPin4, LOW);
          delay(400);
          digitalWrite(LedPin3, LOW);
          delay(400);
          digitalWrite(LedPin2, LOW);
          delay(400);
          digitalWrite(LedPin1, LOW);
          delay(400);
          digitalWrite(LedPin5, LOW);
       }
       break;
    }
  }

}

}
