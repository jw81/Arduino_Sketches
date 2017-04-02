
int numberOfPins  = 4;
int pins[]        = {3,2,7,4,8};

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for(int i = 0; i <= numberOfPins; i++){
    pinMode(pins[i], OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  int my_delay      = 100;

  // TURN THEM ON
  for(int i = 0; i <= numberOfPins; i++){
    digitalWrite(pins[i], HIGH);
    delay(my_delay);
  }

  // TURN THEM OFF
  for(int i = numberOfPins; i >= 0; i--){
    digitalWrite(pins[i], LOW);
    delay(my_delay);
  }
}
