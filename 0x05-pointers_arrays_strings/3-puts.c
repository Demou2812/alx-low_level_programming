#include "main.h"
/**
 * _puts - print a string, followed by a new line, to stdout
 * @str: string to be printed
 *
 * Return: nothing on success
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
		putchar('\n');
}
