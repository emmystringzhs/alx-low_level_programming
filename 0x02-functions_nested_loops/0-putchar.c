#include "main.h"

/**
 * main -program that prints _putchar, followed by a new line
 *
 * return: 0 on success
 */
int main(void)
{
	char go[9] = "_putchar";
	int i;
	for (i = 0; i < 8; i = +1)

	{
		_putchar(go[i]);
	}
	_putchar('\n');
	return (0);
}
