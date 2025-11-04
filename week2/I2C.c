#include <stdio.h>
#include "I2C.h"
#include "RM.h"

void Start(void)
{
    SDA_High();
    SCL_High();
    //延时
    SDA_Low();
    //延时
    SCL_Low();
}

void Stop(void)
{
    SDA_Low();
    SCL_High();
    //延时
    SDA_High();
    //延时
}

void SendByte(unsigned char byte)
{
    for(int i=0; i<8; i++)
    {
        if(byte & 0x80) 
            SDA_High();
        else
            SDA_Low();
        //延时
        SCL_High();
        //延时
        SCL_Low();
        byte <<= 1; 
    }
}

unsigned char ReceiveAck(unsigned char ack)
{
    unsigned char ackbit;
    SDA_High(); 
    SCL_High();
    //延时
    ackbit = SDA_Read();
    SCL_Low();  
    return ackbit;
}

void SendData(unsigned char data)
{
    Start();
    SendByte(data); 
    ReceiveAck(0x66); 
    Stop();
}



