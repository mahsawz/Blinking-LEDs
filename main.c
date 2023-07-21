 #include "config.h"  
 #include "lpc13xx_gpio.h"  
 int main(void)  
 {  
   u32_t count = 0, time = 0;  
   boolean led_state = TRUE;  
   InitializeSystem();      
   SYSCON_AHBPeriphClockCmd(SYSCON_AHBPeriph_GPIO, ENABLE);  

   GPIO_SetDir(PORT1, GreenLED, 1);  
   GPIO_SetDir(PORT1, BlueLED, 1);  
   time = millis();  
   while(1)  
   {  
     if(millis() - time > 1000)  
     {  
       time = millis();  
       if(led_state == TRUE)  
       {  
         led_state = FALSE;  
         // Set GPIO pins State High  
         GPIO_SetBits(PORT1, GreenLED);  
         GPIO_SetBits(PORT1, BlueLED);  
       }  
       else  
       {  
         led_state = TRUE;  
         // Set GPIO pins State Low  
         GPIO_ResetBits(PORT1, GreenLED);  
         GPIO_ResetBits(PORT1, BlueLED);  
       }  
     }  
 #ifdef SEMIHOSTING  
     printf("Count Value is %d\n", count);  
 #endif  
     count++;  
   }  
 }  