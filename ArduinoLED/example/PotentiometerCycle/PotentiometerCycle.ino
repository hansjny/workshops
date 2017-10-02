#include <FastLED.h>

#define LED_PIN 2
#define NUM_LEDS 19

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);
  Serial.begin(9600);
}

void loop() {
  int value = map(analogRead(A0), 0, 790, 0, 765);
  
  int r = 0;
  int g = 0;
  int b = 0;
  
  if (value < 255) {
    r = value;
    g = 0; 
    b = 255 - value;
 
  }
  else if (value >= 255 && value < 255 * 2) {
    r = 255 * 2 - value;
    g = value - 255; 
    b = 0;
  }
  else if (value >= (255 * 2)) {
    r = 0;
    g = 255 * 3 - value;
    b = value - (255 * 2); 
  }
  

  for (int i = 0; i < NUM_LEDS; i++) {

    leds[i] = CRGB(r, g, b);

  }
  FastLED.show();
  Serial.println(analogRead(A0));
}
