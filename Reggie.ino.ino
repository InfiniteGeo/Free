// RGBW (Red Green Blue White Neo-Pixel starter code
// 23 LEDS with no loop inside of void loop()
// CW Coleman 181214

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6
#define NUM_LEDS 16
#define BRIGHTNESS 50
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  randomSeed(analogRead(0));
}

// Initialize some variables for the void loop()
int led, red, green, blue, white;
int wait = 2;

void loop() {
  for (int i = 0; i < 16; i++){
     red  = random(0, 255);
     green = random(0, 255);
       //set to black
    for (int i = 18; i > -1; i--){
    led = i; 
    strip.setPixelColor(led, 0, 0 , 0, 0);
    delay(wait);
    strip.show();
  }
     blue = random(0, 255);
     white = random(0, 0);
     red = 200;
     green = 0;
     blue = 0;
     //white = 0;
     led = i; 
     strip.setPixelColor(led, red, green , blue, white);
     strip.show();
  }

  for (int i = 0; i < 16; i++){
     red  = random(0, 255);
     green = random(0, 255);
       //set to black
    for (int i = 18; i > -1; i--){
    led = i; 
    strip.setPixelColor(led, 0, 0 , 0, 0);
    strip.show();
  }
     blue = random(0, 255);
     white = random(0, 0);
     red = 200;
     green = 0;
     blue = 0;
     //white = 0;
     led = i; 
     strip.setPixelColor(led, red, green , blue, white);
     strip.show();
  }
  
  for (int i = 0; i < 16; i++){
     red  = random(0, 255);
     green = random(0, 255);
       //set to black
    for (int i = 15; i > -1; i--){
    led = i; 
    strip.setPixelColor(led, 0, 0 , 0, 0);
    delay(wait);
    strip.show();
  }
     blue = random(0, 255);
     white = random(0, 0);
     red = 0;
     green = 200;
     blue = 0;
     //white = 0;
     led = i; 
     strip.setPixelColor(led, red, green , blue, white);
     delay(wait);
     strip.show();
  }


    for (int i = 0; i < 16; i++){
     red  = random(0, 255);
     green = random(0, 255);
       //set to black
    for (int i = 15; i > -1; i--){
    led = i; 
    strip.setPixelColor(led, 0, 0 , 0, 0);
    strip.show();
  }
     blue = random(0, 255);
     white = random(0, 0);
     red = 0;
     green = 200;
     blue = 0;
     //white = 0;
     led = i; 
     strip.setPixelColor(led, red, green , blue, white);
     strip.show();
  }

  

   for (int i = 0; i < 16; i++){
     red  = random(0, 255);
     green = random(0, 255);
       //set to black
    for (int i = 15; i > -1; i--){
    led = i; 
    strip.setPixelColor(led, 0, 0 , 0, 0);
    delay(wait);
    strip.show();
  }
     blue = random(0, 255);
     white = random(0, 0);
     red = 0;
     green = 0;
     blue = 200;
     //white = 0;
     led = i; 
     strip.setPixelColor(led, red, green , blue, white);
     delay(wait);
     strip.show();
  }

  for (int i = 0; i < 16; i++){
     red  = random(0, 255);
     green = random(0, 255);
       //set to black
    for (int i = 15; i > -1; i--){
    led = i; 
    strip.setPixelColor(led, 0, 0 , 0, 0);
    strip.show();
  }
     blue = random(0, 255);
     white = random(0, 0);
     red = 0;
     green = 0;
     blue = 200;
     //white = 0;
     led = i; 
     strip.setPixelColor(led, red, green , blue, white);
     strip.show();
  }
  
;
   
}
