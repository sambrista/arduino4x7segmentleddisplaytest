//4 digits x 7 segments

const int PIN_1 = 1;
const int PIN_2 = 2;
const int PIN_3 = 3;
const int PIN_4 = 4;
const int PIN_5 = 5;
const int PIN_6 = 6; // Used to select digit
const int PIN_7 = 7;
const int PIN_8 = 8; // Used to select digit
const int PIN_9 = 9; // Used to select digit
const int PIN_10 = 10;
const int PIN_11 = 11;
const int PIN_12 = 12; // Used to select digit
const int POT = 0;

int value = 0;

void setup() {
 pinMode(PIN_1,OUTPUT);
 pinMode(PIN_2,OUTPUT); 
 pinMode(PIN_3,OUTPUT); 
 pinMode(PIN_4,OUTPUT); 
 pinMode(PIN_5,OUTPUT); 
 pinMode(PIN_6,OUTPUT); 
 pinMode(PIN_7,OUTPUT); 
 pinMode(PIN_8,OUTPUT); 
 pinMode(PIN_9,OUTPUT); 
 pinMode(PIN_10,OUTPUT); 
 pinMode(PIN_11,OUTPUT); 
 pinMode(PIN_12,OUTPUT);
}

void selectDigit(int digit) {
 switch(digit) {
   case 1:
     digitalWrite(PIN_12,LOW);
     digitalWrite(PIN_9,HIGH);
     digitalWrite(PIN_8,HIGH);
     digitalWrite(PIN_6,HIGH);
     break;
   case 2:
     digitalWrite(PIN_12,HIGH);
     digitalWrite(PIN_9,LOW);
     digitalWrite(PIN_8,HIGH);
     digitalWrite(PIN_6,HIGH);
     break;
   case 3:
     digitalWrite(PIN_12,HIGH);
     digitalWrite(PIN_9,HIGH);
     digitalWrite(PIN_8,LOW);
     digitalWrite(PIN_6,HIGH);
     break;
   case 4:
     digitalWrite(PIN_12,HIGH);
     digitalWrite(PIN_9,HIGH);
     digitalWrite(PIN_8,HIGH);
     digitalWrite(PIN_6,LOW);
     break;
 } 
}

void printNumber(int num) {
 switch(num) {
   case 0:
     digitalWrite(PIN_1, HIGH);
     digitalWrite(PIN_2, HIGH); 
     digitalWrite(PIN_3, LOW); 
     digitalWrite(PIN_4, HIGH); 
     digitalWrite(PIN_5, LOW); 
     digitalWrite(PIN_7, HIGH); 
     digitalWrite(PIN_10, HIGH); 
     digitalWrite(PIN_11, HIGH);
     break;
   case 1:
     digitalWrite(PIN_1, LOW);
     digitalWrite(PIN_2, LOW); 
     digitalWrite(PIN_3, LOW); 
     digitalWrite(PIN_4, HIGH); 
     digitalWrite(PIN_5, LOW); 
     digitalWrite(PIN_7, HIGH); 
     digitalWrite(PIN_10, LOW); 
     digitalWrite(PIN_11, LOW);
     break;
   case 2:
     digitalWrite(PIN_1, HIGH);
     digitalWrite(PIN_2, HIGH); 
     digitalWrite(PIN_3, LOW); 
     digitalWrite(PIN_4, LOW); 
     digitalWrite(PIN_5, HIGH); 
     digitalWrite(PIN_7, HIGH); 
     digitalWrite(PIN_10, LOW); 
     digitalWrite(PIN_11, HIGH);
     break;
   case 3:
     digitalWrite(PIN_1, LOW);
     digitalWrite(PIN_2, HIGH); 
     digitalWrite(PIN_3, LOW); 
     digitalWrite(PIN_4, HIGH); 
     digitalWrite(PIN_5, HIGH); 
     digitalWrite(PIN_7, HIGH); 
     digitalWrite(PIN_10, LOW); 
     digitalWrite(PIN_11, HIGH);
     break;
   case 4:
     digitalWrite(PIN_1, LOW);
     digitalWrite(PIN_2, LOW); 
     digitalWrite(PIN_3, LOW); 
     digitalWrite(PIN_4, HIGH); 
     digitalWrite(PIN_5, HIGH); 
     digitalWrite(PIN_7, HIGH); 
     digitalWrite(PIN_10, HIGH); 
     digitalWrite(PIN_11, LOW);
     break;
   case 5:
     digitalWrite(PIN_1, LOW);
     digitalWrite(PIN_2, HIGH); 
     digitalWrite(PIN_3, LOW); 
     digitalWrite(PIN_4, HIGH); 
     digitalWrite(PIN_5, HIGH); 
     digitalWrite(PIN_7, LOW); 
     digitalWrite(PIN_10, HIGH); 
     digitalWrite(PIN_11, HIGH);
     break;
   case 6:
     digitalWrite(PIN_1, HIGH);
     digitalWrite(PIN_2, HIGH); 
     digitalWrite(PIN_3, LOW); 
     digitalWrite(PIN_4, HIGH); 
     digitalWrite(PIN_5, HIGH); 
     digitalWrite(PIN_7, LOW); 
     digitalWrite(PIN_10, HIGH); 
     digitalWrite(PIN_11, LOW);
     break;
   case 7:
     digitalWrite(PIN_1, LOW);
     digitalWrite(PIN_2, LOW); 
     digitalWrite(PIN_3, LOW); 
     digitalWrite(PIN_4, HIGH); 
     digitalWrite(PIN_5, LOW); 
     digitalWrite(PIN_7, HIGH); 
     digitalWrite(PIN_10, LOW); 
     digitalWrite(PIN_11, HIGH);
     break;
   case 8:
     digitalWrite(PIN_1, HIGH);
     digitalWrite(PIN_2, HIGH); 
     digitalWrite(PIN_3, LOW); 
     digitalWrite(PIN_4, HIGH); 
     digitalWrite(PIN_5, HIGH); 
     digitalWrite(PIN_7, HIGH); 
     digitalWrite(PIN_10, HIGH); 
     digitalWrite(PIN_11, HIGH);
     break;
   case 9:
     digitalWrite(PIN_1, LOW);
     digitalWrite(PIN_2, LOW); 
     digitalWrite(PIN_3, LOW); 
     digitalWrite(PIN_4, HIGH); 
     digitalWrite(PIN_5, HIGH); 
     digitalWrite(PIN_7, HIGH); 
     digitalWrite(PIN_10, HIGH); 
     digitalWrite(PIN_11, HIGH);
     break;
 } 
}

void loop() {
  value = analogRead(POT);
  int u = value % 10;
  int d = (value / 10) % 10;
  int c = (value / 100)  % 10;
  int m = (value / 1000) % 10;
  
 selectDigit(1);
 printNumber(m);
 delay(5);
 selectDigit(2);
 printNumber(c);
 delay(5);
 selectDigit(3);
 printNumber(d);
 delay(5);
 selectDigit(4);
 printNumber(u);
 delay(5);
}
