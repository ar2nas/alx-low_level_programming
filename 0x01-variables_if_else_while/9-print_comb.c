#include<stdio.h>

/**
 * main - e
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
			putchar ('0' + i);
		else
		{
			putchar ('0' + i);
			putchar (',');
			putchar (' ');
		}
	}
	return (0);
}
