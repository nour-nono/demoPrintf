#include "main.h"

void convertCharToHex(char ch, char *st2)
{
    int ascii = 0, hex = 0;
    ascii = ch;
    hex = ascii % 16;
    if (hex < 10)
        st2[3] = '0' + hex;
    else
        st2[3] = 55 + hex;
    ascii /= 16, hex = ascii % 16;
    if (hex < 10)
        st2[2] = '0' + hex;
    else
        st2[2] = 55 + hex;
}
int printVisibleString(va_list argu)
{
    char *st = va_arg(argu, char *), st2[1024], target[5] = "\\x22";
    int len = 1, i = 0, j = 0;
    if (!st)
        st = "(null)";
    len = strlen(st);
    for (; i < len; ++i)
    {
        if ((st[i] > 0 && st[i] < 32) || (st[i] > 126))
        {
            convertCharToHex(st[i], target);
            strcat(st2, target);
            j += 4;
        }
        else
            st2[j] = st[i], ++j;
    }
    len = strlen(st2);
    handleBuffer(len, st2);
    return (len);
}