#include "main.h"

/**
 * printInteger - function that print integer if %d or %i found
 *
 * @argu : the number to be printed
 *
 * Return: Nothing
 */
int _pow(int a, int b)
{
	int c = a;

	if (b == 0)
	{
		a = 1;
		return (a);
	}
	while (--b)
		a *= c;
	return (a);
}
void printInteger(va_list argu)
{
	int num = va_arg(argu, int), x, i = 0, a = 0, is_negative = 0;
	char c;

	if (num == INT_MIN)
	{
		num = num - 1, is_negative = 1, c = '-';
		handleBuffer(1, &c);
	}
	if (num < 0)
	{
		num = -num, c = '-';
		handleBuffer(1, &c);
	}
	x = num;
	while (x >= 10)
		x /= 10, i++;
	while (i >= 0)
	{
		a = num / _pow(10, i);
		if (i == 0 && is_negative == 1)
			c = (a % 10) + '1';
		else
			c = (a % 10) + '0';
		handleBuffer(1, &c);
		i--;
	}
}
