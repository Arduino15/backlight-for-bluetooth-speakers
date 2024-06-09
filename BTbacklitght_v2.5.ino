#define BTN_PIN 3 
#define R_PIN 9 
#define G_PIN 10 
#define B_PIN 11 
#define PERIOD 500 
 
#include <EncButton.h> 
 
ButtonT<BTN_PIN > btn; 
bool flg; 
 
void setup() { 
  pinMode(R_PIN, 1); 
  pinMode(G_PIN, 1); 
  pinMode(B_PIN, 1); 
} 
 
void loop() { 
  static uint8_t count; 
  if (btn.click()) { 
    if (++count >= 3) count = 0; 
    flg = true; 
  } 
  switch (count) { 
    case 0: eff0(); break; 
    case 1: eff1(); break; 
    case 2: eff2(); break; 
.   case 3: eff3(); break;
   } 
  } 
 }
}
void eff0() {
  if (flg) {
    static uint8_t count;
    static int_t tmr;
    if (millis() - tmr >= PERIOD) {
      tmr = millis();
      if (++count >= 1) {
         count = 0;
         flg = false;
       }
       switch (count) {
         case 0: setRGB(0xCC, 0xCC, 0xFF); break;
       }
     }
   }
 }
void eff1() { 
  if (flg) { 
    static uint8_t count; 
    static uint32_t tmr; 
    if (millis() - tmr >= PERIOD) { 
      tmr = millis(); 
      if (++count >= 4) { 
        count = 0; 
        flg = false; 
      } 
      switch (count) { 
        case 0: setRGB(255, 0, 0); break; 
        case 1: setRGB(0, 255, 0); break; 
        case 2: setRGB(0, 0, 255); break; 
        case 3: setRGB(255, 255, 255); break; 
      } 
    } 
  } 
} 
void eff2() { 
  if (flg) { 
    static uint8_t count; 
    static uint32_t tmr; 
    if (millis() - tmr >= PERIOD) { 
      tmr = millis(); 
      if (++count >= 3) { 
        count = 0; 
        flg = false; 
      } 
      switch (count) { 
        case 0: setRGB(0, 255, 255); break; 
        case 1: setRGB(255, 0, 255); break; 
        case 2: setRGB(255, 255, 0); break; 
      } 
    } 
  } 
} 
void eff3() { 
  if (flg) { 
    static uint8_t count; 
    static uint32_t tmr; 
    if (millis() - tmr >= PERIOD) { 
      tmr = millis(); 
      if (++count >= 7) { 
        count = 0; 
        flg = false; 
      } 
      switch (count) { 
        case 0: setRGB(255, 0, 0); break; 
        case 1: setRGB(0, 255, 0); break; 
        case 2: setRGB(0, 0, 255); break; 
        case 3: setRGB(255, 255, 255); break; 
        case 4: setRGB(0, 255, 255); break; 
        case 5: setRGB(255, 0, 255); break; 
        case 6: setRGB(255, 255, 0); break; 
      } 
    } 
  } 
} 
 
void setRGB(uint8_t r, uint8_t g, uint8_t b) { 
  analogWrite(R_PIN, r); 
  analogWrite(G_PIN, g); 
  analogWrite(B_PIN, b); 
}
