
#include <EEPROM.h>
#include<Servo.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);    //SCL = A5     and SDA = A4

//************************************************
// Define Connections to 74HC165
int clockIn = 6;
int load = 7;
int clockEnablePin = 8;
int dataIn = 9;

int shiftinpin(int pin );

//**************************************
int clk = 10;
int latch = 11;
int data = 12;
byte led = 0;
void shiftoutpin(int pin_no ,int logic);

//*********************************************************
Servo tea;
Servo coffee;
Servo sugar;
Servo teaout;
//**************************************
void waterTea(void);
void greentea(void);
void Sugar(void);
void teapowder(void);
void greenpowder(void);
void Teaout(int t);
void password(void);
//**************************
int count=0;
int ftime=0;
void liquid(int c , int water_milk);
//**************************
int ulimitval ;          
int uirval;
int llimitval;
int llimitval2;
int lirval;
void initialization(void);
void mselect(int x);
int analogread(void);
int cupslider(void);
int buttan(void);

//****************************
int button = -1;
int flag = 0;
int backup = 0;
