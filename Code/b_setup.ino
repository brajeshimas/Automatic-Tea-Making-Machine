void setup()
{
    // Setup 74HC165 connections
  pinMode(load, OUTPUT);
  pinMode(clockEnablePin, OUTPUT);
  pinMode(clockIn, OUTPUT);
  pinMode(dataIn, INPUT);

  //*************************************************
  pinMode(latch,OUTPUT);
  pinMode(data,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(13,INPUT);
  //*********************************
     pinMode(A1,OUTPUT);
     pinMode(A2,OUTPUT);
     pinMode(A3,OUTPUT);
     pinMode(A6,INPUT);
  //***********************************
  coffee.attach(2);   // open at 85 close at 125
  tea.attach(3);      // open at 70 close at 35
  sugar.attach(4);    // open at 55  close at 90
  teaout.attach(5);   //  initial positiion = 50 degree and final position = 140 degree.
//******************************************
     coffee.write(125);
     tea.write(35);
     sugar.write(90);
     teaout.write(50);
 //*************************************** 
 lcd.begin();
 //password();
 lcd.print("STARTING...");
   digitalWrite(A1,1);
   digitalWrite(A2,0);
   digitalWrite(A3,0);
 //****************************
    for(int i = 0; i<4;i++)
    {
      cupslider(0);
      initialization();
    }
    button = -1;
//*****************************************************************************************************************************   
  if(EEPROM.read(1)==1)                                      // for remembering that previous material is to clean from kettle
  {
    lcd.clear();
    lcd.setCursor(5,0); //   lcd.setCursor(coloumn , row)
    lcd.print("Please !");
    lcd.setCursor(0,1);
    lcd.print("Clean The Kettle");
    while(button == -1)
    {
      button = buttan();
      if(button != 13)
      {
        button = -1;
      }
    }
    EEPROM.write(1,0);
  }
//*********************************************************************************************************************************************
  button = -1;
 lcd.clear();
 lcd.print("MTea/WTea/GTea");
 flag = 0;                                                        //
 while(flag == 0 )
 {
  
    button = buttan();
    if((button == 10)||(button == 11)||(button == 12))
        flag = 1;
 }
 //*******************************************************************************************************
 if(button == 10)
 {
   button = -1;
   lcd.clear();
   lcd.print("Sure For MTea");
   lcd.setCursor(5,1);
   lcd.print("?");
   while(button != 13)
   {
     button = buttan();
   }
   //password();
   lcd.clear();
   lcd.print("Sorry,");
   lcd.setCursor(0,1);
   lcd.print("Milk-Unavailable");
   delay(2000);
 }
 //************************************************************************************************************
 else if(button == 11)
 {
   button = -1;
   lcd.clear();
   lcd.print("Sure For WTea");
   lcd.setCursor(5,1);
   lcd.print("?");
   while(button != 13)
   {
     button = buttan();
   }
   //password();
   lcd.clear();
   lcd.print("Wait...");
     waterTea();  
 }
 //************************************************************************************************************
 else if(button == 12)
 {
   button = -1;
   lcd.clear();
   lcd.print("Sure For GTea");
   lcd.setCursor(5,1);
   lcd.print("?");
   while(button != 13)
   {
     button = buttan();
   }
   password();
   lcd.clear();
   lcd.print("Wait...");
   greentea();
 }
 //************************************************************************************************************
  button = -1;
  backup = 5;
  EEPROM.write(0,backup);
}
void(* resetFunc) (void) = 0; //declare reset function @ address 0       //resetFunc();  //call reset
