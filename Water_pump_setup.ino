#include <LiquidCrystal.h>
 
#define trigger 10
#define echo 11
#define motor 8
#define buzzer 12
 
LiquidCrystal lcd(7,6,5,4,3,2);
 
float time=0,distance=0;
int temp=0;


void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
pinMode(trigger,OUTPUT);
pinMode(echo,INPUT);
pinMode(motor, OUTPUT);
pinMode(buzzer, OUTPUT);
lcd.print("  Water Level ");
lcd.setCursor(0,1);
lcd.print("   Indicator  ");
delay(2000);
}
