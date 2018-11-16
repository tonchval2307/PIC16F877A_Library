#include <xc.h>
#include "system.h"


long freq;

int main(void)
{
    configuracionInicial();
    setup();
    while(1)
    {
        loop();
    }
    return 0;
}
void configuracionInicial(void)
{
        //ADCCOnfiguration
    ADCON0 = 0x41; //FOSC/8 Channel 0, ADC ON
    ADCON1 = 0x82; //RA3,RA2,RA1,RA0 Analogic || Vref+ = VDD, -Vref = Vss
    //PORT A Configuration
    asm("CLRF PORTA"); //All Terminal as Inputs. only RA4 as digital Inpuy
    asm("MOVLW 0x3F");
    asm("MOVWF TRISA");
    //TRISB = 0xFF; //all pins as Inputs by default
    asm("CLRF PORTB");
    asm("MOVLW 0xFF");
    asm("MOVWF TRISB");
    //PORTC Configuration
    asm("CLRF PORTC");
    asm("MOVLW 0xFF");
    asm("MOVWF TRISC");
    //PORTD Configuration
    asm("CLRF PORTD");
    asm("MOVLW 0xFF");
    asm("MOVF TRISD");
    PORTE = 0x00;
    TRISE = 0x07;
    PWM1_Init(1500);
    PWM2_Init(1500);
    PWM1_Start();
    PWM2_Start();
    
}

