void password(void)
{
  int pasword = 2321;
  int digit = 0;
  button = -1;
  int i = 1;
  flag = 0;
  lcd.clear();
  lcd.print("Enter Pasword:");
  lcd.setCursor(5,1);
  while(flag == 0)
{
  button = buttan();
  digit = digit*10 + button;
  lcd.print("*");
  delay(300);
  if(digit == pasword)
  {
    flag = 1;
  }
  else if(i == 4)
  {
    digit = 0;
    lcd.clear();
    lcd.print("Enter Pasword:");
    lcd.setCursor(5,1);
    i=0;
    button = -1;
  }
 i++; 
 button = -1; 
}
flag = 0;
delay(1000);
lcd.clear();
}
