#include <Servo.h>
#include <Wire.h>
#include "nunchuck_funcs.h"

const int swivel = 11;
const int base   = 10;
const int elbow  = 9;
const int wrist  = 8;
const int claw   = 7;

Servo swivel_servo;
Servo base_servo;
Servo elbow_servo;
Servo wrist_servo;
Servo claw_servo;

byte accx,accy,zbut,cbut;

void setup() {
  // put your setup code here, to run once:
  //nunchuck_setpowerpins();
  //nunchuck_init();
  
  swivel_servo.attach(swivel);
  base_servo.attach(base);
  elbow_servo.attach(elbow);
  wrist_servo.attach(wrist);
  claw_servo.attach(claw);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Test");
  delay(100);
//   nunchuck_get_data();
//        accx  = nunchuck_accelx(); // ranges from approx 70 - 182
//        accy  = nunchuck_accely(); // ranges from approx 65 - 173
//        zbut = nunchuck_zbutton();
//        cbut = nunchuck_cbutton(); 
//            
//        Serial.print("accx: "); Serial.print((byte)accx,DEC);
//        Serial.print("\taccy: "); Serial.print((byte)accy,DEC);
//        Serial.print("\tzbut: "); Serial.print((byte)zbut,DEC);
//        Serial.print("\tcbut: "); Serial.println((byte)cbut,DEC);
//
//        delay(100);
        
position0();

}

void position0() {
swivel_servo.write(180);    // min 0(left), max 180(right)
base_servo.write(180);      // min 80(forward), max 180(backward)
elbow_servo.write(170);     // min 30(backward), max 170(forward)
wrist_servo.write(100);     // min 30(down), max 180(up)
claw_servo.write(0);        // min 0(open), max 120 (close)
}


