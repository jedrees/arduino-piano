
int btnNEw_1;
int btnNEw_2;
int btnNEw_3;
int btnNEw_4;
int btnNEw_5;

#define VoiceNote_A 220
#define VoiceNote_B 246
#define VoiceNote_C 261
#define VoiceNote_D 293
#define VoiceNote_E 329

#define Strated LOW

const int Buz = 11;
const int Light = 13;

const int btn_1 = 10;
const int btn_2 = 9;
const int btn_3 = 8;
const int btn_4 = 7;
const int btn_5 = 6;


void setup()
{
pinMode(Light, OUTPUT);
pinMode(btn_1, INPUT);
digitalWrite(btn_1,HIGH);
pinMode(btn_2, INPUT);
digitalWrite(btn_2,HIGH);
pinMode(btn_3, INPUT);
digitalWrite(btn_3,HIGH);
pinMode(btn_4, INPUT);
digitalWrite(btn_4,HIGH);
pinMode(btn_5, INPUT);
digitalWrite(btn_5,HIGH);

digitalWrite(Light,LOW);
}

void loop()
{

   btnNEw_1=digitalRead(btn_1);
   btnNEw_2=digitalRead(btn_2);
   btnNEw_3=digitalRead(btn_3);
   btnNEw_4=digitalRead(btn_4);
   btnNEw_5=digitalRead(btn_5);
   
  
while(btnNEw_1 == Strated)
{
tone(Buz,VoiceNote_A);
digitalWrite(Light,HIGH);
}

while(btnNEw_2 == Strated)
{
tone(Buz,VoiceNote_B);
digitalWrite(Light,HIGH);
}

while(btnNEw_3 == Strated)
{
tone(Buz,VoiceNote_C);
digitalWrite(Light,HIGH);
}

while(btnNEw_4 == Strated)
{
tone(Buz,VoiceNote_D);
digitalWrite(Light,HIGH);
}

while(btnNEw_5 == Strated)
{
tone(Buz,VoiceNote_E);
digitalWrite(Light,HIGH);

}

noTone(Buz);
digitalWrite(Light,LOW);

}
