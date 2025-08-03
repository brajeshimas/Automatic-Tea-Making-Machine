int cupslider(int a)
{
  shiftoutpin(7,0);
  shiftoutpin(6,0);
  shiftoutpin(5,0);
  shiftoutpin(4,0);
  count = 0;
  int flag = 0;
  if(a==0)
  {
  shiftoutpin(5,1);
  for(int i=0;i<8;i++)                                     // a==0 for initialization
    llimitval = shiftinpin(3);                             //a==1   for goout for filling cups
  while(llimitval != 0){                                    //  a== 2  for filling chay or coffe 
     llimitval = shiftinpin(3);}                             // a==3    for go in and check counting of cups
  shiftoutpin(5,0);
  }
  else if(a==1)
  {
    shiftoutpin(4,1);
    shiftoutpin(5,0);
      for(int i=0;i<8;i++)
           llimitval2 = digitalRead(13);
     while(llimitval2 != 1)
     {
      llimitval2  = digitalRead(13);
     }
    shiftoutpin(4,0);
  }
  else if(a==2)
  {
    shiftoutpin(4,1);
     while(flag == 0)
     {
          for(int i=0;i<8;i++)
            lirval = shiftinpin(4);
        if(lirval == 4)
        {
          shiftoutpin(4,0);
          Teaout(2);
          shiftoutpin(4,1);
          while(lirval == 4)
          {
            lirval = shiftinpin(4);
          }
          count++;
        }
        while(button == count)
        {
          llimitval2 = digitalRead(13);
          if(llimitval2 == 1)
          {
            shiftoutpin(4,0);
            flag = 1;
            count = 0;
          }
        }
       llimitval2 = digitalRead(13);
       if(llimitval2 == 1)
       {
           shiftoutpin(4,0);
           flag = 1;
       }
     }
    
  }
  else if(a==3)
  {
    flag = 0;
    shiftoutpin(5,1);
           for(int i=0;i<8;i++)
            llimitval = shiftinpin(3);
    while(flag == 0)
    { 
      llimitval = shiftinpin(3);
      if(llimitval == 0)
        {
          shiftoutpin(5,0);
          flag = 1;
        }
         for(int i=0;i<8;i++)
            lirval = shiftinpin(4);
         if(lirval == 4)
         {
          while(lirval != 0)
             {
              lirval = shiftinpin(4);
              delay(10);
                    llimitval = shiftinpin(3);
                  if(llimitval == 0)
                   {
                         shiftoutpin(5,0);
                            flag = 1;
                            lirval = 0;
                   }
             }
          count++;
         }
    }
    return count;
  }
  

}
