#include "system.h"
#include <xc.h>

char Operator;
char Terminal;

char buffer = 2;
unsigned int ADC;
char A0 = 0;
char PWMTerminal = 4;
char ADCMSB,ADCLSB;

char vectorIn[3];
char vectorOut[2];

unsigned int PWM;
char PWMMSB,PWMLSB;

void setup(void)
{
    SerialBegin(9600);
    pinMode(1,OUTPUT);
}

void loop(void)
{
    if(SerialAvailable())
    {
        ADC = analogRead(1);
        ADCMSB = cocienteEntero(ADC,256);
        ADCLSB = residuo(ADC,256);
        vectorOut[0] = ADCMSB;
        vectorOut[1] = ADCLSB;
        for(int i=0;i<buffer;i++)
        {
            SerialWrite(vectorOut[i]);
        }
        delay(200);
        
//        for(int i=0;i<buffer;i++)
//        {
//            vectorIn[i] = SerialRead();
//        }
//        PWMLSB = vectorIn[1];
//        PWMMSB = vectorIn[0];
//        PWM = PWMMSB;
//        PWM = PWM << 8;
//        PWM += PWMLSB;
//        analogWrite(1,PWM);
//        ADC = analogRead(0);
//        ADCMSB = cocienteEntero(ADC,256);
//        ADCLSB = residuo(ADC,256);
//        vectorOut[0] = ADCMSB;
//        vectorOut[1] = ADCLSB;
//        for(int i=0;i<buffer;i++)
//        {
//            SerialWrite(vectorOut[i]);
//        }
//        delay(100);
    }
}

char residuo(unsigned int numerator, unsigned int denominator)
{
	unsigned int temp1 = numerator;
	while(temp1 > denominator)
	{
		temp1 -= denominator;
	}
	return temp1;
}

char cocienteEntero(unsigned int numerator, unsigned int denominator)
{
	unsigned int cont = 0;
	unsigned int temp1 = numerator;
	while (temp1 > denominator)
	{
		temp1 -= denominator;
		cont++;
	}
	return cont;
}