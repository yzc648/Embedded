#ifndef __I2C_H
#define __I2C_H

void Start(void);
void Stop(void);
void SendByte(unsigned char byte);
unsigned char ReceiveAck(unsigned char ack);
void SendData(unsigned char data);

#endif
