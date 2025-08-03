int buttan(void)
{

  shiftoutpin(0,1);
  shiftoutpin(1,1);
  shiftoutpin(2,1);
  shiftoutpin(3,1);
  upper:
  int b = 0;
  int f = 0;
  int l = 5;
  button = -1;
  for(int i=0;i<4;i++)
  {
    
    shiftoutpin(i,0);
    for(int j =5;j<9;j++)
    {
      for(int a=0;a<8;a++){
         b = shiftinpin(j);}
      if(b==j)
      {

        if(b==8)
        {
          if(i==0)
             button = 1;
           else if(i==1)
              button = 2;
           else if(i==2)
              button = 3;
            else if(i==3)
              button = 10;               // 10 means "A"
        }
        else if(b==7)
        {
           if(i==0)
             button = 4;
           else if(i==1)
              button = 5;
           else if(i==2)
              button = 6;
            else if(i==3)
              button = 11;                  // 11 means "B"
        }
        else if(b==6)
        {
           if(i==0)
             button = 7;
           else if(i==1)
              button = 8;
           else if(i==2)
              button = 9;
            else if(i==3)
              button = 12;               // 12 means "C"
        }
        else if(b== 5)
        {
           if(i==0)
             button = 15 ;              // 15 means " *"
           else if(i==1)
              button = 0;
           else if(i==2)
              button = 14;              //   14 means " #"
            else if(i==3)
              button = 13;            // 13 means "D"
        }
        f=1;
        shiftoutpin(i,1);
        return button;
        break;
      }
    }
    
    shiftoutpin(i,1);
  }
  if(f != 1)
    goto upper;
}