void pinMode(char pin, char mode)
{
    switch(pin)
    {
        case 0x00:
            TRISCbits.TRISC0 = mode;
            break;
        case 0x01:
            TRISCbits.TRISC1 = mode;
            break;
        case 0x02:
            TRISCbits.TRISC2 = mode;
            break;
        case 0x03:
            TRISCbits.TRISC3 = mode;
            break;
        case 0x04:
            TRISDbits.TRISD0 = mode;
            break;
        case 0x05:
            TRISDbits.TRISD1 = mode;
            break;
        case 0x06:
            TRISDbits.TRISD2 = mode;
            break;
        case 0x07:
            TRISDbits.TRISD3 = mode;
            break;
        case 0x08:
            TRISCbits.TRISC4 = mode;
            break;
        case 0x09:
            TRISCbits.TRISC5 = mode;
            break;
        case 0x0A:
            TRISCbits.TRISC6 = mode;
            break;
        case 0x0B:
            TRISCbits.TRISC7 = mode;
            break;
        case 0x0C:
            TRISDbits.TRISD4 = mode;
            break;
        case 0x0D:
            TRISDbits.TRISD5 = mode;
            break;
        case 0x0E:
            TRISDbits.TRISD6 = mode;
            break;
        case 0x0F:
            TRISDbits.TRISD7 = mode;
            break;
        case 0x10:
            TRISBbits.TRISB0 = mode;
            break;
        case 0x11:
            TRISBbits.TRISB1 = mode;
            break;
        case 0x12:
            TRISBbits.TRISB2 = mode;
            break;
        case 0x13:
            TRISBbits.TRISB3 = mode;
            break;
        case 0x14:
            TRISBbits.TRISB4 = mode;
            break;
        case 0x15:
            TRISBbits.TRISB5 = mode;
            break;
        case 0x16:
            TRISBbits.TRISB6 = mode;
            break;
        case 0x17:
            TRISBbits.TRISB7 = mode;
            break;      
    }
}
void digitalWrite(char pin, char value)
{
    switch(pin)
    {
        case 0x00:
            PORTCbits.RC0 = value;
            break;
        case 0x01:
            PORTCbits.RC1 = value;
            break;
        case 0x02:
            PORTCbits.RC2 = value;
            break;
        case 0x03:
            PORTCbits.RC3 = value;
            break;
        case 0x04:
            PORTDbits.RD0 = value;
            break;
        case 0x05:
            PORTDbits.RD1 = value;
            break;
        case 0x06:
            PORTDbits.RD2 = value;
            break;
        case 0x07:
            PORTDbits.RD3 = value;
            break;
        case 0x08:
            PORTDbits.RD4 = value;
            break;
        case 0x09:
            PORTCbits.RC5 = value;
            break;
        case 0x0A:
            PORTCbits.RC6 = value;
            break;
        case 0x0B:
            PORTCbits.RC7 = value;
            break;
        case 0x0C:
            PORTDbits.RD4 = value;
            break;
        case 0x0D:
            PORTDbits.RD5 = value;
            break;
        case 0x0E:
            PORTDbits.RD6 = value;
            break;
        case 0x0F:
            PORTDbits.RD7 = value;
            break;
        case 0x10:
            PORTBbits.RB0 = value;
            break;
        case 0x11:
            PORTBbits.RB1 = value;
            break;
        case 0x12:
            PORTBbits.RB2 = value;
            break;
        case 0x13:
            PORTBbits.RB3 = value;
            break;
        case 0x14:
            PORTBbits.RB4 = value;
            break;
        case 0x15:
            PORTBbits.RB5 = value;
            break;
        case 0x16:
            PORTBbits.RB6 = value;
            break;
        case 0x17:
            PORTBbits.RB7 = value;
            break;      
    }
}
char digitalRead(char pin)
{
    char a = 0;
    switch(pin)
    {
        case 0x00:
            a = PORTCbits.RC0;
            break;
        case 0x01:
            a = PORTCbits.RC1;
            break;
        case 0x02:
            a = PORTCbits.RC2;
            break;
        case 0x03:
            a = PORTCbits.RC3;
            break;
        case 0x04:
            a = PORTDbits.RD0;
            break;
        case 0x05:
            a = PORTDbits.RD1;
            break;
        case 0x06:
            a = PORTDbits.RD2;
            break;
        case 0x07:
            a = PORTDbits.RD3;
            break;
        case 0x08:
            a = PORTDbits.RD4;
            break;
        case 0x09:
            a = PORTCbits.RC5;
            break;
        case 0x0A:
            a = PORTCbits.RC6;
            break;
        case 0x0B:
            a = PORTCbits.RC7;
            break;
        case 0x0C:
            a = PORTDbits.RD4;
            break;
        case 0x0D:
            a = PORTDbits.RD5;
            break;
        case 0x0E:
            a = PORTDbits.RD6;
            break;
        case 0x0F:
            a = PORTDbits.RD7;
            break;
        case 0x10:
            a = PORTBbits.RB0;
            break;
        case 0x11:
            a = PORTBbits.RB1;
            break;
        case 0x12:
            a = PORTBbits.RB2;
            break;
        case 0x13:
            a = PORTBbits.RB3;
            break;
        case 0x14:
            a = PORTBbits.RB4;
            break;
        case 0x15:
            a = PORTBbits.RB5;
            break;
        case 0x16:
            a = PORTBbits.RB6;
            break;
        case 0x17:
            a = PORTBbits.RB7;
            break;      
    }
    return a;
}
unsigned int analogRead(char channel)
{
    switch(channel)
    {
        case 0:
            ADCON0 &= 0x45; //Start COnversion;
            while(ADCON0bits.GO_nDONE != 0)
            {
            }
            return (ADRESH << 8)+ ADRESL;
            break;
        case 1:
            ADCON0 = 0x4D; //Start COnversion;
            while(ADCON0bits.GO_nDONE != 0)
            {

            }
            return (ADRESH << 8)+ ADRESL;
            break;
        case 2:
            ADCON0 = 0x55; //Start COnversion;
            while(ADCON0bits.GO_nDONE != 0)
            {
            }
            return (ADRESH << 8)+ ADRESL;
            break;
        case 3:
            ADCON0 = 0x5D; //Start COnversion;
            while(ADCON0bits.GO_nDONE != 0)
            {
            }
            return (ADRESH << 8)+ ADRESL;
            break;
        case 4:
            ADCON0 = 0x65; //Start COnversion;
            while(ADCON0bits.GO_nDONE != 0)
            {
            }
            return (ADRESH << 8)+ ADRESL;
            break;
    }
}
void analogWrite(char pin, unsigned int value)
{
    switch(pin)
    {
        case 1:
            PWM2_Duty(value);
            break;
        case 2:
            PWM1_Duty(value);
            break;
    }
}

