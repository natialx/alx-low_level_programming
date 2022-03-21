#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: number1
 *
 * @b: number2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
