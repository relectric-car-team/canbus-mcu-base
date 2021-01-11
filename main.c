/*
 * File:   main.c
 * Author: ratik
 *
 * Created on January 8, 2021, 5:25 PM
 */

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    while (1)
    {
        PORTAbits.RA0 = 1;      // Turn on LED for test
        __delay_ms(1000);       // Wait 1s
        PORTAbits.RA0 = 0;      // Turn off LED for test
        __delay_ms(1000);       // Wait 1s
        // test
    }
}