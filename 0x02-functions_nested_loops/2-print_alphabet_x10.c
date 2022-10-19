#include "main.h"
/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char sa;

	for (ten = 0; ten <= 9; ten++)
	{
		for (sa = 'a'; sa <= 'z'; sa++)
			_putchar(sa);
		_putchar('\n');
	}
}
