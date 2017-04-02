/*
Adafruit Arduino - Lesson 3. RGB LED
*/

int redPin   = 11;
int greenPin = 10;
int bluePin  = 9;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT); 
}

void loop()
{
  setColor(255, 0, 0);      // red
  delay(1000);
  setColor(0, 255, 0);      // green
  delay(1000);
  setColor(0, 0, 255);      // blue
  delay(1000);
  setColor(255, 255, 0);    // yellow
  delay(1000);  
  setColor(80, 0, 80);      // purple
  delay(1000);
  setColor(0, 255, 255);    // aqua
  delay(1000);
  setColor(255, 0, 127);    // pink
  delay(1000);
  setColor(255, 165, 0);    // orange
  delay(1000);
  setColor(240,128,128);    // light coral
  delay(1000);
  setColor(255,215,0);      // gold
  delay(1000);
  setColor(255,20,147);     // deep pink
  delay(1000);
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
