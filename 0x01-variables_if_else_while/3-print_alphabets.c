#include <stdio.h>

/**
 * main-program entry point.
 * Return:0 no error, non zero if error.
 **/

int main(void)
{
	char i;
	char f;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar (i);
	}
	for (f = 'A'; f <= 'Z'; f++)
	{
		putchar (f);
	}
	putchar ('\n');
	return (0);
}
