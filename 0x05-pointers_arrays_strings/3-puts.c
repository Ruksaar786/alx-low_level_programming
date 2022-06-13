#include "main.h"
/**
 *_puts - prints a string
 *@str: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void _puts(char *str)
{
char *c;
int r;

c = str;

for (r = 0; c[r]; r++)
{
_putchar (c[r]);
}
_putchar('\n');
}
