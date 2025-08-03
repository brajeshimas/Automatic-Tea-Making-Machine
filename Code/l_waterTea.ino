void waterTea(void)
{
  long int t = 2*60000;
   liquid(10 , 1);
   mselect(1);                          // for  taking teapowder
   teapowder();                                                   
//************************
   for(int j=0; j<4;j++)
    {initialization();}
    delay(350);
//**************************
   mselect(3);                         
    Sugar();    // for taking sugar from sugar bottle
//***************************   
  for(int j=0; j<4;j++)
    {initialization();}
   delay(t);
   digitalWrite(A1 ,0);
}
