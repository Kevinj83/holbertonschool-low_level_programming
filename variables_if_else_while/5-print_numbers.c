#include <stdio.h>

/**
 * main - prints all single-digit numbers from 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	putchar('\n');

	return (0);
}
