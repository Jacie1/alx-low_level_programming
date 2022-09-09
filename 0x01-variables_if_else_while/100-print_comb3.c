#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	j = 49;
	while  ((i < 57) && (j < 58))
	{
		putchar(i);
		putchar(j);
		if ((i == 56) && (j == 57))
		{
			putchar('\n');
			i++;
			j++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (j < 57)
			{
				j++;
			}
			else
			{
				i++;
				j = 1 + i;
			}
		}

	}

	return (0);
}
