#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

#define buff_size 1024

/**
 * struct placeHolders - just struct
 *
 * @sp: a char
 * @funcptr: pointer to func
 *
*/

typedef struct placeHolders placeHolders;
struct placeHolders
{
	char sp;
	void (*funcPtr)(va_list);
};

placeHolders specifiers[] = {
	{'c', printChar},
	{'s', printString},
	{'d', printInteger},
	{'i', printInteger},
	{'b', printBinary},
	{'u', printUnsigned},
	{'o', printOctal},
	{'x', printHex},
	{'X', printHEX},
	{'S', printVisibleString},
};

/*0 task funcs*/
void printPercentage(void);
void printChar(va_list argu);
void printString(va_list argu);
/*1st task function*/
void printInteger(va_list argu);
/*2nd task function*/
void printBinary(va_list argu);
/*3rd task function*/
void printUnsigned(va_list argu);
void printOctal(va_list argu);
void printHex(va_list argu);
void printHEX(va_list argu);
/*4th task function*/

/*5th task function*/
void printVisibleString(va_list argu);

#endif
