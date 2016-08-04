//4 digits x 7 segments

const int PIN1 = 1;
const int PIN2 = 2;
const int PIN3 = 3;
const int PIN4 = 4;
const int PIN5 = 5;
const int PIN6 = 6; // Used to select digit
const int PIN7 = 7;
const int PIN8 = 8; // Used to select digit
const int PIN9 = 9; // Used to select digit
const int PIN10 = 10;
const int PIN11 = 11;
const int PIN12 = 12; // Used to select digit
const int POT = 0;

int value = 0;

void setup() {
 pinMode(PIN1,OUTPUT);
 pinMode(PIN2,OUTPUT); 
 pinMode(PIN3,OUTPUT); 
 pinMode(PIN4,OUTPUT); 
 pinMode(PIN5,OUTPUT); 
 pinMode(PIN6,OUTPUT); 
 pinMode(PIN7,OUTPUT); 
 pinMode(PIN8,OUTPUT); 
 pinMode(PIN9,OUTPUT); 
 pinMode(PIN10,OUTPUT); 
 pinMode(PIN11,OUTPUT); 
 pinMode(PIN12,OUTPUT);
}

void selectDigit(int digit) {
 switch(digit) {
   case 1:
     digitalWrite(PIN12,LOW);
     digitalWrite(PIN9,HIGH);
     digitalWrite(PIN8,HIGH);
     digitalWrite(PIN6,HIGH);
     break;
   case 2:
     digitalWrite(PIN12,HIGH);
     digitalWrite(PIN9,LOW);
     digitalWrite(PIN8,HIGH);
     digitalWrite(PIN6,HIGH);
     break;
   case 3:
     digitalWrite(PIN12,HIGH);
     digitalWrite(PIN9,HIGH);
     digitalWrite(PIN8,LOW);
     digitalWrite(PIN6,HIGH);
     break;
   case 4:
     digitalWrite(PIN12,HIGH);
     digitalWrite(PIN9,HIGH);
     digitalWrite(PIN8,HIGH);
     digitalWrite(PIN6,LOW);
     break;
 } 
}

void printNumber(int num) {
 switch(num) {
   case 0:
     digitalWrite(PIN1, HIGH);
     digitalWrite(PIN2, HIGH); 
     digitalWrite(PIN3, LOW); 
     digitalWrite(PIN4, HIGH); 
     digitalWrite(PIN5, LOW); 
     digitalWrite(PIN7, HIGH); 
     digitalWrite(PIN10, HIGH); 
     digitalWrite(PIN11, HIGH);
     break;
   case 1:
     digitalWrite(PIN1, LOW);
     digitalWrite(PIN2, LOW); 
     digitalWrite(PIN3, LOW); 
     digitalWrite(PIN4, HIGH); 
     digitalWrite(PIN5, LOW); 
     digitalWrite(PIN7, HIGH); 
     digitalWrite(PIN10, LOW); 
     digitalWrite(PIN11, LOW);
     break;
   case 2:
     digitalWrite(PIN1, HIGH);
     digitalWrite(PIN2, HIGH); 
     digitalWrite(PIN3, LOW); 
     digitalWrite(PIN4, LOW); 
     digitalWrite(PIN5, HIGH); 
     digitalWrite(PIN7, HIGH); 
     digitalWrite(PIN10, LOW); 
     digitalWrite(PIN11, HIGH);
     break;
   case 3:
     digitalWrite(PIN1, LOW);
     digitalWrite(PIN2, HIGH); 
     digitalWrite(PIN3, LOW); 
     digitalWrite(PIN4, HIGH); 
     digitalWrite(PIN5, HIGH); 
     digitalWrite(PIN7, HIGH); 
     digitalWrite(PIN10, LOW); 
     digitalWrite(PIN11, HIGH);
     break;
   case 4:
     digitalWrite(PIN1, LOW);
     digitalWrite(PIN2, LOW); 
     digitalWrite(PIN3, LOW); 
     digitalWrite(PIN4, HIGH); 
     digitalWrite(PIN5, HIGH); 
     digitalWrite(PIN7, HIGH); 
     digitalWrite(PIN10, HIGH); 
     digitalWrite(PIN11, LOW);
     break;
   case 5:
     digitalWrite(PIN1, LOW);
     digitalWrite(PIN2, HIGH); 
     digitalWrite(PIN3, LOW); 
     digitalWrite(PIN4, HIGH); 
     digitalWrite(PIN5, HIGH); 
     digitalWrite(PIN7, LOW); 
     digitalWrite(PIN10, HIGH); 
     digitalWrite(PIN11, HIGH);
     break;
   case 6:
     digitalWrite(PIN1, HIGH);
     digitalWrite(PIN2, HIGH); 
     digitalWrite(PIN3, LOW); 
     digitalWrite(PIN4, HIGH); 
     digitalWrite(PIN5, HIGH); 
     digitalWrite(PIN7, LOW); 
     digitalWrite(PIN10, HIGH); 
     digitalWrite(PIN11, LOW);
     break;
   case 7:
     digitalWrite(PIN1, LOW);
     digitalWrite(PIN2, LOW); 
     digitalWrite(PIN3, LOW); 
     digitalWrite(PIN4, HIGH); 
     digitalWrite(PIN5, LOW); 
     digitalWrite(PIN7, HIGH); 
     digitalWrite(PIN10, LOW); 
     digitalWrite(PIN11, HIGH);
     break;
   case 8:
     digitalWrite(PIN1, HIGH);
     digitalWrite(PIN2, HIGH); 
     digitalWrite(PIN3, LOW); 
     digitalWrite(PIN4, HIGH); 
     digitalWrite(PIN5, HIGH); 
     digitalWrite(PIN7, HIGH); 
     digitalWrite(PIN10, HIGH); 
     digitalWrite(PIN11, HIGH);
     break;
   case 9:
     digitalWrite(PIN1, LOW);
     digitalWrite(PIN2, LOW); 
     digitalWrite(PIN3, LOW); 
     digitalWrite(PIN4, HIGH); 
     digitalWrite(PIN5, HIGH); 
     digitalWrite(PIN7, HIGH); 
     digitalWrite(PIN10, HIGH); 
     digitalWrite(PIN11, HIGH);
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
