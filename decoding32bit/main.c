/*
 * main.c
 *
 *  Created on: Oct 21, 2020
 *      Author: Mohammad Sami Alam
 */



#include <stdint.h>
#include <stdio.h>

struct Packet
{
	uint8_t crc;
	uint8_t status;
	uint16_t payload;
	uint8_t bat;
	uint8_t sensor;
	uint8_t longAddr;
	uint8_t shortAddr;
	uint8_t addrMode;
};

int main(void)
{
	uint32_t packetValue;
	printf("Enter the 32 bit packetValue :");
	scanf("%X", &packetValue);

	struct Packet packet; //creating structure variable
	packet.crc = (uint8_t) (packetValue &0x3);
	packet.status = (uint8_t) ((packetValue >> 2) &0x1);
	packet.payload = (uint16_t) ((packetValue >> 3)&0xFFF);
	packet.bat = (uint8_t) ((packetValue >> 15)&0x7);
	packet.sensor = (uint8_t) ((packetValue >> 18)&0x7);
	packet.longAddr = (uint8_t) ((packetValue >> 21)&0xFF);
	packet.shortAddr = (uint8_t) ((packetValue >> 29)&0x3);
	packet.addrMode = (uint8_t) ((packetValue >> 31)&0x1);

	printf("crc :%X\n", packet.crc);
	printf("status :%X\n", packet.status);
	printf("payload :%X\n", packet.payload);
	printf("bat :%X\n", packet.bat);
	printf("sensor :%X\n", packet.sensor);
	printf("longAddr :%X\n", packet.longAddr);
	printf("shortAddr :%X\n", packet.shortAddr);
	printf("addrMode :%X\n", packet.addrMode);

	while(getchar() != '\n');
	getchar();

}
