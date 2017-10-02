#include <FastLED.h>

#define LED_PIN 2
#define NUM_LEDS 19

CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(9600);
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);
}

void loop() {

  int dark = digitalRead(3);
  if (dark == 0) {

    for (int j = 0; j < NUM_LEDS; j++) {
      leds[j] = CRGB(255, 0, 246);
     }
     delay(5);
     FastLED.show();
  }
  else {

    for (int j = 0; j < NUM_LEDS; j++) {
      leds[j] = CRGB(0, 0, 0);
     }
     delay(5);
     FastLED.show();
  }

}
