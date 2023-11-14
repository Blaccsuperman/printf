#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
	_printf("LEO\n");
	_printf("%c\n", 'V');
	_printf("%s\n", "STRING");
	_printf("%%\n");
	_printf("%d\n", 42);
	_printf("%i\n", 42);

	return (0);
}

