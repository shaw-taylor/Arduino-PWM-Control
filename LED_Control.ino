
int firstLED = 3; // The LED is connected to digital pin 3.
int secondLED = 5;  // The LED is connected to digital pin 5.
int thirdLED = 6; // The LED is connected to digital pin 6.
int sensorPin = 0; // The LED is connected to digital pin 0.

// This initializes the voltage for each LED
int Volt = 1023/5;  // This essentially partitions the max input of 1023 into 5 volts.
int first = Volt *1 // Output of the first LED would be 1V.
int second = Volt * 3 // Second LED would have 3V.


// Once the sketch begins, this function will run.
// This portion sets the pins as the output
void setup() {
  // Set up the motor pin to be an output:
  pinMode(firstLED, OUTPUT);
  pinMode(secondLED, OUTPUT);
  pinMode(thirdLED, OUTPUT);
  pinMode(sensorPin, INPUT);
  
}

void loop() {
    long sensorValue = {analogRead(sensorPin)); // The sensorValue here reads the values emitting from the sensor.
    // Given that analogWrite command works with values ranging from 0 to 255.
    // We divided 1023 which is the maximum value read by the sensor by 4 to attain a number within 0 and 255.
    
    int bright = sensorValue / 4;
    
// This lights up all the LEDs at max brightness.
    analogWrite(firstLED, bright);
    analogWrite(secondLED, bright);
    analogWrite(thirdLED, bright);
}
