void Teaout(int t)
{  
      t = t*1000;                  // t is time in second           
                                   // initial position = 50 degree  and final position = 140 degree
     for(int i=50;i<=140;i++)              
   {
      teaout.write(i);                       
      delay(10);
      
   }
   delay(t);
   for(int i=140;i>=50;i--)           
   {
      teaout.write(i);
      delay(10);
      
   }
}
