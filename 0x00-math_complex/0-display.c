#include "holberton.h"

/**
 * display_complex_number - displays the complex numbers
 * @c: struct
 * Return: 0
 */

void display_complex_number(complex c)
{
	if (c.im != 0 && c.re != 0)
	{
		if (c.im == 1 || c.im == -1)
		{
			if (c.im < 0)
				printf("%.0f - i\n", c.re);
			else
				printf("%.0f + i\n", c.re);
		}
		else
		{
			if (c.im < 0)
				printf("%.0f - %.0fi\n", c.re, -c.im);
			else
				printf("%.0f + %.0fi\n", c.re, c.im);
		}
	}
	else if (c.im == 0 && c.re != 0)
		printf("%.0f\n", c.re);

	else if (c.im != 0 && c.re == 0)
	{
		if (c.im == 1 || c.im == -1)
		{
			if (c.im < 0)
				printf("-i\n");
			else
				printf("i\n");
		}
		else
			printf("%.0fi\n", c.im);
	}

	if (c.im == 0 && c.re == 0)
		printf("%d\n", 0);
}