char SerialBegin(const long int baudrate)
{
  unsigned int x;
  x = (_XTAL_FREQ - baudrate*64)/(baudrate*64);   //SPBRG for Low Baud Rate
  if(x>255)                                       //If High Baud Rage Required
  {
    x = (_XTAL_FREQ - baudrate*16)/(baudrate*16); //SPBRG for High Baud Rate
    BRGH = 1;                                     //Setting High Baud Rate
  }
  if(x<256)
  {
    SPBRG = x;                                    //Writing SPBRG Register
    SYNC = 0;                                     //Setting Asynchronous Mode, ie UART
    SPEN = 1;                                     //Enables Serial Port
    TRISC7 = 1;                                   //As Prescribed in Datasheet
    TRISC6 = 1;                                   //As Prescribed in Datasheet
    CREN = 1;                                     //Enables Continuous Reception
    TXEN = 1;                                     //Enables Transmission
    return 1;                                     //Returns 1 to indicate Successful Completion
  }
  return 0;                                       //Returns 0 to indicate UART initialization failed
}
void delay(const int milis)
{
    for(int j=0;j<milis;j++)
    {
        //Retardo de 1ms
        for(int i=0;i<400;i++)
        {
            asm("NOP");
        }
    }
}
void SerialWrite(char data)
{
  while(!TRMT);
  TXREG = data;
}
char SerialEmpty(void)
{
  return TRMT;
}
char SerialAvailable(void)
{
  return RCIF;
}
void SerialWriteText(char *text)
{
  int i;
  for(i=0;text[i]!='\0';i++)
    SerialWrite(text[i]);
}
char SerialRead(void)
{
  while(!RCIF);
  return RCREG;
}
void SerialReadText(char *Output, unsigned int length)
{
  unsigned int i;
  for(int i=0;i<length;i++)
  Output[i] = SerialRead();
}
int PWM_Max_Duty(void)
{
  return _XTAL_FREQ/(freq*TMR2PRESCALE);
}

void PWM1_Init(long fre)
{
  PR2 = (_XTAL_FREQ/(fre*4*TMR2PRESCALE)) - 1;
  freq = fre;
}

void PWM2_Init(long fre)
{
  PR2 = (_XTAL_FREQ/(fre*4*TMR2PRESCALE)) - 1;
  freq = fre;
}

void PWM1_Duty(unsigned int duty)
{
  if(duty<1024)
  {
    duty = ((float)duty/1023)*PWM_Max_Duty();
    CCP1X = duty & 2;
    CCP1Y = duty & 1;
    CCPR1L = duty>>2;
  }
}

void PWM2_Duty(unsigned int duty)
{
  if(duty<1024)
  {
    duty = ((float)duty/1023)*PWM_Max_Duty();
    CCP2X = duty & 2;
    CCP2Y = duty & 1;
    CCPR2L = duty>>2;
  }
}

void PWM1_Start(void)
{
  CCP1M3 = 1;
  CCP1M2 = 1;
  #if TMR2PRESCALE == 1
    T2CKPS0 = 0;
    T2CKPS1 = 0;
  #elif TMR2PRESCALE == 4
    T2CKPS0 = 1;
    T2CKPS1 = 0;
  #elif TMR2PRESCALE == 16
    T2CKPS0 = 1;
    T2CKPS1 = 1;
  #endif
  TMR2ON = 1;
  TRISC2 = 0;
}

void PWM1_Stop(void)
{
  CCP1M3 = 0;
  CCP1M2 = 0;
}

void PWM2_Start(void)
{
  CCP2M3 = 1;
  CCP2M2 = 1;
  #if TMR2PRESCALE == 1
    T2CKPS0 = 0;
    T2CKPS1 = 0;
  #elif TMR2PRESCALE == 4
    T2CKPS0 = 1;
    T2CKPS1 = 0;
  #elif TMR2PRESCALE == 16
    T2CKPS0 = 1;
    T2CKPS1 = 1;
  #endif
    TMR2ON = 1;
    TRISC1 = 0;
}

void PWM2_Stop(void)
{
  CCP2M3 = 0;
  CCP2M2 = 0;
}

