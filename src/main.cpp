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
  // SA = switch A 
  // SB = switch B 
  // M1 = Motor 1 , opposite side of SA
  // M2 = Motor 2, opposite side of SB
  // 
{
/*
 * Q2 - Add interrupts here for both sensors SA and SB. They should only work 
 * when the button is pressed! They should also be set as pull ups.
 */
  Serial.begin(9600);
  chassis.init();
 const byte interruptPin0 = 0
   const byte interruptPin1 = 1
   
 void setup() {
   pinMode(interruptPin, INPUT_PULLUP);
   attachInterrupt(digitalPinToInterrupt(interruptPin0),blank, SA)
     if (interruptPin)
         M2 = 0 )
       
   attachInterrupt(digitalPinToInterrupt(interruptPin1),blank, SB)
       if (interruptPin)
            M1 = 0)
       
   
  
                   
  
  
}


void loop()
{
//  chassis.setMotorEfforts(0,0);
//  delay(1000);

/*
 * Q3 - Your car should be moving straight with a speed of 100 on both wheels, until interrupted.
 */

 while (Romi (interruptPin = false)
        M1 = 100
        M2 = 100)
   if (Romi (interruptPin = true)
       M1 = 0 
       M2 = 0)
        
        

 
  }

}

/*
 * Q4 - Add the functions that your interrupts will call (lets say, ISRsa and ISRsb).
 *  Inside each one of these functions you should have a conditional that "does nothing"
 *  if the interrupt was triggered less than 2000 ms ago.
   
 */
void loop()
  ISRsa (if (interruptPin < 2000ms) {
    "does nothing ")
    }
 ISRsb (if interruptPin < 2000ms) { 
   "does nothing")
   }
 
         
  
