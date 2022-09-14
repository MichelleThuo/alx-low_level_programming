#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return:  0 if successfully compiled, non-zero otherwise
 */
int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i <= 7)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
