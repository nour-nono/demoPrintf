#include "main.h"

/**
 * printInteger - function that print integer if %d or %i found
 *
 * @argu : the number to be printed
 *
 * Return: how many digit in the number
*/

int printInteger(va_list argu)
{
	int num = va_arg(argu, int);
	int x, i, is_negative = 0, j = 0;
	char c;

	is_negative = (num < 0) ? ((num == INT_MIN) ? 2 : 1) : 0;
	x = (num < 0) ? ((num == INT_MIN) ? num -= 1 : num * -1) : num;
	num = x;
	for (i = 1; x > 10; i++)
		x /= 10;
	i--;
	x = num;
	if (is_negative == 2 || is_negative == 1)
		c = '-', write(1, &c, 1);
	while (i >= 0)
	{
		x = num / _pow(10, i);
		if (is_negative == 2 && i == 0)
		{
			c = (x % 10) + '1';
			j++;
		}
		else
			c = (x % 10) + '0';
		if (is_negative == 1 && i == 0)
			j++;
		write(1, &c, 1);
		i--;
		j++;
	}
	return (j);
}
