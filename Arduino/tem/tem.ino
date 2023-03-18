#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
  dht.begin();
  lcd.begin();
}

void loop(){
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Serial.print("Humidity = ");
  Serial.print(h);
  Serial.print("%     Temperature = ");
  Serial.print(t);
  Serial.println("℃");
  lcd.setCursor(0,0);
  lcd.print("Humidity= ");
  lcd.print(h);
  lcd.print("%");
  lcd.setCursor(0,1);
  lcd.print("Tem: ");
  lcd.print(t);
  lcd.print((char)223);
    lcd.print("c");

  if( isnan(h) || isnan(t) ){
    Serial.println("Sensor connection Error!");
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("sensor Error!");

  }

  delay(2000);
}
