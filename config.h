#ifndef CONFIG_H_  
 #define CONFIG_H_  
 // Un-Comment this to view debug data on SemiHosting window  
 // But this will hamper program speed.  
 // To run in run time Un-Comment this MACRO  
 #define SEMIHOSTING  
 #include <stdio.h>  
 #include "lpc13xx_syscon.h"  
 #include "micro.h"  
 #ifdef SEMIHOSTING  
 #include "semihosting.h"  
 #endif  
 #define  GreenLED   GPIO_Pin_10  
 #define  BlueLED    GPIO_Pin_11  
 #define  Buzzer     GPIO_Pin_5  
 // Function Prototype  
 void InitializeSystem( void );  
 u32_t millis( void );  
 #endif // CONFIG_H_  