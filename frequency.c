#include "frequency.h"

void getFrequency() {
    FREQ_RST_SetHigh();
    //NCLR_SetLow();
    FREQ_RST_SetLow();
    //NCLR_SetHigh();
    
    GATE_SetHigh();
    __delay_ms(1000);
    GATE_SetLow();
    
    
    CLK_INH_SetHigh();
    SHIFT_SetLow();
    __delay_ms(1);
    SHIFT_SetHigh();
    CLK_INH_SetLow();
    
    unsigned int freq[16];
    
    //SHIFT_SetHigh();
    for (int i = 0; i < 16; i++) {
        freq[i] = FREQ_GetValue();
        FREQ_CLK_SetHigh();
        __delay_ms(1);
        FREQ_CLK_SetLow();
        
    }

    unsigned int frequency = 0;
    
    for (int i = 4; i < 17; i++) {
        frequency += freq[i] * (i - 4);
    }
    
    //double converted = frequency * 0.1;
    
    sprintf("Frequency:", "%i", frequency);
    
}
