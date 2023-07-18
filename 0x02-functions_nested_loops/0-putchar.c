#include <stdio.h>

/**
 * main - entry point 
 *
 * Discription: print _putcher using putcher prototype
 *
 * return: Always 0 (Success)
 *
*/

int main(void)
{
	char str[] = "putcher";
	int ch;
	
	for (ch = 0; ch < 8; ch++ )
		_putcher(str[ch]);
	_putcher('\n');

	return (0);
}

