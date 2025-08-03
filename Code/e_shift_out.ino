void shiftoutpin(int pin_no ,int logic)
{
    if(logic==1)
        bitSet(led ,pin_no);     
    else if(logic==0)
        bitClear(led ,pin_no);
  digitalWrite(latch,0);
  shiftOut(data,clk,MSBFIRST,led);
  digitalWrite(latch,1);
}
