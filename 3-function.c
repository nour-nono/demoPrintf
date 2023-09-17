#include "main.h"

/**
 * printUnsigned - the function that print the unsigned value
 *
 * @argu : the number to be printed
 *
 * Return: the unsigned number
*/

int printUnsigned(va_list argu)
{
        unsigned int num = va_arg(argu, unsigned int), x;
        int i, j = 0;
        char c;

        x = num;
        for (i = 0; x > 10; i++)
                x /= 10;
        while (i >= 0)
        {
                x = num / _pow(10, i);
                c = (x % 10) + '0';
                handleBuffer(1, &c);
                i--;
                j++;
        }
        return (j);
}
/**
 * convertUnsignedToOct - the function that convert a number to octal base
 *
 * @num : the number to be printed
 *
 * Return: the lenght of the number
*/

int convertUnsignedToOct(unsigned int num)
{
        int x, j = 0;
        char c;

        if ((num / 8) > 0)
                j =  convertUnsignedToOct(num / 8);
        c = (num % 8) + '0';
        handleBuffer(1, &c);
        j++;
        return (j);
}

/**
 * printOctal - the function that prints the octal value
 *
 * @argu : the number to be printed
 *
 * Return: the octal value of the number, and his lenght
*/

int printOctal(va_list argu)
{
        unsigned int n = va_arg(argu, unsigned int);
        int j = convertUnsignedToOct(n);

        return (j);
}
