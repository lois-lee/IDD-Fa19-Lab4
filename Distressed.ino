/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int val;
int note1;

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600); 
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  brightness = analogRead(A0);
  Serial.println(brightness);
  val = map(brightness, 0, 1023, 0, 255);
  analogWrite(led, val);
  note1 = map(analogRead(A0), 0, 1023, 31, 4978);
  Serial.println("note 1:");
  Serial.println(note1);
  tone(8, note1, 50);

//
//  // change the brightness for next time through the loop:
//  brightness = brightness + fadeAmount;
//
//  // reverse the direction of the fading at the ends of the fade:
//  if (brightness <= 0 || brightness >= 255) {
//    fadeAmount = -fadeAmount;
//  }
//  // wait for 30 milliseconds to see the dimming effect
//  delay(30);
}
