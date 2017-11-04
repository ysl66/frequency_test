/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs 

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs  - 1.45
        Device            :  PIC18F25K22
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/
#include "rs232.h"
#include "mcc_generated_files/mcc.h"
#include "lcd_drivers.h"
#include "sensors.h"
#include "frequency.h"
//#include <stdbool.h>
/*
                         Main application
 */

/*
//interrupt XC8
void EUSART1_Receive_ISR(void) {
    unsigned char input;
    input = getc1USART();
    if(input >= ' ' && input <= '~') {
        if(SIZE == index || input == 'x') {
            for(int k = 0; k < SIZE; k++) {
                buffer[k] = NULL;
            }
            //if(index < SIZE) {
              //  buffer[index] = '\0';
            //}
            index = 0;
            //puts1USART(finish);
            //finish = 1
        } else if(input == 'z' && index > 0) {
            index--;
            buffer[index] = NULL;
        } else {
            buffer[index] = input;
            index = 0;
            //if(index == SIZE) {
              //  index = 0;
            //}
            //puts1USART(message);
            puts1USART(buffer);
            RS_SetLow();
            write_lcd(0x01);
            write_lcd(0x02);
            RS_SetHigh();
            write_lcd((unsigned char) buffer[i]);


        }
    }
}*/


void EUSART1_Receive_ISR(void) {
    unsigned char input;
    input = getc1USART();
    
    //puts1USART(input);
    
    //RS_SetLow();
    //write_lcd(0x01);
    //write_lcd(0x02);
    //RS_SetHigh();
    //write_lcd((unsigned char) input);
    clear_screen();
    if (input == 'n') {
        if (screen_shift == 1) {
            temp_screen();
        } else if(screen_shift == 2) {
            car_screen();
        } else if(screen_shift == 3) {
            sal_screen();
        } else {
            flow_screen();
            screen_shift = 0;
        }
        screen_shift++;
    } else if (input == 'F' | input == 'C') {
        temp_convert(input);
    }
}


void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowEnable();

    // Disable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighDisable();

    // Disable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowDisable();

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    //char write_buf[34] = "TTT\n";
    
    setup();
    //char* frequency = getFrequency();
    
   
    //const char* hello = "@ hi\n";
    
    //char* tempV = conversion();
    
	init_display();
    _delay(500000);
    //EN_SetHigh();
    __delay_ms(1000);
    //device_write(tempV);
    //temp_flow_screen();
    _delay(2000000);
    //sal_car_screen();
    
    //clear_screen();
    //TEST_LED_Toggle();
    sal_screen();
      // Delay 1s
      //__delay_ms(1000);
    while (1) {
      // Reset LEDs
      //TEST_LED_Toggle();

      // Delay 1s
      //_delay(500000);
    }
}
/**
 End of File
*/