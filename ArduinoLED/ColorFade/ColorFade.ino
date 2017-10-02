#include <FastLED.h>

#define LED_PIN 2
#define NUM_LEDS 19

CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(9600);
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, NUM_LEDS);
}

void loop() {

  
  for (int i = 0; i < 255; i++) { 
    for (int j = 0; j < NUM_LEDS; j++) {
      leds[j] = CRGB(0, i, i);
     }
     delay(5);
     FastLED.show();
  }

  for (int i = 255; i > 0; i--) { 
    for (int j = 0; j < NUM_LEDS; j++) {
      leds[j] = CRGB(0, i, i);
     }
     delay(5);
     FastLED.show();
  }
  Serial.println(digitalRead(3));

}
