#include "customh.h"

/**
 *main - entry point to program
 *Return: 0
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
