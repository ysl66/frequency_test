/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC18F25K22
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LCD_EN aliases
#define LCD_EN_TRIS               TRISAbits.TRISA0
#define LCD_EN_LAT                LATAbits.LATA0
#define LCD_EN_PORT               PORTAbits.RA0
#define LCD_EN_ANS                ANSELAbits.ANSA0
#define LCD_EN_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LCD_EN_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LCD_EN_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LCD_EN_GetValue()           PORTAbits.RA0
#define LCD_EN_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LCD_EN_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LCD_EN_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define LCD_EN_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set CARBON aliases
#define CARBON_TRIS               TRISAbits.TRISA1
#define CARBON_LAT                LATAbits.LATA1
#define CARBON_PORT               PORTAbits.RA1
#define CARBON_ANS                ANSELAbits.ANSA1
#define CARBON_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define CARBON_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define CARBON_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define CARBON_GetValue()           PORTAbits.RA1
#define CARBON_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define CARBON_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define CARBON_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define CARBON_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set GATE aliases
#define GATE_TRIS               TRISAbits.TRISA6
#define GATE_LAT                LATAbits.LATA6
#define GATE_PORT               PORTAbits.RA6
#define GATE_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define GATE_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define GATE_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define GATE_GetValue()           PORTAbits.RA6
#define GATE_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define GATE_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set LCD_CLK aliases
#define LCD_CLK_TRIS               TRISBbits.TRISB0
#define LCD_CLK_LAT                LATBbits.LATB0
#define LCD_CLK_PORT               PORTBbits.RB0
#define LCD_CLK_WPU                WPUBbits.WPUB0
#define LCD_CLK_ANS                ANSELBbits.ANSB0
#define LCD_CLK_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define LCD_CLK_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define LCD_CLK_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define LCD_CLK_GetValue()           PORTBbits.RB0
#define LCD_CLK_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define LCD_CLK_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define LCD_CLK_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define LCD_CLK_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define LCD_CLK_SetAnalogMode()  do { ANSELBbits.ANSB0 = 1; } while(0)
#define LCD_CLK_SetDigitalMode() do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set FREQ_RST aliases
#define FREQ_RST_TRIS               TRISBbits.TRISB1
#define FREQ_RST_LAT                LATBbits.LATB1
#define FREQ_RST_PORT               PORTBbits.RB1
#define FREQ_RST_WPU                WPUBbits.WPUB1
#define FREQ_RST_ANS                ANSELBbits.ANSB1
#define FREQ_RST_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define FREQ_RST_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define FREQ_RST_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define FREQ_RST_GetValue()           PORTBbits.RB1
#define FREQ_RST_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define FREQ_RST_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define FREQ_RST_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define FREQ_RST_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define FREQ_RST_SetAnalogMode()  do { ANSELBbits.ANSB1 = 1; } while(0)
#define FREQ_RST_SetDigitalMode() do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set SALINITY aliases
#define SALINITY_TRIS               TRISBbits.TRISB4
#define SALINITY_LAT                LATBbits.LATB4
#define SALINITY_PORT               PORTBbits.RB4
#define SALINITY_WPU                WPUBbits.WPUB4
#define SALINITY_ANS                ANSELBbits.ANSB4
#define SALINITY_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SALINITY_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SALINITY_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SALINITY_GetValue()           PORTBbits.RB4
#define SALINITY_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SALINITY_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SALINITY_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define SALINITY_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define SALINITY_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define SALINITY_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set LCD_SER aliases
#define LCD_SER_TRIS               TRISBbits.TRISB5
#define LCD_SER_LAT                LATBbits.LATB5
#define LCD_SER_PORT               PORTBbits.RB5
#define LCD_SER_WPU                WPUBbits.WPUB5
#define LCD_SER_ANS                ANSELBbits.ANSB5
#define LCD_SER_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LCD_SER_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LCD_SER_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LCD_SER_GetValue()           PORTBbits.RB5
#define LCD_SER_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LCD_SER_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LCD_SER_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define LCD_SER_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define LCD_SER_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define LCD_SER_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set FREQ_CLK aliases
#define FREQ_CLK_TRIS               TRISCbits.TRISC2
#define FREQ_CLK_LAT                LATCbits.LATC2
#define FREQ_CLK_PORT               PORTCbits.RC2
#define FREQ_CLK_ANS                ANSELCbits.ANSC2
#define FREQ_CLK_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define FREQ_CLK_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define FREQ_CLK_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define FREQ_CLK_GetValue()           PORTCbits.RC2
#define FREQ_CLK_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define FREQ_CLK_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define FREQ_CLK_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define FREQ_CLK_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set SHIFT aliases
#define SHIFT_TRIS               TRISCbits.TRISC3
#define SHIFT_LAT                LATCbits.LATC3
#define SHIFT_PORT               PORTCbits.RC3
#define SHIFT_ANS                ANSELCbits.ANSC3
#define SHIFT_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SHIFT_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SHIFT_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SHIFT_GetValue()           PORTCbits.RC3
#define SHIFT_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SHIFT_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SHIFT_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define SHIFT_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set CLK_INH aliases
#define CLK_INH_TRIS               TRISCbits.TRISC4
#define CLK_INH_LAT                LATCbits.LATC4
#define CLK_INH_PORT               PORTCbits.RC4
#define CLK_INH_ANS                ANSELCbits.ANSC4
#define CLK_INH_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define CLK_INH_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define CLK_INH_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define CLK_INH_GetValue()           PORTCbits.RC4
#define CLK_INH_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define CLK_INH_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define CLK_INH_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define CLK_INH_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set FREQ aliases
#define FREQ_TRIS               TRISCbits.TRISC5
#define FREQ_LAT                LATCbits.LATC5
#define FREQ_PORT               PORTCbits.RC5
#define FREQ_ANS                ANSELCbits.ANSC5
#define FREQ_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define FREQ_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define FREQ_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define FREQ_GetValue()           PORTCbits.RC5
#define FREQ_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define FREQ_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define FREQ_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define FREQ_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/