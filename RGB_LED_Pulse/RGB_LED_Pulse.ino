
int red = 11; //this sets the red led pin
int green = 10; //this sets the green led pin
int blue = 9; //this sets the blue led pin

int redNow;
int greenNow;
int blueNow;

int redTarget;
int greenTarget;
int blueTarget;

void setup()
{ //this sets the output pins
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
  redNow    = random(255);
  greenNow  = random(255);
  blueNow   = random(255);
  
  redTarget    = redNow;
  greenTarget  = greenNow;
  blueTarget   = blueNow;
}

#define fade(x,y) if (x>y) x--; else if (x<y) x++;

void loop()
{
  analogWrite(red, redNow);
  analogWrite(green, greenNow);
  analogWrite(blue, blueNow);
  
  redTarget    = random(255);
  greenTarget  = random(255);
  blueTarget   = random(255);
  
  // fade to new colors
while ((redNow != redTarget) || (greenNow != greenTarget) ||(blueNow != blueTarget))
  {
    fade(redNow,redTarget)
    fade(greenNow,greenTarget)
    fade(blueNow,blueTarget)
    
    analogWrite(red, redNow);
    analogWrite(green, greenNow);
    analogWrite(blue, blueNow);
    
    delay(20);
  }
}
