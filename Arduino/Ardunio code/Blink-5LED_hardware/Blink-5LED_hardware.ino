int led1 = D1;      
int led2 = D2;     
int led3 = D3;     
int led4 = D4;     
int led5 = D5;  


void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}


void loop() {
  digitalWrite(led1, HIGH);  
  delay(500);                      
  digitalWrite(led1, LOW);  
  delay(500);   

  digitalWrite(led2, HIGH);  
  delay(500);                      
  digitalWrite(led2, LOW);  
  delay(500);   

  digitalWrite(led3, HIGH);  
  delay(500);                      
  digitalWrite(led3, LOW);  
  delay(500);   

  digitalWrite(led4, HIGH);  
  delay(500);                      
  digitalWrite(led4, LOW);  
  delay(500);   

  digitalWrite(led5, HIGH);  
  delay(500);                      
  digitalWrite(led5, LOW);  
  delay(500);   

}
