/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate
// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config CP = OFF         // FLASH Program Memory Code Protection bits (Code protection off)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF        // Low Voltage In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EE Memory Code Protection (Code Protection off)
#pragma config WRT = ON         // FLASH Program Memory Write Enable (Unprotected program memory may be written to by EECON control)
// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
#define INPUT 'I'
#define OUTPUT 'O'
#define HIGH 'h'
#define LOW 'l'
#define PA 'A'
#define PB 'B'
#define PC 'C'
#define PD 'D'
#define PE 'E'
#define FALLING 'f'
#define RISING 'r'

void TxRxOcurredReset(void);
void SSPInterruptEnable(void);
void SSPInterruptDisable(void);
void spiCLKpolarity(char polarity);
int ADInterrupt(void);
void ADInterruptReset(void);
int usartRXint(void);
int usartTXint(void);
int SSPIFinterrupt(void);
int CCP1IFInterrupt(void);
void CCP1IFReset(void);
int TMR2IFInterrupt(void);
void TMR2FReset(void);
int TMR1Interrupt(void);
void TMR1IFReset(void);
void EEPROMwriteIntEn(int mode);
void BusCollisionEnable(int mode);
void CCP2InterruptEnable(int mode);
int EEPROMWriteFlag(void);
int BusCollisionFlag(void);
int CCP2Flag(void);
void EEPROMFlagReset(void);
void BusColisionReset(void);
void CCP2FlagReset(void);
void ExternalIntEnable(int mode);
void ExternalIntEnable(int mode);
void PortBChangeIntEnable(int mode);
int TMR0Overflow(void);
int ExternalInt(void);
void ExternalIntReset(void);
int PortBChangeInt(void);
void TMR0IntReset(void);
int TMR0Overflow(void);
void PortBChangeIntEnable(int mode);
void ExternalIntEnable(int mode);
void timer0IntEnable(int mode);
void PeripheralIntEnable(int mode);
void GlobalInterruptEnable(int mode);
int spiRead(void);
void ADPortConfiguration(const int config);
int spiBufferfull(void);
void spiSlavebegin(void);
void spiMasterbegin(void);
void tmr1Prescaler(int rate);
int timer1read(void);
void timerCounter1start(void);
void counter1begin(void);
void timer1begin(void);
void preventiveWDTtoTMR0(void);
void timerCounter0Prescaler(const int rate);
void timer0begin(void);
void counter0begin(char edge);
void digitalWrite(int pin, char port, char value);
void setup(void);
void loop(void);
void portaMode(int pin, char mode);
void portbMode(int pin, char mode);
void portcMode(int pin, char mode);
void portdMode(int pin, char mode);
void porteMode(int pin, char mode);
int digitalRead(int pin, char port);
void digitalWrite(int pin, char port, char value);
void setup(void);
void loop(void);
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

