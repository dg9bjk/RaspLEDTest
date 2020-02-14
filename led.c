#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define LED0	0
#define LED1	1
#define LED2	2
#define LED3	3
#define LED4	4
#define LED5	5
#define LED6	6
#define LED7	7
#define LED8	8
#define LED9	9
#define LED10	10
#define LED11	11
#define LED12	12
#define LED13	13
#define LED14	14
#define LED15	15
#define LED16	16

int main()
{
    unsigned char count1 = 0;
    unsigned char count2 = 0;
    unsigned char count3 = 0;
    
    wiringPiSetup();
    
    pinMode(LED0,OUTPUT);
    digitalWrite(LED0,1);
    pinMode(LED1,OUTPUT);
    digitalWrite(LED1,1);
    pinMode(LED2,OUTPUT);
    digitalWrite(LED2,1);
    pinMode(LED3,OUTPUT);
    digitalWrite(LED3,1);
    pinMode(LED4,OUTPUT);
    digitalWrite(LED4,1);
    pinMode(LED5,OUTPUT);
    digitalWrite(LED5,1);
    pinMode(LED6,OUTPUT);
    digitalWrite(LED6,1);
    pinMode(LED7,OUTPUT);
    digitalWrite(LED7,1);
    pinMode(LED8,OUTPUT);
    digitalWrite(LED8,1);
    pinMode(LED9,OUTPUT);
    digitalWrite(LED9,1);
    pinMode(LED10,OUTPUT);
    digitalWrite(LED10,1);
    pinMode(LED11,OUTPUT);
    digitalWrite(LED11,1);
    pinMode(LED12,OUTPUT);
    digitalWrite(LED12,1);
    pinMode(LED13,OUTPUT);
    digitalWrite(LED13,1);
    pinMode(LED14,OUTPUT);
    digitalWrite(LED14,1);
    pinMode(LED15,OUTPUT);
    digitalWrite(LED15,1);
    pinMode(LED16,OUTPUT);
    digitalWrite(LED16,1);

    sleep(2);
        
    while(1)
    {

        digitalWrite(LED0, (count1&0x01));
        digitalWrite(LED1, (count1&0x02));
        digitalWrite(LED2, (count1&0x04));
        digitalWrite(LED3, (count1&0x08));
        digitalWrite(LED4, (count1&0x10));
        digitalWrite(LED5, (count1&0x20));
        digitalWrite(LED6, (count1&0x40));
        digitalWrite(LED7, (count1&0x80));

        digitalWrite(LED10,(count2&0x01));
        digitalWrite(LED11,(count2&0x02));
        digitalWrite(LED12,(count2&0x04));
        digitalWrite(LED13,(count2&0x08));
        digitalWrite(LED14,(count2&0x10));
        digitalWrite(LED15,(count2&0x20));
        digitalWrite(LED16,(count2&0x40));

        digitalWrite(LED8, (count3&0x01));
        digitalWrite(LED9, (count3&0x02));

        count1++;
        count2++;
        count3++;

        usleep(100000);
    }
}
