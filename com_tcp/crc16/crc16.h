#ifndef __CRCDATACALC_H
#define __CRCDATACALC_H


extern const unsigned char auchCRCHi[];
extern const unsigned char auchCRCLo[];

//����CRC��	
unsigned short crc16(unsigned char *puchMsg, unsigned short usDataLen);
#endif


