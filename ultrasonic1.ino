void Sonar1(){
  digitalWrite(T_Son1,LOW);
  delayMicroseconds(2);
  digitalWrite(T_Son1, HIGH);
  delayMicroseconds(10);
  digitalWrite(T_Son1, LOW);
  duration1 = pulseIn(E_Son1,HIGH);
  cm1 = microsecondsToCentimeters1(duration1);
  rcm1 = cm1 - 117;
  lcd.setCursor(0,0);
  lcd.print("Tank 1 =");
  lcd.setCursor(9,0);
  lcd.print(rcm1);
  lcd.setCursor(12,0);
  lcd.print("cm");
}
