void initialization(void)
{
  for(int i =0;i<8; i++)
  ulimitval = shiftinpin(1);
  if(ulimitval==1){
 
     shiftoutpin(7,1);
     shiftoutpin(6,0);
  }
  
  while(ulimitval==1){
    ulimitval = shiftinpin(1);  
} 
shiftoutpin(7,0);

}
