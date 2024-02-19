void Sonar3(){
  digitalWrite(T_Son3,LOW);
  delayMicroseconds(2);
  digitalWrite(T_Son3, HIGH);
  delayMicroseconds(10);
  digitalWrite(T_Son3, LOW);
  duration3 = pulseIn(E_Son3,HIGH);
  cm3 = microsecondsToCentimeters3(duration3);
  rcm3 = cm3 - 117;
  lcd.setCursor(0,2);
  lcd.print("Tank 3 =");
  lcd.setCursor(9,2);
  lcd.print(rcm3);
  lcd.setCursor(12,2);
  lcd.print("cm");
}
