void Sonar2(){
  digitalWrite(T_Son2,LOW);
  delayMicroseconds(2);
  digitalWrite(T_Son2, HIGH);
  delayMicroseconds(10);
  digitalWrite(T_Son2, LOW);
  duration2 = pulseIn(E_Son2,HIGH);
  cm2 = microsecondsToCentimeters2(duration2);
  rcm2 = cm2 - 117;
  lcd.setCursor(0,1);
  lcd.print("Tank 2 =");
  lcd.setCursor(9,1);
  lcd.print(rcm2);
  lcd.setCursor(12,1);
  lcd.print("cm");
}
