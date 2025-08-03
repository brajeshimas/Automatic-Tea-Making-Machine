void greenpowder(void)
{
     for(int i=125;i>=85;i--)
   {
      coffee.write(i);
      delay(10);
      
   }                                      // open at 85 close at 125
   delay(500);
   for(int i=85;i<=125;i++)
   {
      coffee.write(i);
      delay(10);
      
   }
}
