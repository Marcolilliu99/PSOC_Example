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
#include "Interrupt_Routines.h"

#define HIGH 1
#define LOW 0

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    isr_INT_BUTTON_StartEx(Custom_ISR_BUTTON);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    for(;;)
    {
        
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
