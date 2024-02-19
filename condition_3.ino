void Cond3(){
  digitalWrite(Out_Re3,HIGH);
  if(rcm3<=37){
    digitalWrite(Out_Re3,LOW);
    digitalWrite(In_Re3,HIGH);
    digitalWrite(Pump_Pin,HIGH);
    j=1;
  }
  if(rcm3>=50 && j==1){
    digitalWrite(Out_Re3,LOW);
    digitalWrite(Pump_Pin,LOW);
    digitalWrite(In_Re3,LOW);
    j=2;
  }
}
