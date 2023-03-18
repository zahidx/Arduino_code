int led1 = D1;      
int led2 = D2;     
int led3 = D3;     
int led4 = D4;     
int led5 = D5;   

int brightness = 0;  
int fadeAmount = 5;  


void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

}


void loop() {
  
  analogWrite(led1, brightness);
  analogWrite(led2, brightness);
  analogWrite(led3, brightness);
  analogWrite(led4, brightness);
  analogWrite(led5, brightness);

  
  brightness = brightness + fadeAmount;

 
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30);
}
