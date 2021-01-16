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
    
    IO_RC4_SetDigitalMode();
    IO_RC4_SetDigitalOutput();
    IO_RC4_SetLow();
    IO_RC5_SetDigitalMode();
    IO_RC5_SetDigitalOutput();
    IO_RC5_SetHigh();

    while (1)
    {
        __delay_ms(1000);
        IO_RC4_Toggle();
        IO_RC5_Toggle();
        printStringUART("Hello, World");
    }
}