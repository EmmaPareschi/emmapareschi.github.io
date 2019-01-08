/*
 * Emma Pareschi
 * 
 * Basic commands of Library Adafruit_NeoPixel
 * Using some parts from the example "strandtest"
 */

#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      12

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 2000; // delay for half a second

void setup() {
  
  pixels.begin(); // This initializes the NeoPixel library.

}

void loop() {

  uint32_t magenta = pixels.Color(255, 0, 255);
  uint32_t off = pixels.Color(0, 0, 0);

  pixels.setPixelColor(0, magenta);
  pixels.show();

  delay(delayval);

  pixels.setPixelColor(0, off);
  pixels.show();

  delay(delayval);

}