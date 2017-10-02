#include <FastLED.h>

#define LED_PIN 2
#define NUM_LEDS 19

CRGB leds[NUM_LEDS];


void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);
}

void loop() {
  
  for (int i = 0; i < NUM_LEDS; i++) {
    int r = map(random(0, 3), 0, 3, 0, 255);
    int g = map(random(0, 3), 0, 3, 0, 255);
    int b = map(random(0, 3), 0, 3, 0, 255);
      
    leds[i] = CRGB(r, g, b);
    FastLED.show();
    delay(90);
   }

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(0, 0, 0);
    FastLED.show();
    delay(50);
   }



}
