void setup() {

pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
Serial.begin(9600);
   
}

void loop() {

if (Serial.available()){
  char data;
  data=Serial.read();
  Serial.println(data);

  if (data =='a'|| data =='A'){
    digitalWrite(8,HIGH);
    delay(1000); 
  }

  else if(data =='b' || data =='B'){
    digitalWrite(10,HIGH);
    delay(1000);
  }

  else if(data =='n' || data =='N'){
    digitalWrite(9,HIGH);
    delay(1000);
  }

  
  else if(data =='m' || data =='M'){
    digitalWrite(9,LOW);
    delay(1000);
  }

  else if(data =='c' || data =='C'){
    digitalWrite(11,HIGH);
    delay(1000);
  }

 else if(data =='d' || data =='D'){
    digitalWrite(12,HIGH);
    delay(1000);
  }

  else if(data =='e' || data =='E'){
    digitalWrite(13,HIGH);
    delay(1000);
  }

  else if(data =='1'){
    digitalWrite(8,LOW);
    delay(1000);
  }

  else if(data =='2'){
    digitalWrite(10,LOW);
    delay(1000);
  }

  else if(data =='3'){
    digitalWrite(11,LOW);
    delay(1000);
  }

  else if(data =='4'){
    digitalWrite(12,LOW);
    delay(1000);
  }

  else if(data =='5'){
    digitalWrite(13,LOW);
    delay(1000);
  }

  else if(data =='o'|| data =='O'){
    digitalWrite(8,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(9,HIGH);
    delay(1000);
  }

  
  else if(data =='f'|| data =='F'){
    digitalWrite(8,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    delay(1000);
  }

}
  
}