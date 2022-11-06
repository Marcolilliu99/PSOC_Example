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

CY_ISR(Custom_ISR_BUTTON)
{
    PIN_INT_LED_Write(~PIN_INT_LED_Read());
    PIN_INT_BUTTON_ClearInterrupt();
}
/* [] END OF FILE */
