#include "DigiKeyboard.h"

#define KEY_UP_ARROW 0X52
#define KEY_DOWN_ARROW 0X51
#define KEY_LEFT_ARROW 0X50
#define KEY_RIGHT_ARROW 0X4F

void setup()    {
 // no necesitas activar nada mas para el DigiKeyboard
}

void loop()     {

DigiKeyboard.update();
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);
DigiKeyboard.delay(300);
DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW, MOD_ALT_RIGHT | MOD_CONTROL_LEFT);

// Indicador

DigiKeyboard.delay(500);
while (true)
{
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  delay(300);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  delay(300);
}
}

