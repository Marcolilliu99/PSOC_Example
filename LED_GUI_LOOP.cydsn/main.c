/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

#define ON 1
#define OFF 0

uint8 char_received=0;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    UART_Start();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        
        char_received=UART_GetChar();
        switch(char_received)
        {
            case 'b': 
                PIN_INT_LED_Write(ON);
                break;
            case 's': 
                PIN_INT_LED_Write(OFF);
                break;
                    
            
        }
       
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
