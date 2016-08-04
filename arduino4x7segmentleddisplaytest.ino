//4 digitos x 7 segmentos

const int PATILLA1 = 1;
const int PATILLA2 = 2;
const int PATILLA3 = 3;
const int PATILLA4 = 4;
const int PATILLA5 = 5;
const int PATILLA6 = 6;
const int PATILLA7 = 7;
const int PATILLA8 = 8;
const int PATILLA9 = 9;
const int PATILLA10 = 10;
const int PATILLA11 = 11;
const int PATILLA12 = 12;
const int POTENCIOMETRO = 0;

int value = 0;

void setup() {
 pinMode(PATILLA1,OUTPUT);
 pinMode(PATILLA2,OUTPUT); 
 pinMode(PATILLA3,OUTPUT); 
 pinMode(PATILLA4,OUTPUT); 
 pinMode(PATILLA5,OUTPUT); 
 pinMode(PATILLA6,OUTPUT); 
 pinMode(PATILLA7,OUTPUT); 
 pinMode(PATILLA8,OUTPUT); 
 pinMode(PATILLA9,OUTPUT); 
 pinMode(PATILLA10,OUTPUT); 
 pinMode(PATILLA11,OUTPUT); 
 pinMode(PATILLA12,OUTPUT);
}

void selectDigit(int digit) {
 switch(digit) {
   case 1:
     digitalWrite(PATILLA12,LOW);
     digitalWrite(PATILLA9,HIGH);
     digitalWrite(PATILLA8,HIGH);
     digitalWrite(PATILLA6,HIGH);
     break;
   case 2:
     digitalWrite(PATILLA12,HIGH);
     digitalWrite(PATILLA9,LOW);
     digitalWrite(PATILLA8,HIGH);
     digitalWrite(PATILLA6,HIGH);
     break;
   case 3:
     digitalWrite(PATILLA12,HIGH);
     digitalWrite(PATILLA9,HIGH);
     digitalWrite(PATILLA8,LOW);
     digitalWrite(PATILLA6,HIGH);
     break;
   case 4:
     digitalWrite(PATILLA12,HIGH);
     digitalWrite(PATILLA9,HIGH);
     digitalWrite(PATILLA8,HIGH);
     digitalWrite(PATILLA6,LOW);
     break;
 } 
}

void printNumber(int num) {
 switch(num) {
   case 0:
     digitalWrite(PATILLA1, HIGH);
     digitalWrite(PATILLA2, HIGH); 
     digitalWrite(PATILLA3, LOW); 
     digitalWrite(PATILLA4, HIGH); 
     digitalWrite(PATILLA5, LOW); 
     digitalWrite(PATILLA7, HIGH); 
     digitalWrite(PATILLA10, HIGH); 
     digitalWrite(PATILLA11, HIGH);
     break;
   case 1:
     digitalWrite(PATILLA1, LOW);
     digitalWrite(PATILLA2, LOW); 
     digitalWrite(PATILLA3, LOW); 
     digitalWrite(PATILLA4, HIGH); 
     digitalWrite(PATILLA5, LOW); 
     digitalWrite(PATILLA7, HIGH); 
     digitalWrite(PATILLA10, LOW); 
     digitalWrite(PATILLA11, LOW);
     break;
   case 2:
     digitalWrite(PATILLA1, HIGH);
     digitalWrite(PATILLA2, HIGH); 
     digitalWrite(PATILLA3, LOW); 
     digitalWrite(PATILLA4, LOW); 
     digitalWrite(PATILLA5, HIGH); 
     digitalWrite(PATILLA7, HIGH); 
     digitalWrite(PATILLA10, LOW); 
     digitalWrite(PATILLA11, HIGH);
     break;
   case 3:
     digitalWrite(PATILLA1, LOW);
     digitalWrite(PATILLA2, HIGH); 
     digitalWrite(PATILLA3, LOW); 
     digitalWrite(PATILLA4, HIGH); 
     digitalWrite(PATILLA5, HIGH); 
     digitalWrite(PATILLA7, HIGH); 
     digitalWrite(PATILLA10, LOW); 
     digitalWrite(PATILLA11, HIGH);
     break;
   case 4:
     digitalWrite(PATILLA1, LOW);
     digitalWrite(PATILLA2, LOW); 
     digitalWrite(PATILLA3, LOW); 
     digitalWrite(PATILLA4, HIGH); 
     digitalWrite(PATILLA5, HIGH); 
     digitalWrite(PATILLA7, HIGH); 
     digitalWrite(PATILLA10, HIGH); 
     digitalWrite(PATILLA11, LOW);
     break;
   case 5:
     digitalWrite(PATILLA1, LOW);
     digitalWrite(PATILLA2, HIGH); 
     digitalWrite(PATILLA3, LOW); 
     digitalWrite(PATILLA4, HIGH); 
     digitalWrite(PATILLA5, HIGH); 
     digitalWrite(PATILLA7, LOW); 
     digitalWrite(PATILLA10, HIGH); 
     digitalWrite(PATILLA11, HIGH);
     break;
   case 6:
     digitalWrite(PATILLA1, HIGH);
     digitalWrite(PATILLA2, HIGH); 
     digitalWrite(PATILLA3, LOW); 
     digitalWrite(PATILLA4, HIGH); 
     digitalWrite(PATILLA5, HIGH); 
     digitalWrite(PATILLA7, LOW); 
     digitalWrite(PATILLA10, HIGH); 
     digitalWrite(PATILLA11, LOW);
     break;
   case 7:
     digitalWrite(PATILLA1, LOW);
     digitalWrite(PATILLA2, LOW); 
     digitalWrite(PATILLA3, LOW); 
     digitalWrite(PATILLA4, HIGH); 
     digitalWrite(PATILLA5, LOW); 
     digitalWrite(PATILLA7, HIGH); 
     digitalWrite(PATILLA10, LOW); 
     digitalWrite(PATILLA11, HIGH);
     break;
   case 8:
     digitalWrite(PATILLA1, HIGH);
     digitalWrite(PATILLA2, HIGH); 
     digitalWrite(PATILLA3, LOW); 
     digitalWrite(PATILLA4, HIGH); 
     digitalWrite(PATILLA5, HIGH); 
     digitalWrite(PATILLA7, HIGH); 
     digitalWrite(PATILLA10, HIGH); 
     digitalWrite(PATILLA11, HIGH);
     break;
   case 9:
     digitalWrite(PATILLA1, LOW);
     digitalWrite(PATILLA2, LOW); 
     digitalWrite(PATILLA3, LOW); 
     digitalWrite(PATILLA4, HIGH); 
     digitalWrite(PATILLA5, HIGH); 
     digitalWrite(PATILLA7, HIGH); 
     digitalWrite(PATILLA10, HIGH); 
     digitalWrite(PATILLA11, HIGH);
     break;
 } 
}

void loop() {
  value = analogRead(POTENCIOMETRO);
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
