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

	i = 48;
	while  (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
