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
#include "ISR_TIMER.h"
#include "project.h"

CY_ISR(Custom_ISR_TIMER)
{
    LED_Write(~LED_Read());
   
}

/* [] END OF FILE */
