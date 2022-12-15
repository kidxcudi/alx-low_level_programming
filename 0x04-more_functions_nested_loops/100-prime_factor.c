#include <stdio.h>
/**
 * main - prints the biggest prime factor of a number.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int prim;

	prim = 3;
	while (prim < num / 2)
	{
		if ((num % prim) == 0)
		{
			if((prim % 3) == 2)
				printf(",%lu ", prim);
		}

		prim+=2;
	}

	putchar('\n');
	return (0);
}
