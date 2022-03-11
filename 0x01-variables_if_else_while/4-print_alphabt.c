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
	if (n != 'e' && n != 'q')
	{
		putchar(n);
	}
}

putchar('\n');

return (0);
}
