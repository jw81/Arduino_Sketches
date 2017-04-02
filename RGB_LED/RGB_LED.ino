/*
Adafruit Arduino - Lesson 3. RGB LED
*/

int redPin1   = 11;
int greenPin1 = 10;
int bluePin1  = 9;

int redPin2   = 6;
int greenPin2 = 5;
int bluePin2 = 3;

void setup()
{
  pinMode(redPin1, OUTPUT);
  pinMode(greenPin1, OUTPUT);
  pinMode(bluePin1, OUTPUT); 
  
  pinMode(redPin2, OUTPUT);
  pinMode(greenPin2, OUTPUT);
  pinMode(bluePin2, OUTPUT); 
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
  analogWrite(redPin1, red);
  analogWrite(greenPin1, green);
  analogWrite(bluePin1, blue);  
  
  analogWrite(redPin2, red);
  analogWrite(greenPin2, green);
  analogWrite(bluePin2, blue); 
}
