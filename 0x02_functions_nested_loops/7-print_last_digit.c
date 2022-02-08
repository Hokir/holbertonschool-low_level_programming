#include "main.h"

/*
 * main prints the last digit of a number
 */ int print_last_digit(int)
{
int lastdig = n % 10;
if (lastdig < 0)
lastdig *= -1;
_putchar('0' + lastdig);
return (lastdig);
}
