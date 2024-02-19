void Cond1(){
  digitalWrite(Out_Re1,HIGH);
  if(rcm1<=37){
    digitalWrite(Out_Re1,LOW);
    digitalWrite(In_Re1,HIGH);
    digitalWrite(Pump_Pin,HIGH);
    j=1;
  }
  if(rcm1>=50 && j==1){
    digitalWrite(Out_Re1,LOW);
    digitalWrite(Pump_Pin,LOW);
    digitalWrite(In_Re1,LOW);
    j=2;
  }
}
