#ifndef MAIN_H_
#define MAIN_H_
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>

#define buff_size 1024

/**
 * _pow - function that return the power of a number
 *
 * @a : the base number
 * @b : the exponent number
 *
 * Return: the power of base number
*/

int _pow(int a, int b)
{
	int x = a;
	while (b > 1)
	{
		a *= x;
		b--;
	}
	return (a);
}

typedef struct placeHolders placeHolders;
struct placeHolders
{
    char sp;
    int (*funcPtr)(va_list);
};

placeHolders specifiers[] =
    {
        {'c', printChar},
        {'s', printString},
	{'d', printInteger},
	{'i', printInteger},
	{'u', printUnsigned},
	{'o', print0ctal},
	{'x', printHex},
	{'X', printHEX}
    };

/*first task funcs*/
int printChar(va_list argu);
int printString(va_list argu);
int printPercentage();
/*second task function*/
int printInteger(va_list argu);

#endif
