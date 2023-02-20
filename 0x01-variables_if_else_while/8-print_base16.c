#include<stdio.h>

/**
 * main - e
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
		putchar ('0' + i);
	for (j = 'a' ; j <= 'f' ; j++)
		putchar (j);
	putchar ('\n');
	return (0);
}
