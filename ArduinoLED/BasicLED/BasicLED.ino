#include <FastLED.h>

#define LED_PIN 2
#define NUM_LEDS 19

CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(255, 0, 0);
   }

   FastLED.show();

}

void loop() {


}
