void Sugar(void)
{
   for(int i=90;i>=55;i--)
   {
      sugar.write(i);                          // open at 55  close at 90
      delay(10);
      
   }
   delay(500);
   for(int i=55;i<=90;i++)
   {
      sugar.write(i);
      delay(10);
      
   }
}
