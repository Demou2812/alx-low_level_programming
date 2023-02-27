#include "main.h"
/**
 * _puts - print a string, followed by a new line, to stdout
 * @str: string to print
 *
 * Return: nothing on success
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
		_putchar('\n');
}
