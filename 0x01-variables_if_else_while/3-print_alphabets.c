#include <stdio.h>

/**
* main -Prints alphabets
*
* Return: Always(Success)
*/

int main(void)
{
char n;

for (n = 'a'; n <= 'z'; n++)
{
	putchar(n);
}

for (n = 'A'; n <= 'Z'; n++)
{
	putchar(n);
}

	putchar('\n');	
	return (0);
}
