void Cond4(){
  digitalWrite(Out_Re1,HIGH);
  digitalWrite(Out_Re2,HIGH);
  digitalWrite(Out_Re3,HIGH);
  if(rcm1<=37){
      digitalWrite(Out_Re1,LOW);
      k=1;
  }
  if(rcm2<=37){
      digitalWrite(Out_Re2, LOW);
      l=1;
  }
  if(rcm3<=37){
      digitalWrite(Out_Re3,LOW);
      m=1;
  }
  if(k==1 && l==1){
    n=1;
  }
  if(m==1 && n==1){
    o=1;
  }
  if(o==1){
    digitalWrite(Out_Re1,LOW);
    digitalWrite(Out_Re2,LOW);
    digitalWrite(Out_Re3,LOW);
    digitalWrite(In_Re1,HIGH);
    digitalWrite(Pump_Pin,HIGH);
    if(rcm1>=50){
      digitalWrite(Out_Re1,LOW);
      digitalWrite(Out_Re2,LOW);
      digitalWrite(Out_Re3,LOW);
      digitalWrite(In_Re2,HIGH);
      digitalWrite(In_Re1,LOW);
      if(rcm2>=50){
        digitalWrite(Out_Re1,LOW);
        digitalWrite(Out_Re2,LOW);
        digitalWrite(Out_Re3,LOW);
        digitalWrite(In_Re3,HIGH);
        digitalWrite(In_Re2,LOW);
        digitalWrite(In_Re1,LOW);
        if(rcm3>=50){
          digitalWrite(Out_Re1,LOW);
          digitalWrite(Out_Re2,LOW);
          digitalWrite(Out_Re3,LOW);
          digitalWrite(Pump_Pin,LOW);
          digitalWrite(In_Re3,LOW);
          digitalWrite(In_Re2,LOW);
          digitalWrite(In_Re1,LOW);
          o=2;
        }
      }
    }
  }
}
