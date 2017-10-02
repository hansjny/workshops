#include <FastLED.h>

//En liste, eller "array" med alle LED diodene våre.
// Tallet inne i klammene bestemmer hvor mange LEDs som skal kontrolleres.
CRGB leds[19];

void setup() {
  // NeoPixel betyr at vi bruker LED-stripa som om de var pixler. 
  // Tallet 2 sier noe om hvilken PIN, eller punkt på Arduinoen vi har koblet LED-stripen på. Vi bruker D2.
  // leds er listen over alle ledene vi lagde helt øverst, og tallet 19 er hvor stor listen er. 
  FastLED.addLeds<NEOPIXEL, 2>(leds, 19);

  //Etter vi har laget lista helt i toppen, kan vi bestemme hvilken del av lista vi vil ha tak i
  //ved å bruke navnet på lista, og sette posisjonen inne i klammene. På 0 ligger det første elementet,
  //på 1 ligger det andre elementet osv.
  leds[0];

  //Nå sier vi at den første LEDen skal ha fargen RØD. CRGB er bare en innebygd funksjon. De 3 tallene bestemmer
  //fargemengden. Først RØD, så GRØNN så BLÅ. 255 er den høyeste verdien for hver farge. 
  leds[0] = CRGB(255, 0, 0);

  //Oppdater LED stripa til å vise endringene vi har gjort.
  FastLED.show();

}

void loop() {

  
  
}
