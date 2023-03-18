#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int gas;
int led = 13;

void setup ()
{
  lcd.begin();
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop()
{
  gas = analogRead(A0);
  Serial.println(gas);
  lcd.setCursor(0,0);
  lcd.print("Gas Value = ");
  lcd.print(gas);
  if(gas >150)
  {
    digitalWrite(led, HIGH);
  }
  else {
      digitalWrite(led, LOW);
  }
  delay(500);
  lcd.clear();
}





