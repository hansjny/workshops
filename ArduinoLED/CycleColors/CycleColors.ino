#include <FastLED.h>

#define LED_PIN 2
#define NUM_LEDS 19

CRGB leds[NUM_LEDS];
CRGB farger[NUM_LEDS] = {
  CRGB(255, 0, 0),
  CRGB(180, 90, 0),
  CRGB(90, 180, 0),
  CRGB(0, 255, 0),
  CRGB(0, 180, 90),
  CRGB(0, 90, 180),
  CRGB(0, 0, 255),
  CRGB(90, 0, 180),
  CRGB(180, 0, 90),
  CRGB(255, 0, 0),
  CRGB(180, 90, 0),
  CRGB(90, 180, 0),
  CRGB(0, 255, 0),
  CRGB(0, 180, 90),
  CRGB(0, 90, 180),
  CRGB(0, 0, 255),
  CRGB(90, 0, 180),
  CRGB(180, 0, 90),
  CRGB(255, 0, 0)
};

void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);
}

void loop() {
  
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = farger[i];
    FastLED.show();
    delay(90);
   }

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(0, 0, 0);
    FastLED.show();
    delay(50);
   }



}
