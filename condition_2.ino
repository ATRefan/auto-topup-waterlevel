void Cond2(){
  digitalWrite(Out_Re2,HIGH);
  if(rcm2<=37){
    digitalWrite(Out_Re2,LOW);
    digitalWrite(In_Re2,HIGH);
    digitalWrite(Pump_Pin,HIGH);
    j=1;
  }
  if(rcm2>=50 && j==1){
    digitalWrite(Out_Re2,LOW);
    digitalWrite(Pump_Pin,LOW);
    digitalWrite(In_Re2,LOW);
    j=2;
  }
}
