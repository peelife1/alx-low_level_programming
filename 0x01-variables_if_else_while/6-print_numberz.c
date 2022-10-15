#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 no error, non zero if error
 */
int main(void)
{
	char la;

	for (la = '0'; la <= '9'; la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}
