/* Pump It Up Dance Pad Code
 * original by: Alex - Super Make Something (DDR USB Dance Pad Code)
 * modified by: Immuna
 */

/*
 * This code contains the follow functions:
 * - void setup(): Sets pins 3, 4, 5, 6, 7 to input with pull-up resistors enabled and begins Keyboard functionality
 * - void loop(): Main loop - reads pin voltages and sends out corresponding keystrokes via USB
 */

/* 
 * Pinout:
 * - "HIGH" voltage button contacts - pins 3, 4, 5, 6, 7
 * - "GND" voltage button contacts - GND pin
 */

#include <Keyboard.h>

int centreStatus=1;
int centreStatusPrev=1;
int upStatus=1;
int upStatusPrev=1;
int leftStatus=1;
int leftStatusPrev=1;
int downStatus=1;
int downStatusPrev=1;
int rightStatus=1;
int rightStatusPrev=1;

void setup()
{
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  Keyboard.begin();
}

void loop()
{
 
 centreStatus=digitalRead(3);
 upStatus=digitalRead(4);
 leftStatus=digitalRead(5);
 downStatus=digitalRead(6);
 rightStatus=digitalRead(7);
 
 //CENTRE ARROW PRESSED
 if (centreStatus!=centreStatusPrev && centreStatus==LOW)
 {
    Keyboard.press('s');
    centreStatusPrev=centreStatus;
 }
 //CENTRE ARROW RELEASED
 if (centreStatus!=centreStatusPrev && centreStatus==HIGH)
 {
    Keyboard.release('s');
    centreStatusPrev=centreStatus;
 }
 
 //UP ARROW PRESSED
 if (upStatus!=upStatusPrev && upStatus==LOW)
 {
    Keyboard.press('e');
    upStatusPrev=upStatus;
 }
 //UP ARROW RELEASED
 if (upStatus!=upStatusPrev && upStatus==HIGH)
 {
    Keyboard.release('e');
    upStatusPrev=upStatus;
 }
 
  //LEFT ARROW PRESSED
 if (leftStatus!=leftStatusPrev && leftStatus==LOW)
 {
    Keyboard.press('q');
    leftStatusPrev=leftStatus;
 }
 //LEFT ARROW RELEASED
 if (leftStatus!=leftStatusPrev && leftStatus==HIGH)
 {
    Keyboard.release('q');
    leftStatusPrev=leftStatus;
 }
 
  //DOWN ARROW PRESSED
 if (downStatus!=downStatusPrev && downStatus==LOW)
 {
    Keyboard.press('z');
    downStatusPrev=downStatus;
 }
 //DOWN ARROW RELEASED
 if (downStatus!=downStatusPrev && downStatus==HIGH)
 {
    Keyboard.release('z');
    downStatusPrev=downStatus;
 }
 
 //RIGHT ARROW PRESSED
 if (rightStatus!=rightStatusPrev && rightStatus==LOW)
 {
    Keyboard.press('c');
    rightStatusPrev=rightStatus;
 }
 //RIGHT ARROW RELEASED
 if (rightStatus!=rightStatusPrev && rightStatus==HIGH)
 {
    Keyboard.release('c');
    rightStatusPrev=rightStatus;
 }
}