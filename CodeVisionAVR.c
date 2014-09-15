#include <mega8.h>
#include <delay.h>

#define true 1
#define false 0

void main (void)
{
    
    int i = 100;
    
    DDRB = 0b11111111;
    DDRD = 0b00000000;
    PIND = 0b11111111;
        
    while (1)
    {   
        if (PIND.0 == 0){
            PORTB = ~PORTB;
            delay_ms (i);
        };
        
      
    }

}