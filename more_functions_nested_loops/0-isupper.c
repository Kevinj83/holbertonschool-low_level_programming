#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: always 0 
 */

int _isupper(int c)
{
	char ch = 'c';

	if(isupper(ch))
	{
		printf("%c is Uppercase letter",ch);
	}
	else
	{
		printf("%c is not Uppercase Letter",ch);
	}
	return 0;
}
