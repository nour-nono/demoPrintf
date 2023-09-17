#include "main.h"

int printChar(va_list argu)
{
        char c = va_arg(argu, int);
        write(1, &c, 1);
        return (1);
}
int printString(va_list argu)
{
        char *st = va_arg(argu, char *);
        int len = 1;
        if (!st)
                st = "(null)";
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
int printBinary(va_list argu)
{
        unsigned int s = va_arg(argu, unsigned int);
        char ch[33] = {'0'};
        int i = 0;
        if (!s)
        {
                write(1, ch, 1);
                return (1);
        }
        while (s)
        {
                if (s % 2 == 0)
                        ch[i] = '0';
                else
                        ch[i] = '1';
                s /= 2;
                ++i;
        }
        ch[i] = '\0';
        write(1, ch, i);
        return (i);
}
