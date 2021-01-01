// Simple program to check if you connected your Arduino correctly

#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11

int wait_time = 0;

int counter;

void setup()
{
  pinMode(RED_PIN  , OUTPUT);  //RED PIN
  pinMode(GREEN_PIN, OUTPUT);  //GREEN PIN
  pinMode(BLUE_PIN , OUTPUT);  //BLUE PIN
}

void setLEDColor(int red_pin, int green_pin, int blue_pin, int red_value, int green_value, int blue_value){
  analogWrite(red_pin  , red_value  );
  analogWrite(green_pin, green_value);
  analogWrite(blue_pin , blue_value );
}

void loop()
{
  //RGB #ff0000 - RED
  setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 255, 0, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #000000 - BLACK
  setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 0, 0, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #00ff00 - GREEN
  setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 0, 255, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #000000 - BLACK
  setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 0, 0, 0);
  delay(1000); // Wait for 1000 millisecond(s)
 
  //RGB #0000ff - BLUE
  setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 0, 0, 255);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #000000 - BLACK
  setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 0, 0, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #ffffff - WHITE
  setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 255, 255, 255);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #000000 - BLACK
  setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 0, 0, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //Fade from R -> G -> -> R 10 times, starting with a 400ms delay, and going 40ms faster every loop
  wait_time = 400;
  for (counter = 0; counter < 10; ++counter) {
    
    //RGB #ff0000 - RED
    setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 255, 0, 0);
    delay(wait_time); // Wait for wait_time millisecond(s)
    
    //RGB #ffff00 - YELLOW
    setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 255, 255, 0);
    delay(wait_time); // Wait for wait_time millisecond(s)
    
    //RGB #00ff00 - GREEN
    setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 0, 255, 0);
    delay(wait_time); // Wait for wait_time millisecond(s)
    
    //RGB #00ffff - CYAN
    setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 0, 255, 255);
    delay(wait_time); // Wait for wait_time millisecond(s)
    
    //RGB #0000ff - BLUE
    setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 0, 0, 255);
    delay(wait_time); // Wait for wait_time millisecond(s)
    
    //RGB #ff00ff - MAGENTA
    setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 255, 0, 255);
    delay(wait_time); // Wait for wait_time millisecond(s)
    //Decrease wait time
    wait_time -= 40;
  } //End for (counter)
  
  //RGB #000000 - BLACK
  setLEDColor(RED_PIN, GREEN_PIN, BLUE_PIN, 0, 0, 0);
  delay(1000); // Wait for 1000 millisecond(s)
}
