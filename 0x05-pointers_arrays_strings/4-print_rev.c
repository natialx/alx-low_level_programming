#include "main.h"

/**
 * print_rev - print string in reverse,
 *
 * @str: in reverse 
 */

void print_rev(char *str)
{
int i = 0;
int total_caracters = 0;
int c = ;

while (str[i] != 0)
{
i++;
}
total_caracters = i - 1;

for (c = 0; c <= total_caracters; c++)
{
_putchar(str[total_caracters - c]);
}

_putchar('\n');
}
