#ifndef MAIN_H_
#define MAIN_H_
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>

#define buff_size 1024
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
        {'b', printBinary},
};
/*first task funcs*/
int printChar(va_list argu);
int printString(va_list argu);
int printPercentage();

#endif
