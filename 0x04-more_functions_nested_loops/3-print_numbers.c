#include "main.h"

/*
 * void prints the numbers, from 0 to 9
 */ void print_numbers(void)
{
char num1;
for (num1 = '0'; num1 <= '9'; num1++)
{
_putchar(num1);
}
_putchar('\n');
}
