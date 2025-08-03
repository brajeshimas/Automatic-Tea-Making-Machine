void mselect(int x)
{ 
  int d=0;
  shiftoutpin(7,0);
  shiftoutpin(6,1);
  if(x>0)
  {
    while(d != x){
      analogread();
    if(uirval == 2)
     d++;
     while(uirval == 2)
     {
         analogread();
         //delay(10);
     }
   
    if(d==x)
    {
      for(int i = 0;i<3;i++)
      {  shiftoutpin(6,0);}
      //Serial.println("OFF");
    }
    }
    
  }
}
int analogread(void)
{
  for(int i=0;i<8;i++)
  {
  uirval = analogRead(A6);
  }
  if(uirval>=900)
     uirval = 0;
  else if(uirval <=80)
  {
     while(uirval<=80)
     {
         uirval = analogRead(A6);
         delay(10);
     }
     uirval = 2;
  }
  return uirval;
}
