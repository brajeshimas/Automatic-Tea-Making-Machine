
int shiftinpin(int pin )
{
    // Write pulse to load pin
  digitalWrite(load, LOW);
  delayMicroseconds(5);
  digitalWrite(load, HIGH);
  delayMicroseconds(5);
 
  // Get data from 74HC165
  digitalWrite(clockIn, HIGH);
  digitalWrite(clockEnablePin, LOW);
  byte incoming = shiftIn(dataIn, clockIn, MSBFIRST);
  digitalWrite(clockEnablePin, HIGH);
   incoming = ~incoming;
   int b = incoming;
      
          int one=0;
          int two = 0;
          int three = 0;
          int four = 0;
     int five = 0;
     int six=0;
     int seven=0;
     int eight=0;
  if(b<16)
  {    
    if(b==1)
       one = 1;
    if(b==2)
       two = 1;
    if(b==3)
     { one = 1;
      two = 1;
     }
     if(b==4)
     {
       three = 1 ;
     }
          if(b==5)
     {
          three = 1 ;
          one = 1;
     }
      if(b==6)
     {
       three = 1 ;
       two = 1;
     }
      if(b==7)
     {
       three = 1 ;
       two = 1;
       one = 1;
     }
      if(b==8)
     {
       four = 1 ;
     }
     if(b==9)
     {
      four = 1;
      one = 1;
     }
     if(b==10)
     {
      four = 1;
      three = 1;
     }
     if(b==11)
     {
      one = 1;
      two = 2;
      four = 4;
     }
     else if(b==12)
     {
      three = 1;
      four = 1;
      
     }
    else if(b==13)
     {
       three = 1;
      four = 1;
      one = 1;
     }
     else if(b==14)
     {
       three = 1;
      four = 1;
      two = 1;
     }
     else if(b==15)
     {
      one =1;
      two=1;
       three = 1;
      four = 1;
     }
  }

  if(b>15)
{

  if(b<32)
      five = 1;
   else if(b>=32 && b<64)
      six  = 1;
   else if(b>=64 && b<128)
       seven = 1;
   else if(b>=128 && b<255)
       eight = 1;

}
     if((pin == 1 && one == 1)||(pin == 2 && two == 1)||(pin == 3 && three == 1)||(pin == 4 && four == 1))
        return pin;
     else if((pin == 5 && five == 1)&& six ==0 && seven ==0 && eight ==0)
        return pin;
     else if((pin == 6 && six == 1)&& five ==0 && seven ==0 && eight ==0)
        return pin;
     else if((pin == 7 && seven == 1)&& six ==0 && five ==0 && eight ==0)
         return pin;
     else if((pin == 8 && eight == 1)&& six ==0 && seven ==0 && five ==0)
         return pin;
     else
        return 0;
}
