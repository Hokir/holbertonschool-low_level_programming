#include "main.h"

/*
 * draws a straight line using the character _
 */ void print_line(int n)
{
int len;
if (n > 0)
{
for (len = 0; len < n; len++)
_putchar('_');
}
_putchar('\n');
}
