#include <xc.h>
#include "system.h"



int main(void)
{
    setup();
    while(1)
    {
        loop();
    }
    return 0;
}

void portaMode(int pin, char mode)
{
    if(pin >= 6)
    {
        pin = 5;
        if((mode == 'I') || (mode == 'i'))
        {
            TRISAbits.TRISA5 = 1;
        }
        else if((mode == 'O')||(mode == 'o'))
        {
            TRISAbits.TRISA5 = 0;
        }
    }
    else
    {
        switch(pin)
        {
            case 0:
                if((mode == 'I') || (mode == 'i'))
                {
                    TRISAbits.TRISA0 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISAbits.TRISA0 = 0;
                }
                break;
            case 1:
                if((mode == 'I') || (mode == 'i'))
                {
                    TRISAbits.TRISA1 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISAbits.TRISA1 = 0;
                }
                break;
            case 2:
                if((mode == 'I') || (mode == 'i'))
                {
                    TRISAbits.TRISA2 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISAbits.TRISA2 = 0;
                }
                break;
            case 3:
                if((mode == 'I') || (mode == 'i'))
                {
                    TRISAbits.TRISA3 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISAbits.TRISA3 = 0;
                }
                break;
            case 4:
                if((mode == 'I') || (mode == 'i'))
                {
                    TRISAbits.TRISA4 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISAbits.TRISA4 = 0;
                }
                break;
            case 5:
                if((mode == 'I') || (mode == 'i'))
                {
                    TRISAbits.TRISA5 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISAbits.TRISA5 = 0;
                }
                break;
        }

    }
}
void portbMode(int pin, char mode)
{
    if(pin >= 8)
    {
      pin = 7;
      if((mode == 'I') || (mode == 'i'))
      {
            TRISBbits.TRISB7 = 1;
      }
      else if((mode == 'O')||(mode == 'o'))
      {
            TRISBbits.TRISB7 = 0;
      }
    }
    else
    {
        switch(pin)
        {
            case 0:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISBbits.TRISB0 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISBbits.TRISB0 = 0;
                }
                break;
            case 1:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISBbits.TRISB1 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISBbits.TRISB1 = 0;
                }
                break;
            case 2:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISBbits.TRISB2 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISBbits.TRISB2 = 0;
                }
                break;
            case 3:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISBbits.TRISB3 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISBbits.TRISB3 = 0;
                }
                break;
            case 4:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISBbits.TRISB4 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISBbits.TRISB4 = 0;
                }
                break;
            case 5:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISBbits.TRISB5 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISBbits.TRISB5 = 0;
                }
                break;
            case 6:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISBbits.TRISB6 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISBbits.TRISB6 = 0;
                }
                break;
            case 7:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISBbits.TRISB7 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISBbits.TRISB7 = 0;
                }
                break;
        }
    }
}
void portcMode(int pin, char mode)
{
    if(pin >= 8)
    {
        pin = 7;
        if((mode == 'I')||(mode == 'i'))
        {
            TRISCbits.TRISC7 = 1;
        }
        else if((mode == 'O')||(mode == 'o'))
        {
            TRISCbits.TRISC7 = 0;
        }
    }
    else
    {
        switch(pin)
        {
            case 0:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC0 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC0 = 0;
                }
                break;
            case 1:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC1 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC1 = 0;
                }
                break;
            case 2:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC2 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC2 = 0;
                }
                break;
            case 3:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC3 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC3 = 0;
                }
                break;
            case 4:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC4 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC4 = 0;
                }
                break;
            case 5:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC5 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC5 = 0;
                }
                break;
            case 6:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC6 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC6 = 0;
                }
                break;
            case 7:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC7 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC7 = 0;
                }
                break;
        }
    }
}
void portdMode(int pin, char mode)
{
    if(pin >= 8)
    {
        pin = 7;
        if((mode == 'I')||(mode == 'i'))
        {
            TRISCbits.TRISC7 = 1;
        }
        else if((mode == 'O')||(mode == 'o'))
        {
            TRISCbits.TRISC7 = 0;
        }
    }
    else
    {
        switch(pin)
        {
            case 0:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC0 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC0 = 0;
                }
                break;
            case 1:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC1 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC1 = 0;
                }
                break;
            case 2:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC2 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC2 = 0;
                }
                break;
            case 3:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC3 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC3 = 0;
                }
                break;
            case 4:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC4 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC4 = 0;
                }
                break;
            case 5:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC5 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC5 = 0;
                }
                break;
            case 6:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC6 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC6 = 0;
                }
                break;
            case 7:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISCbits.TRISC7 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISCbits.TRISC7 = 0;
                }
                break;
        }
    }
}
void porteMode(int pin, char mode)
{
    if(pin >= 3)
    {
        if((mode == 'I')||(mode == 'i'))
        {
            TRISEbits.TRISE2 = 1;
        }
        else if((mode == 'O')||(mode == 'o'))
        {
            TRISEbits.TRISE2 = 0;
        }
    }
    else
    {
        switch(pin)
        {
            case 0:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISEbits.TRISE0 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISEbits.TRISE0 = 0;
                }
                break;
            case 1:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISEbits.TRISE1 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISEbits.TRISE1 = 0;
                }
                break;
            case 2:
                if((mode == 'I')||(mode == 'i'))
                {
                    TRISEbits.TRISE2 = 1;
                }
                else if((mode == 'O')||(mode == 'o'))
                {
                    TRISEbits.TRISE2 = 0;
                }
                break;
        }
    }
}
int digitalRead(int pin, char port)
{
    if((port == 'A')||(port == 'a'))
    {
        if(pin >=6)
        {
            if(PORTAbits.RA5 == 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            switch(pin)
            {
                case 0:
                    if(PORTAbits.RA0 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 1:
                    if(PORTAbits.RA1 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 2:
                    if(PORTAbits.RA2 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 3:
                    if(PORTAbits.RA3 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 4:
                    if(PORTAbits.RA4 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 5:
                    if(PORTAbits.RA5 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
            }
        }
    }
    else if ((port == 'B')||(port == 'b'))
    {
        if(pin >= 8)
        {
            if(PORTBbits.RB7 == 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            switch(pin)
            {
                case 0:
                    if(PORTBbits.RB0 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 1:
                    if(PORTBbits.RB1 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 2:
                    if(PORTBbits.RB2 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 3:
                    if(PORTBbits.RB3 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 4:
                    if(PORTBbits.RB4 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 5:
                    if(PORTBbits.RB5 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 6:
                    if(PORTBbits.RB6 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 7:
                    if(PORTBbits.RB7 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
            }
        }
    }
    else if ((port == 'C')||(port == 'c'))
    {
        if(pin >= 8)
        {
            if(PORTCbits.RC7 == 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            switch(pin)
            {
                case 0:
                    if(PORTCbits.RC0 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 1:
                    if(PORTCbits.RC1 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 2:
                    if(PORTCbits.RC2 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 3:
                    if(PORTCbits.RC3 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 4:
                    if(PORTCbits.RC4 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 5:
                    if(PORTCbits.RC5 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 6:
                    if(PORTCbits.RC6 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 7:
                    if(PORTCbits.RC7 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
            }
        }
    }
    else if ((port == 'D')||(port == 'd'))
    {
        if(pin >= 8)
        {
            if(PORTDbits.RD7 == 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            switch(pin)
            {
                case 0:
                    if(PORTDbits.RD0 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 1:
                    if(PORTDbits.RD1 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 2:
                    if(PORTDbits.RD2 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 3:
                    if(PORTDbits.RD3 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 4:
                    if(PORTDbits.RD4 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 5:
                    if(PORTDbits.RD5 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 6:
                    if(PORTDbits.RD6 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 7:
                    if(PORTDbits.RD7 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
            }
        }
    }
    else if ((port == 'E')||(port == 'e'))
    {
        if(pin >= 3)
        {
            if(PORTEbits.RE2 == 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            switch(pin)
            {
                case 0:
                    if(PORTEbits.RE0 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 1:
                    if(PORTEbits.RE1 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
                case 2:
                    if(PORTEbits.RE2 == 1)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                    break;
            }
        }
    }
}
void digitalWrite(int pin, char port, char value)
{
    switch(port)
    {
        case 'A':
            switch(pin)
            {
                case 0:
                    if(value == 'h')
                    {
                        PORTAbits.RA0 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTAbits.RA0 = 0;
                    }
                    break;
                case 1:
                    if(value == 'h')
                    {
                        PORTAbits.RA1 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTAbits.RA1 = 0;
                    }
                    break;
                case 2:
                    if(value == 'h')
                    {
                        PORTAbits.RA2 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTAbits.RA2 = 0;
                    }
                    break;
                case 3:
                    if(value == 'h')
                    {
                        PORTAbits.RA3 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTAbits.RA3 = 0;
                    }
                    break;
                case 4:
                    if(value == 'h')
                    {
                        PORTAbits.RA4 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTAbits.RA4 = 0;
                    }
                    break;
                case 5:
                    if(value == 'h')
                    {
                        PORTAbits.RA5 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTAbits.RA5 = 0;
                    }
                    break;
            }
            break;
        case 'B':
            switch(pin)
            {
                case 0:
                    if(value == 'h')
                    {
                        PORTBbits.RB0 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTBbits.RB0 = 0;
                    }
                    break;
                case 1:
                    if(value == 'h')
                    {
                        PORTBbits.RB1 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTBbits.RB1 = 0;
                    }
                    break;
                case 2:
                    if(value == 'h')
                    {
                        PORTBbits.RB2 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTBbits.RB2 = 0;
                    }
                    break;
                case 3:
                    if(value == 'h')
                    {
                        PORTBbits.RB3 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTBbits.RB3 = 0;
                    }
                    break;
                case 4:
                    if(value == 'h')
                    {
                        PORTBbits.RB4 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTBbits.RB4 = 0;
                    }
                    break;
                case 5:
                    if(value == 'h')
                    {
                        PORTBbits.RB5 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTBbits.RB5 = 0;
                    }
                    break;
                case 6:
                    if(value == 'h')
                    {
                        PORTBbits.RB6 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTBbits.RB6 = 0;
                    }
                    break;
                case 7:
                    if(value == 'h')
                    {
                        PORTBbits.RB7 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTBbits.RB7 = 0;
                    }
                    break;
            }
            break;
        case 'C':
            switch(pin)
            {
              case 0:
                    if(value == 'h')
                    {
                        PORTCbits.RC0 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTCbits.RC0 = 0;
                    }
                    break;
                case 1:
                    if(value == 'h')
                    {
                        PORTCbits.RC1 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTCbits.RC1 = 0;
                    }
                    break;
                case 2:
                    if(value == 'h')
                    {
                        PORTCbits.RC2 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTCbits.RC2 = 0;
                    }
                    break;
                case 3:
                    if(value == 'h')
                    {
                        PORTCbits.RC3 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTCbits.RC3 = 0;
                    }
                    break;
                case 4:
                    if(value == 'h')
                    {
                        PORTCbits.RC4 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTCbits.RC4 = 0;
                    }
                    break;
                case 5:
                    if(value == 'h')
                    {
                        PORTCbits.RC5 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTCbits.RC5 = 0;
                    }
                    break;
                case 6:
                    if(value == 'h')
                    {
                        PORTCbits.RC6 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTCbits.RC6 = 0;
                    }
                    break;
                case 7:
                    if(value == 'h')
                    {
                        PORTCbits.RC7 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTCbits.RC7 = 0;
                    }
                    break;
            }
            break;
        case 'D':
            switch(pin)
            {
                case 0:
                    if(value == 'h')
                    {
                        PORTDbits.RD0 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTDbits.RD0 = 0;
                    }
                    break;
                case 1:
                    if(value == 'h')
                    {
                        PORTDbits.RD1 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTDbits.RD1 = 0;
                    }
                    break;
                case 2:
                    if(value == 'h')
                    {
                        PORTDbits.RD2 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTDbits.RD2 = 0;
                    }
                    break;
                case 3:
                    if(value == 'h')
                    {
                        PORTDbits.RD3 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTDbits.RD3 = 0;
                    }
                    break;
                case 4:
                    if(value == 'h')
                    {
                        PORTDbits.RD4 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTDbits.RD4 = 0;
                    }
                    break;
                case 5:
                    if(value == 'h')
                    {
                        PORTDbits.RD5 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTDbits.RD5 = 0;
                    }
                    break;
                case 6:
                    if(value == 'h')
                    {
                        PORTDbits.RD6 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTDbits.RD6 = 0;
                    }
                    break;
                case 7:
                    if(value == 'h')
                    {
                        PORTDbits.RD7 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTDbits.RD7 = 0;
                    }
                    break;
            }
            break;
        case 'E':
            switch(pin)
            {
                case 0:
                    if(value == 'h')
                    {
                        PORTEbits.RE0 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTEbits.RE0 = 0;
                    }
                    break;
                case 1:
                    if(value == 'h')
                    {
                        PORTEbits.RE1 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTEbits.RE1 = 0;
                    }
                    break;
                case 2:
                    if(value == 'h')
                    {
                        PORTEbits.RE2 = 1;
                    }
                    else if(value == 'l')
                    {
                        PORTEbits.RE2 = 0;
                    }
                    break;
            }
            break;
    }
}
/*
 *  Timer 0 Module
 */
void timer0begin(void)
{
    preventiveWDTtoTMR0();
    OPTION_REGbits.T0CS = 0;
    OPTION_REGbits.PSA = 0;
}
void counter0begin(char edge)
{
    preventiveWDTtoTMR0();
    OPTION_REGbits.T0CS = 1;
    OPTION_REGbits.PSA = 0;
    switch(edge)
    {
        case 'r':
            OPTION_REGbits.T0SE = 0;
            break;
        case 'f':
            OPTION_REGbits.T0SE = 1;
            break;
    }
}
void timerCounter0Prescaler(const int rate)
{
    switch(rate)
    {
        case 2:
            OPTION_REGbits.PS2 = 0;
            OPTION_REGbits.PS1 = 0;
            OPTION_REGbits.PS0 = 0;
            break;
        case 4:
            OPTION_REGbits.PS2 = 0;
            OPTION_REGbits.PS1 = 0;
            OPTION_REGbits.PS0 = 1;
            break;
        case 8:
            OPTION_REGbits.PS2 = 0;
            OPTION_REGbits.PS1 = 1;
            OPTION_REGbits.PS0 = 0;
            break;
        case 16:
            OPTION_REGbits.PS2 = 0;
            OPTION_REGbits.PS1 = 1;
            OPTION_REGbits.PS0 = 1;
            break;
        case 32:
            OPTION_REGbits.PS2 = 1;
            OPTION_REGbits.PS1 = 0;
            OPTION_REGbits.PS0 = 0;
            break;
        case 64:
            OPTION_REGbits.PS2 = 1;
            OPTION_REGbits.PS1 = 0;
            OPTION_REGbits.PS0 = 1;
            break;
        case 128:
            OPTION_REGbits.PS2 = 1;
            OPTION_REGbits.PS1 = 1;
            OPTION_REGbits.PS0 = 0;
            break;
        case 256:
            OPTION_REGbits.PS2 = 1;
            OPTION_REGbits.PS1 = 1;
            OPTION_REGbits.PS0 = 1;
            break;
    }
}
void preventiveWDTtoTMR0(void)
{
    //To Change the prescaler from TMR0 to WDT
    asm("BSF    STATUS, RP0");
    asm("MOVLW  b'xx0x0xxx'");
    asm("MOVWF  OPTION_REG");
    asm("BCF    STATUS, RP0");
    asm("CLRF   TMR0");
    asm("BSF    STATUS, RP1");
    asm("MOVLW  b'xxxx1xxx'");
    asm("MOVWF  OPTION_REG");
    asm("BCF    STATUS, RP0");
    //To Change Prescaler from WDT to TMR0
    asm("CLRWDT ");
    asm("BSF    STATUS, RP0");
    asm("MOVLW  b'xxxx0xxx'");
    asm("MOVWF  OPTION_REG");
    asm("BCF    STATUS, RP0");
}
/*
 * Timer 1
 */
void timer1begin(void)
{
    T1CONbits.TMR1CS = 0;
}
void counter1begin(void)
{
    T1CONbits.TMR1CS = 1;
}
void timerCounter1start(void)
{
    T1CONbits.TMR1ON = 1;
}
int timer1read(void)
{
    int T1H = 0;
    int T1L = 0;
    T1H = TMR1H;
    T1L = TMR1L;
    return T1H + T1L;
}
void tmr1Prescaler(int rate)
{
    switch(rate)
    {
        case 8:
            T1CONbits.T1CKPS1 = 1;
            T1CONbits.T1CKPS0 = 1;
            break;
        case 4:
            T1CONbits.T1CKPS1 = 1;
            T1CONbits.T1CKPS0 = 0;
            break;
        case 2:
            T1CONbits.T1CKPS1 = 0;
            T1CONbits.T1CKPS0 = 1;
            break;
        case 1:
            T1CONbits.T1CKPS1 = 0;
            T1CONbits.T1CKPS0 = 0;
            break;
    }
}

/**
 * SPI Module
 **/
int spiRead(void)
{
    return SSPBUF;
}
void spiSlavebegin(void)
{
    ADPortConfiguration(14);
    SSPSTATbits.SMP = 0;
    SSPCONbits.SSPEN = 1;
    TRISCbits.TRISC3 = 1;  //Serial Clock
    TRISCbits.TRISC4 = 1;   //Seral Data Input MOSI
    TRISCbits.TRISC5 = 0;   //Serial Data Out MISO
    TRISAbits.TRISA5 = 1;
    SSPCONbits.SSPM3 = 0;
    SSPCONbits.SSPM2 = 1;
    SSPCONbits.SSPM1 = 0;
    SSPCONbits.SSPM0 = 0;

}
void ADPortConfiguration(const int config)
{
    switch(config)
    {
        case 0:
            ADCON1bits.PCFG3 = 0;
            ADCON1bits.PCFG2 = 0;
            ADCON1bits.PCFG1 = 0;
            ADCON1bits.PCFG0 = 0;
            break;
        case 1:
            ADCON1bits.PCFG3 = 0;
            ADCON1bits.PCFG2 = 0;
            ADCON1bits.PCFG1 = 0;
            ADCON1bits.PCFG0 = 1;
            break;
        case 2:
            ADCON1bits.PCFG3 = 0;
            ADCON1bits.PCFG2 = 0;
            ADCON1bits.PCFG1 = 1;
            ADCON1bits.PCFG0 = 0;
            break;
        case 3:
            ADCON1bits.PCFG3 = 0;
            ADCON1bits.PCFG2 = 0;
            ADCON1bits.PCFG1 = 1;
            ADCON1bits.PCFG0 = 1;
            break;
        case 4:
            ADCON1bits.PCFG3 = 0;
            ADCON1bits.PCFG2 = 1;
            ADCON1bits.PCFG1 = 0;
            ADCON1bits.PCFG0 = 0;
            break;
        case 5:
            ADCON1bits.PCFG3 = 0;
            ADCON1bits.PCFG2 = 1;
            ADCON1bits.PCFG1 = 0;
            ADCON1bits.PCFG0 = 1;
            break;
        case 6:
            ADCON1bits.PCFG3 = 0;
            ADCON1bits.PCFG2 = 1;
            ADCON1bits.PCFG1 = 1;
            ADCON1bits.PCFG0 = 0;
            break;
        case 7:
            ADCON1bits.PCFG3 = 1;
            ADCON1bits.PCFG2 = 0;
            ADCON1bits.PCFG1 = 0;
            ADCON1bits.PCFG0 = 0;
            break;
        case 8:
            ADCON1bits.PCFG3 = 1;
            ADCON1bits.PCFG2 = 0;
            ADCON1bits.PCFG1 = 0;
            ADCON1bits.PCFG0 = 1;
            break;
        case 9:
            ADCON1bits.PCFG3 = 1;
            ADCON1bits.PCFG2 = 0;
            ADCON1bits.PCFG1 = 1;
            ADCON1bits.PCFG0 = 0;
            break;
        case 10:
            ADCON1bits.PCFG3 = 1;
            ADCON1bits.PCFG2 = 0;
            ADCON1bits.PCFG1 = 1;
            ADCON1bits.PCFG0 = 1;
            break;
        case 11:
            ADCON1bits.PCFG3 = 1;
            ADCON1bits.PCFG2 = 1;
            ADCON1bits.PCFG1 = 0;
            ADCON1bits.PCFG0 = 0;
            break;
        case 12:
            ADCON1bits.PCFG3 = 1;
            ADCON1bits.PCFG2 = 1;
            ADCON1bits.PCFG1 = 0;
            ADCON1bits.PCFG0 = 1;
            break;
        case 13:
            ADCON1bits.PCFG3 = 1;
            ADCON1bits.PCFG2 = 1;
            ADCON1bits.PCFG1 = 1;
            ADCON1bits.PCFG0 = 0;
            break;
        case 14:
            ADCON1bits.PCFG3 = 1;
            ADCON1bits.PCFG2 = 1;
            ADCON1bits.PCFG1 = 1;
            ADCON1bits.PCFG0 = 1;
            break;
        default:
            ADCON1bits.PCFG3 = 0;
            ADCON1bits.PCFG2 = 0;
            ADCON1bits.PCFG1 = 0;
            ADCON1bits.PCFG0 = 0;
            break;
    }
}
void spiCLKpolarity(char polarity)
{
    if(polarity == 'h')
    {
        SSPCONbits.CKP = 1;
    }
    else if(polarity == 'l')
    {
        SSPCONbits.CKP = 0;
    }
}
int spiBufferfull(void)
{
    return SSPSTATbits.BF;
}
int spiOverflow(void)
{
    return SSPCONbits.SSPOV;
}
void spiMasterbegin(void)
{

}
/*
 * Interruption
 */
void GlobalInterruptEnable(int mode)
{
    if(mode == 1)
    {
        INTCONbits.GIE = 1;
    }
    else
    {
        INTCONbits.GIE = 0;
    }
}
void PeripheralIntEnable(int mode)
{
   if(mode == 1)
    {
        INTCONbits.PEIE = 1;
    }
    else
    {
        INTCONbits.PEIE = 0;
    }
}
void timer0IntEnable(int mode)
{
    if(mode == 1)
    {
        INTCONbits.T0IE = 1;
    }
    else
    {
        INTCONbits.T0IE = 0;
    }
}
void ExternalIntEnable(int mode)
{
    if(mode == 1)
    {
        INTCONbits.INTE = 1;
    }
    else
    {
        INTCONbits.INTE = 0;
    }
}
void PortBChangeIntEnable(int mode)
{
    if(mode == 1)
    {
        INTCONbits.RBIE = 1;
    }
    else
    {
        INTCONbits.RBIE = 0;
    }
}
int TMR0Overflow(void)
{
    if(INTCONbits.T0IF == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void TMR0IntReset(void)
{
  INTCONbits.T0IF = 0;
}
int ExternalInt(void)
{
    if(INTCONbits.INTF == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void ExternalIntReset(void)
{
    INTCONbits.INTF = 0;
}
int PortBChangeInt(void)
{
    if(INTCONbits.RBIF == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void PeriheralEnable(char peripheral, int mode)
{
    switch(peripheral)
    {
        case 'p':
            if(mode == 1)
            {
               PIE1bits.PSPIE = 0;
            }
            else if(mode == 0)
            {
                PIE1bits.PSPIE = 0;
            }
            else
            {
               PIE1bits.PSPIE = 0;
            }
            break;
        case 'a':
            if(mode == 1)
            {
               PIE1bits.ADIE = 1;
            }
            else if(mode == 0)
            {
                PIE1bits.ADIE = 0;
            }
            else
            {
               PIE1bits.ADIE = 0;
            }
            break;
        case 'r':
            if(mode == 1)
            {
               PIE1bits.RCIE = 1;
            }
            else if(mode == 0)
            {
                PIE1bits.RCIE = 0;
            }
            else
            {
               PIE1bits.RCIE = 0;
            }
            break;
        case 't':
            if(mode == 1)
            {
               PIE1bits.TXIE = 1;
            }
            else if(mode == 0)
            {
                PIE1bits.TXIE = 0;
            }
            else
            {
               PIE1bits.TXIE = 0;
            }
            break;
        case 's':
            if(mode == 1)
            {
               PIE1bits.SSPIE = 1;
            }
            else if(mode == 0)
            {
                PIE1bits.SSPIE = 0;
            }
            else
            {
               PIE1bits.SSPIE = 0;
            }
            break;
        case 'c':
            if(mode == 1)
            {
               PIE1bits.CCP1IE = 1;
            }
            else if(mode == 0)
            {
                PIE1bits.CCP1IE = 0;
            }
            else
            {
               PIE1bits.CCP1IE = 0;
            }
            break;
        case 'd':
            if(mode == 1)
            {
               PIE1bits.TMR2IE = 1;
            }
            else if(mode == 0)
            {
                PIE1bits.TMR2IE = 0;
            }
            else
            {
               PIE1bits.TMR2IE = 0;
            }
            break;
        case 'f':
            if(mode == 1)
            {
               PIE1bits.TMR1IE = 1;
            }
            else if(mode == 0)
            {
                PIE1bits.TMR1IE = 0;
            }
            else
            {
               PIE1bits.TMR1IE = 0;
            }
            break;
    }
}
int ADInterrupt(void)
{
   if(PIR1bits.ADIF == 1)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}
void ADInterruptReset(void)
{
    PIR1bits.ADIF = 0;
}
int usartRXint(void)
{
    return PIR1bits.RCIF;
}
int usartTXint(void)
{
    return PIR1bits.TXIF;
}
int SSPIFinterrupt(void)
{
    return PIR1bits.SSPIF;
}
void TxRxOcurredReset(void)
{
    PIR1bits.SSPIF = 0;
}
int CCP1IFInterrupt(void)
{
    return PIR1bits.CCP1IF;
}
void CCP1IFReset(void)
{
    PIR1bits.CCP1IF = 0;
}
int TMR2IFInterrupt(void)
{
    return PIR1bits.TMR2IF;
}
void TMR2FReset(void)
{
    PIR1bits.TMR2IF = 0;
}
int TMR1Interrupt(void)
{
    return PIR1bits.TMR1IF;
}
void TMR1IFReset(void)
{
    PIR1bits.TMR1IF = 0;
}
void EEPROMwriteIntEn(int mode)
{
    if(mode == 1)
    {
       PIE2bits.EEIE = 1;
    }
    else
    {
        PIE2bits.EEIE = 0;
    }
}
void BusCollisionEnable(int mode)
{
    if(mode == 1)
    {
      PIE2bits.BCLIE = 1;
    }
    else
    {
      PIE2bits.BCLIE = 0;
    }
}
void CCP2InterruptEnable(int mode)
{
    if(mode == 1)
    {
        PIE2bits.CCP2IE = 1;
    }
    else
    {
        PIE2bits.CCP2IE = 0;
    }
}
int EEPROMWriteFlag(void)
{
    return PIR2bits.EEIF;
}
int BusCollisionFlag(void)
{
    return PIR2bits.BCLIF;
}
int CCP2Flag(void)
{
    return PIR2bits.CCP2IF;
}
void EEPROMFlagReset(void)
{
    PIR2bits.EEIF = 0;
}
void BusColisionReset(void)
{
    PIR2bits.BCLIF = 0;
}
void CCP2FlagReset(void)
{
    PIR2bits.CCP2IF = 0;
}
void SSPInterruptEnable(void)
{
    PIE1bits.SSPIE = 1;
}
void SSPInterruptDisable(void)
{
    PIE1bits.SSPIE = 0;
}
