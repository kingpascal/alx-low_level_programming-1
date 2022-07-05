#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0(Success)
 */
int main (void)
{
	char *sh = "_putchar";
	while (*sh)
	{
		_putchar (*sh);
		sh++;
		putchar ('\n');
	}
	return 0;
}
