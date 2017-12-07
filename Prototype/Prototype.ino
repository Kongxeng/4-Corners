int ledPin = 7;                  // LED connected to digital pin 13
long randOn = 0;                  // Initialize a variable for the ON time
long randOff = 0;                 // Initialize a variable for the OFF time


void setup()                      // run once, when the sketch starts
{
 randomSeed (analogRead (7));    // randomize
 pinMode(ledPin, OUTPUT);        // sets the digital pin as output
 pinMode(4, OUTPUT); 
 pinMode(6, OUTPUT); 
 pinMode(5, OUTPUT); 
}

void loop()                       // run over and over again
{
 randOn = random (300, 1200);    // generate ON time between 0.1 and 1.2 seconds
 randOff = random (300, 900);    // generate OFF time between 0.2 and 0.9 seconds
   digitalWrite(ledPin, HIGH);   // sets the LED on
   delay(randOn);                // waits for a random time while ON
   digitalWrite(ledPin, LOW);    // sets the LED off
   delay(randOff);               // waits for a random time while OFF
   digitalWrite(6, HIGH);
   delay(randOn);
   digitalWrite(6, LOW); 
   delay(randOff); 
   digitalWrite(5, HIGH);
   delay(randOn);
   digitalWrite(5, LOW); 
   delay(randOff); 
   digitalWrite(4, HIGH);
   delay(randOn);
   digitalWrite(4, LOW); 
   delay(randOff); 
}

