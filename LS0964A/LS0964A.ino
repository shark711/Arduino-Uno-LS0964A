int wait_time = 0;

int counter;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  //RGB #ff0000 - RED
  analogWrite(9, 255);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #000000 - BLACK
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #00ff00 - GREEN
  analogWrite(9, 0);
  analogWrite(10, 255);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #000000 - BLACK
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
 
  //RGB #0000ff - BLUE
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 255);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #000000 - BLACK
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #ffffff - WHITE
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 255);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //RGB #000000 - BLACK
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //Fade from R -> G -> -> R 10 times, starting with a 400ms delay, and going 40ms faster every loop
  wait_time = 400;
  for (counter = 0; counter < 10; ++counter) {
    
    //RGB #ff0000 - RED
    analogWrite(9, 255);
    analogWrite(10, 0);
    analogWrite(11, 0);
    delay(wait_time); // Wait for wait_time millisecond(s)
    
    //RGB #ffff00 - YELLOW
    analogWrite(9, 255);
    analogWrite(10, 255);
    analogWrite(11, 0);
    delay(wait_time); // Wait for wait_time millisecond(s)
    
    //RGB #00ff00 - GREEN
    analogWrite(9, 0);
    analogWrite(10, 255);
    analogWrite(11, 0);
    delay(wait_time); // Wait for wait_time millisecond(s)
    
    //RGB #00ffff - CYAN
    analogWrite(9, 0);
    analogWrite(10, 255);
    analogWrite(11, 255);
    delay(wait_time); // Wait for wait_time millisecond(s)
    
    //RGB #0000ff - BLUE
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 255);
    delay(wait_time); // Wait for wait_time millisecond(s)
    
    //RGB #ff00ff - MAGENTA
    analogWrite(9, 255);
    analogWrite(10, 0);
    analogWrite(11, 255);
    delay(wait_time); // Wait for wait_time millisecond(s)
    //Decrease wait time
    wait_time -= 40;
  } //End for (counter)
  
  //RGB #000000 - BLACK
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(300); // Wait for 300 millisecond(s)
}
