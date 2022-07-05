#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0(Success)
 */
int main(void)
{
	char l[] = {"_putchar"};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(l[i]);
	}
	_putchar('\n');

	return (0);
} 
