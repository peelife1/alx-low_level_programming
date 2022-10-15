#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 no error, non zero if error
 */
int main(void)
{
	char neel;

	for (neel = '0'; neel <= '9'; neel++)
	{
		putchar(neel);
	}
	putchar('\n');
	return (0);
}
