#include "main.h"

int printChar(va_list argu)
{
        char c = va_arg(argu, int);
        if (!c)
                return (-1);
        write(1, &c, 1);
        return (1);
}
int printString(va_list argu)
{
        char *st = va_arg(argu, char *);
        int len;
        if (!st)
                return (-1);
        len = strlen(st);
        write(1, st, len);
        return (len);
}
int printPercentage()
{
        char c = '%';
        write(1, &c, 1);
        return (1);
}