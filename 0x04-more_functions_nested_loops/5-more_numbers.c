#include "main.h"

/*
 * prints numbers from 0 to 14, ten times
 */ void more_numbers(void)
{
int num1, count;
count = 0;
while (count < 10)
{
for (num1 = 0; num1 <= 14; num1++)
{
if (num1 > 9)
{
_putchar(num1 / 10 + '0');
}
_putchar(num1 % 10 + '0');
}
_putchar('\n');
count++;
}
}
