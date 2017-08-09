#include <Servo.h>

Servo steer;

const int ff = 4;
const int bb = 5;
const int en = 3;
const int buzzer = 11;
String readString;

int hiz;

void setup() 
{
  Serial.begin(9600); 
  pinMode(ff , OUTPUT);
  pinMode(bb , OUTPUT); 
  pinMode(en , OUTPUT);
  pinMode(buzzer , OUTPUT);
  steer.attach(2);   
}
void loop() 
{
  while (Serial.available()) 
  {
    delay(3);  
    char c = Serial.read();
    readString += c; 
  }
  if (readString.length() >0) 
  {
    Serial.println(readString);

    if (readString == "00")
    {
      steer.write(71);
    }
    if (readString == "1")
    {
      steer.write(74);
    }
    if (readString == "2")
    {
      steer.write(75);
    }
    if (readString == "3")
    {
      steer.write(77);
    }
    if (readString == "4")
    {
      steer.write(78);
    }
    if (readString == "5")
    {
      steer.write(80);
    }
    if (readString == "6")
    {
      steer.write(81);
    }
    if (readString == "7")
    {
      steer.write(83);
    }
    if (readString == "8")
    {
      steer.write(84);
    }
    if (readString == "9")
    {
      steer.write(86);
    }
    if (readString == "110")
    {
      steer.write(88);
    }
    if (readString == "11")
    {
      steer.write(89);
    }
    if (readString == "12")
    {
      steer.write(91);
    }
    if (readString == "13")
    {
      steer.write(92);
    }
    if (readString == "14")
    {
      steer.write(94);
    }
    if (readString == "15")
    {
      steer.write(95);
    }
    if (readString == "16")
    {
      steer.write(97);
    }
    if (readString == "17")
    {
      steer.write(98);
    }
    if (readString == "18")
    {
      steer.write(100);
    }
    
    if (readString == "0")     
    {
      hiz = 0;
    }
    if (readString == "10")     
    {
      hiz = 25;
    }
    if (readString == "20")     
    {
      hiz = 50;
    }
    if (readString == "30")     
    {
      hiz = 75;
    }
    if (readString == "40")     
    {
      hiz = 100;
    }
    if (readString == "50")     
    {
      hiz = 125;
    }
    if (readString == "60")     
    {
      hiz = 150;
    }
    if (readString == "70")     
    {
      hiz = 175;
    }
    if (readString == "80")     
    {
      hiz = 200;
    }
    if (readString == "90")     
    {
      hiz = 225;
    }
    if (readString == "100")     
    {
      hiz = 255;
    }
    if (readString == "f")     
    {
      analogWrite(en , hiz);
      digitalWrite(ff , HIGH);
      digitalWrite(bb , LOW);
    }
    if (readString == "b")     
    {
      analogWrite(en , hiz);
      digitalWrite(ff , LOW);
      digitalWrite(bb , HIGH);
    }
    if (readString == "s")     
    {
      analogWrite(en , 0);
      digitalWrite(ff , LOW);
      digitalWrite(bb , LOW);
    }
    if (readString == "so")     
    {
      digitalWrite(buzzer , HIGH);
    }
    if (readString == "sh")     
    {
      digitalWrite(buzzer , LOW);
    }
    readString="";
  } 
}
