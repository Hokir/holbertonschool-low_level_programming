#include "main.h"
#include <stdio.h>
/*
 *
 */ void puts2(char *str)
{
	int i, x;
i = 0;
x = 0;
	while (str[i++])
	{
		x++;
	}
for (i = 0; i < x; i += 2)
{
putchar(*(str + i));
}
putchar('\n');
}
