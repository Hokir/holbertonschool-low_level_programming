#include <stdio.h>

/*
 * Author : Hokir
 * main prints the alphabet
 */ int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
