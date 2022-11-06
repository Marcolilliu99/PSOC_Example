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
#include "Interrupt_Routines.h"
#include "project.h"

#define ON 1
#define OFF 0

uint8 char_received;

CY_ISR(Custom_ISR_RX)
{
    char_received=UART_GetChar();
    switch(char_received)
    {
        case 'b': PIN_INT_LED_Write(ON);
        case 's': PIN_INT_LED_Write(OFF);
    }
    
}
/* [] END OF FILE */
