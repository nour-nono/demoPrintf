#include "main.h"

void printChar(va_list argu)
{
        char c = va_arg(argu, int);
        handleBuffer(1, &c);
}
void printString(va_list argu)
{
        char *st = va_arg(argu, char *);
        int len = 1;
        if (!st)
                st = "(null)";
        len = strlen(st);
        handleBuffer(len, st);
}
void printPercentage()
{
        char c = '%';
        handleBuffer(1, &c);
}
