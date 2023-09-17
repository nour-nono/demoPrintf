#include "main.h"

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