void liquid(int c , int water_milk)          // where c = amount of cup     
                                             // water_milk telss about what have to take from bottle water or milk 
   {                                          // eg- 1 for water 2 for milk

       if(c > 0 && water_milk == 1)
       {
          ftime = c*3000;
          digitalWrite(A3,1);
          delay(ftime);
          digitalWrite(A3,0);
          delay(10);
       }
       else if(c > 0 && water_milk == 2)
       {
           ftime = c*3000;
           digitalWrite(A2,1);
           delay(ftime);
           digitalWrite(A2,0);
           delay(10);
       }
       else if( c==0 && water_milk == 1)
       {
          digitalWrite(A3,1);
          delay(500);
          digitalWrite(A3,0);
          delay(10);
       }
       else if( c==0 && water_milk == 2)
       {
           digitalWrite(A2,0);
           digitalWrite(A3,0);
           delay(10);
       }
       
   }
