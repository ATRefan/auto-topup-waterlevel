#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20, 20, 4);

const int T_Son1 = 13; // tank 1 ultrasonic
const int E_Son1 = 12;
const int T_Son2 = 11; // tank 2 ultrasonic
const int E_Son2 = 10;
const int T_Son3 = 9; // tank 3 ultrasonic
const int E_Son3 = 8;
int Out_Re1 = 22; // output solenoid 1
int Out_Re2 = 23; // output solenoid 2
int Out_Re3 = 24; // output solenoid 3
int In_Re1 = 25; // input solenoid 1
int In_Re2 = 26; // input solenoid 2
int In_Re3 = 27; // input solenoid 3
int selector = 28; // tank selector pin
int ok_pin = 29; // confirmation pin
int Pump_Pin = 30; // water pump
int selectStatus;
int execute;
int i;
int ok;
int j;
int k;
int l;
int m;
int n;
int o;

long duration1; 
long cm1;
long rcm1;
long duration2;
long cm2;
long rcm2;
long duration3;
long cm3;
long rcm3;

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  pinMode(T_Son1, OUTPUT);
  pinMode(E_Son1, INPUT);
  pinMode(T_Son2, OUTPUT);
  pinMode(E_Son2, INPUT);
  pinMode(T_Son3, OUTPUT);
  pinMode(E_Son3, INPUT);  
  pinMode(Out_Re1, OUTPUT);
  pinMode(Out_Re2, OUTPUT);
  pinMode(Out_Re3, OUTPUT);
  pinMode(In_Re1, OUTPUT);
  pinMode(In_Re2, OUTPUT);
  pinMode(In_Re3, OUTPUT);
  pinMode(selector, INPUT);
  pinMode(ok_pin, INPUT);
  pinMode(Pump_Pin, OUTPUT);
  i=0;
  ok=0;
  j=0;
  k=0;
}

void loop() {
  Sonar1();
  Sonar2();
  Sonar3();
  selectStatus = digitalRead(selector);
  execute = digitalRead(ok_pin);
  if(selectStatus == HIGH){
    i++;
  }
  if(execute == HIGH){
    ok++;
  }
  if(j==2){
    i=0;
    ok=0;
    j=0;
  }
  if(o==2){
    i=0;
    ok=0;
    j=0;
    k=0;
    l=0;
    m=0;
    n=0;
    o=0;
  }
  if(i==1){
    lcd.setCursor(0,3);
    lcd.print("Aquarium 1 WC");
    if(i==1 && ok==1){
      Cond1();
    }
  } else if (i==2){
    lcd.setCursor(0,3);
    lcd.print("Aquarium 2 WC");
    if(i==2 && ok==1){
      Cond2();
    }
  } else if (i==3){
    lcd.setCursor(0,3);
    lcd.print("Aquarium 3 WC");
    if(i==3 && ok==1){
      Cond3();      
    }
  } else if(i==4){
    lcd.setCursor(0,3);
    lcd.print("All Aquarium WC");
    if(i==4 && ok==1){
       Cond4();
    }
  } else {
      i = 0;
      ok = 0;
  }
  delay(1000);
  lcd.clear();
}

long microsecondsToCentimeters1(long microseconds1)
{
return microseconds1 / 29 / 2;
}

long microsecondsToCentimeters2(long microseconds2)
{
return microseconds2 / 29 / 2;
}

long microsecondsToCentimeters3(long microseconds3)
{
return microseconds3 / 29 / 2;
}
