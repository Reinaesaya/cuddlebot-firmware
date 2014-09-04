/*

Cuddlemaster - Copyright (C) 2014 Michael Phan-Ba

Property of SPIN Research Group
ICICS/CS Building X508-2366 Main Mall
Vancouver, B.C. V6T 1Z4 Canada
(604) 822 8169 - maclean@cs.ubc.ca

*/

#ifndef _ADDRESSCFG_H_
#define _ADDRESSCFG_H_

#include <stdint.h>

// Board bitset addresses.
#define ADDRESS_NONE				0x00
#define ADDRESS_RIBS				0x01
#define ADDRESS_HEAD_PITCH			0x02
#define ADDRESS_HEAD_YAW			0x04
#define ADDRESS_SPINE				0x08
#define ADDRESS_PURR				0x10

// Board address type.
typedef uint8_t cm_address_t;

// Board address.
extern cm_address_t cm_address;

// Read the board address.
void cm_address_init(void);

#endif /* _ADDRESSCFG_H_ */
