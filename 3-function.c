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
                write(1, &c, 1);
                i--;
                j++;
        }
        return (j);
        x = num;
        for (i = 0; x > 10; i++)
                x /= 10;
        while (i >= 0)
        {
                x = num / pow(10, i);
                c = (x % 10) + '0';
                handleBuffer(1, &c);
                i--;
                j++;
        }
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
        int j = convertUnsignedToHex(n, '0');

        return (j);
        if ((num / 8) > 0)
                j =  convertUnsignedToOct(num / 8);
        c = (num % 8) + '0';
        handleBuffer(1, &c);
        j++;
        return (j);
}

/**
 * convertUnsignedToHex- the function that convert a number to hexadecimal
 *
 * @num : the number to be converted
 * @flagChar : it determines if 'X' capital or small 'x'
 *
 * Return: the hexadecimal value of the number and his lenght
 */

int convertUnsignedToHex(unsigned int num, char flagChar)
{
        int j = 0, x;
        char c;
        int y = (flagChar != 48) ? 16 : 8;

        if ((num / y) > 0)
                j =  convertUnsignedToHex((num / y), flagChar);
        x = num % y;
        c = (x < 10) ? (x + 48) : (x + flagChar);
        write(1, &c, 1);
        j++;
        return (j);
}

/**
 * printHex - function that print the small hexadecimal number
 * hexadecimal
 *
 * @argu : the number number in decimal
 *
 * Return: the hexadecimal value of the number in capital and his lenght
 */

int printHex(va_list argu)
{
        unsigned int n = va_arg(argu, unsigned int);
        int j = convertUnsignedToHex(n, 'a' - 10);

        return (j);
}

/**
 * printHEX - function that print the capital hexadecimal number
 *
 * @argu : the number number in decimal
 *
 * Return: the hexadecimal value of the number in capital and his lenght
 */

int printHEX(va_list argu)
{
        unsigned int n = va_arg(argu, unsigned int);
        int j = convertUnsignedToHex(n, 'A' - 10);

        return (j);
}
