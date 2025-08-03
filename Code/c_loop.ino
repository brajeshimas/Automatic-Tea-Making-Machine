void loop()
{
  int batam = -1;
  button = -1;
  lcd.clear();
  lcd.print("Enter-cups:");
  while(button == -1)
  {
      batam = buttan();
      button = batam;
     if(button == 0)
        button = -1;

     else if(button == 15)
     {
        cupslider(1);
        button = -1;
        flag = 1;
     }
     else if(button == 14)
     {
        cupslider(3);
        lcd.clear();
        lcd.setCursor(10,0);
        lcd.print(count);
        lcd.setCursor(1,1);
        lcd.print("Enter-Cups: ");
        button=-1;
        flag = 0;
     }
     else if(flag == 1)
     {
      button = -1;
     }

     else if(button > 5)
        button = -1;
     else if(button > count)
     {
          lcd.clear();
          lcd.print("Insufficient Cup");
          lcd.setCursor(5,1);
          lcd.print(count);
          button = -1;
     }
     else if(EEPROM.read(0) < button)
     {
        lcd.clear();
        lcd.print("Availibity: ");
        lcd.setCursor(4,1);
        lcd.print("Only ");
        lcd.print(EEPROM.read(0));
        delay(5000);
        button = EEPROM.read(0);
     }
     else
     {
       lcd.setCursor(12,0);
       lcd.print(button);
       delay(2000);
     }
  }
  backup = backup - button;
  EEPROM.write(0,backup);
  lcd.clear();
  lcd.print("Serving....");
  cupslider(2);
  delay(5000);
  if(backup == 0)
     {
       EEPROM.write(1,1);
       resetFunc();
     }
}
