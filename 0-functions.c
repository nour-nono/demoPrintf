#include "main.h"

int printChar(va_list argu)
{
        char c = va_arg(argu, int);
        handleBuffer(1, &c);
        return (1);
}
int printString(va_list argu)
{
        char *st = va_arg(argu, char *);
        int len = 1;
        if (!st)
                st = "(null)";
        len = strlen(st);
        handleBuffer(len, st);
        return (len);
}
int printPercentage()
{
        char c = '%';
        handleBuffer(1, &c);
        return (1);
}
