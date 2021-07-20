
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <Adafruit_MLX90614.h>
Adafruit_MLX90614 mlx = Adafruit_MLX90614();

LiquidCrystal_I2C lcd(0x27,16,2);  

void setup()
{
  mlx.begin();  
  lcd.init();                      
  lcd.backlight();
}


void loop()
{
  lcd.setCursor(1,0);
  if(mlx.readObjectTempC()>37){
    delay(1000);
    lcd.print("Anda Corona!!");
    
  }
  lcd.print(" KKNP UMSIDA 2021 ");
  lcd.print(" CEK SUHU TUBUH  ");
  lcd.setCursor(2,1);
  lcd.print(" CEK SUHU TUBUH  ");
  lcd.print(" SUHU: ");
  lcd.print(mlx.readObjectTempC());
  lcd.print("C    ");
  delay(500);
}
