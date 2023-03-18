void setup() {

pinMode(D1, OUTPUT);
Serial.begin(9600);
   
}

void loop() {

if (Serial.available()){
  char data;
  data=Serial.read();
  Serial.println(data);

  if (data =='o'){
    digitalWrite(D1,HIGH);
    delay(1000); 
  }

  else if(data =='c'){
    digitalWrite(D1,LOW);
    delay(1000);
  }
}
  
}