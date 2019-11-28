const int buttonPin1 = 3;    
const int buttonPin2 = 2;  
const int buttonPin3 = 4;     
const int buttonPin4 = 5;
const int buttonPin5 = 6;     
const int buttonPin6 = 7;
const int buttonPin7 = 22;     
const int buttonPin8 = 23;
const int buttonPin9 = 26;     
const int buttonPin10 = 27;
const int buttonPin11 = 30;
const int buttonPin12 = 31;     
const int buttonPin13 = 34;
const int buttonPin14= 35;     
const int buttonPin15 = 42;
const int buttonPin16= 43;     
const int buttonPin17 = 52;
const int buttonPin18= 53;   



const int buzzer = 8;      // the number of the buzzer
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;
int buttonState8 = 0;
int buttonState9 = 0;
int buttonState10 = 0;
int buttonState11 = 0;
int buttonState12 = 0;
int buttonState13 = 0;
int buttonState14 = 0;
int buttonState15 = 0;
int buttonState16 = 0;
int buttonState17 = 0;
int buttonState18 = 0;
int buttonPushCounter = 0;     
int lastcheckPiece = 0;     

bool isPiece_1_Present = false;
bool isPiece_2_Present = false;
bool isPiece_3_Present = false;
bool isPiece_4_Present = false;
bool isPiece_5_Present = false;
bool isPiece_6_Present = false;
bool isPiece_7_Present = false;
bool isPiece_8_Present = false;
bool isPiece_9_Present = false;


void setup() {
 Serial.begin(9600);
 
 pinMode(buzzer, OUTPUT);
 
 pinMode(buttonPin1, INPUT_PULLUP);
 pinMode(buttonPin2, INPUT_PULLUP);

 pinMode(buttonPin3, INPUT_PULLUP);
 pinMode(buttonPin4, INPUT_PULLUP);

 pinMode(buttonPin5, INPUT_PULLUP);
 pinMode(buttonPin6, INPUT_PULLUP);

 pinMode(buttonPin7, INPUT_PULLUP);
 pinMode(buttonPin8, INPUT_PULLUP);
 
 pinMode(buttonPin9, INPUT_PULLUP);
 pinMode(buttonPin10, INPUT_PULLUP);

 pinMode(buttonPin11, INPUT_PULLUP);
 pinMode(buttonPin12, INPUT_PULLUP);

 pinMode(buttonPin13, INPUT_PULLUP);
 pinMode(buttonPin14, INPUT_PULLUP);

 pinMode(buttonPin15, INPUT_PULLUP);
 pinMode(buttonPin16, INPUT_PULLUP);

 pinMode(buttonPin17, INPUT_PULLUP);
 pinMode(buttonPin18, INPUT_PULLUP);
}

void loop() {

  checkPiece_1();
  checkPiece_2();
  checkPiece_3();
  checkPiece_4();
  checkPiece_5();
  checkPiece_6();
  checkPiece_7();
  checkPiece_8();
  checkPiece_9();
  
}

void checkPiece_1(){
 buttonState1 = digitalRead(buttonPin1);
 buttonState2 = digitalRead(buttonPin2);
 if (buttonState1 == LOW && buttonState2 == LOW && isPiece_1_Present==false) {
  buttonPushCounter++;
  successBeep();
  isPiece_1_Present = true;
  }
}

void checkPiece_2(){
 buttonState3 = digitalRead(buttonPin3);
 buttonState4 = digitalRead(buttonPin4);
 if (buttonState3 == LOW && buttonState4 == LOW && isPiece_2_Present==false) {
  buttonPushCounter++;
  successBeep();
  isPiece_2_Present = true;
  }
}

void checkPiece_3(){
 buttonState5 = digitalRead(buttonPin5);
 buttonState6 = digitalRead(buttonPin6);
 if (buttonState5 == LOW && buttonState6 == LOW && isPiece_3_Present==false) {
  buttonPushCounter++;
  successBeep();
  isPiece_3_Present =true;
  }
}

void checkPiece_4(){
 buttonState7 = digitalRead(buttonPin7);
 buttonState8 = digitalRead(buttonPin8);
 if (buttonState7 == LOW && buttonState8 == LOW && isPiece_4_Present==false) {
  buttonPushCounter++;
  successBeep();
  isPiece_4_Present =true;
  }
}

void checkPiece_5(){
 buttonState9 = digitalRead(buttonPin9);
 buttonState10 = digitalRead(buttonPin10);
 if (buttonState9 == LOW && buttonState10 == LOW && isPiece_5_Present==false) {
  buttonPushCounter++;
  successBeep();
  isPiece_5_Present =true;
  }
}

void checkPiece_6(){
 buttonState11 = digitalRead(buttonPin11);
 buttonState12 = digitalRead(buttonPin12);
 if (buttonState11 == LOW && buttonState12 == LOW && isPiece_6_Present==false) {
  buttonPushCounter++;
  successBeep();
  isPiece_6_Present =true;
  }
}

void checkPiece_7(){
 buttonState13 = digitalRead(buttonPin13);
 buttonState14= digitalRead(buttonPin14);
 if (buttonState13 == LOW && buttonState14 == LOW && isPiece_7_Present==false) {
  buttonPushCounter++;
  successBeep();
  isPiece_7_Present =true;
  }
}

void checkPiece_8(){
 buttonState15 = digitalRead(buttonPin15);
 buttonState16 = digitalRead(buttonPin16);
 if (buttonState15 == LOW && buttonState16 == LOW && isPiece_8_Present==false) {
  buttonPushCounter++;
  successBeep();
  isPiece_8_Present =true;
  }
}

void checkPiece_9(){
 buttonState17 = digitalRead(buttonPin17);
 buttonState18 = digitalRead(buttonPin18);
 if (buttonState17 == LOW && buttonState18 == LOW && isPiece_9_Present==false) {
  buttonPushCounter++;
  successBeep();
  isPiece_9_Present =true;
  }
}

void endBeep(){
  digitalWrite(buzzer, HIGH);
  delay(1000);
  digitalWrite(buzzer, LOW);
  delay(200);
  digitalWrite(buzzer, HIGH);
  delay(1000);
}

void successBeep(){
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(200);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(1000);
}

