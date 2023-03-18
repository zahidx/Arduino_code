const int ledPin7 = 7; 
const int inputPin1 = 1; 

const int ledPin8 = 8; 
const int inputPin2 = 2; 

const int ledPin9 = 9; 
const int inputPin3 = 3; 

const int ledPin10 = 10; 
const int inputPin4 = 4; 

const int ledPin11 = 11; 
const int inputPin5 = 5; 

void setup(){
  pinMode(ledPin7, OUTPUT); 
  pinMode(inputPin1, INPUT);  

  pinMode(ledPin8, OUTPUT); 
  pinMode(inputPin2, INPUT); 

  pinMode(ledPin9, OUTPUT); 
  pinMode(inputPin3, INPUT); 

  pinMode(ledPin10, OUTPUT); 
  pinMode(inputPin4, INPUT); 

  pinMode(ledPin11, OUTPUT); 
  pinMode(inputPin5, INPUT); 
}

void loop(){
  int val1 = digitalRead(inputPin1); 
  int val2 = digitalRead(inputPin2); 
  int val3 = digitalRead(inputPin3); 
  int val4 = digitalRead(inputPin4); 
  int val5 = digitalRead(inputPin5); 


  if (val1 == HIGH){
  digitalWrite(ledPin7, HIGH); 
  }
  else{
    digitalWrite(ledPin7, LOW); 
  }

  if (val2 == HIGH){
  digitalWrite(ledPin8, HIGH); 
  }
  else{
    digitalWrite(ledPin8, LOW); 
  }

  if (val3 == HIGH){
  digitalWrite(ledPin9, HIGH); 
  }
  else{
    digitalWrite(ledPin9, LOW); 
  }

  if (val4 == HIGH){
  digitalWrite(ledPin10, HIGH); 
  }
  else{
    digitalWrite(ledPin10, LOW); 
  }

  if (val5 == HIGH){
  digitalWrite(ledPin11, HIGH); 
  }
  else{
    digitalWrite(ledPin11, LOW); 
  }
}