/**
 * 
 * QUIZ 1 - Follow the instructions for Q1-Q4
 * Name - WRITE YOUR NAME HERE
 *
 * */ 

#include <Arduino.h>
#include <wpi-32u4-lib.h>

#include <Chassis.h>

Chassis chassis;

/*
 * Q1 - Declare here all the variables that your code is using!
 */
void setup() 
{
/*
 * Q2 - Add interrupts here for both sensors SA and SB. They should only work 
 * when the button is pressed! They should also be set as pull ups.
 */
  Serial.begin(9600);
  chassis.init();
}


void loop()
{
//  chassis.setMotorEfforts(0,0);
//  delay(1000);

/*
 * Q3 - Your car should be moving straight with a speed of 100 on both wheels, until interrupted.
 */


  if (readBatteryMillivolts() <= 6000) {
    Romi32U4ButtonC buttonC;
    buttonC.waitForButton();
  }

}

/*
 * Q4 - Add the functions that your interrupts will call (lets say, ISRsa and ISRsb).
 *  Inside each one of these functions you should have a conditional that "does nothing"
 *  if the interrupt was triggered less than 2000 ms ago.
 */