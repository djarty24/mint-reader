#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

#define TFT_CS    D3
#define TFT_RST   D1
#define TFT_DC    D2

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

// // put function declarations here:
// int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Trying the ST7735 chip...");

  tft.initR(INITR_BLACKTAB); 
  
  tft.fillScreen(ST77XX_BLUE);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("happy mistakes from bob ross");
  delay(1000);
}

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }