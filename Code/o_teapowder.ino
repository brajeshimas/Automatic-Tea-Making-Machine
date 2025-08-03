void teapowder(void)
{                                              // open at 70 close at 35
     for(int i=35;i<=70;i++)              
   {
      tea.write(i);                       
      delay(10);
      
   }
   delay(500);
   for(int i=70;i>=35;i--)          
   {
      tea.write(i);
      delay(10);
      
   }
}
