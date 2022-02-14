#include "main.h"

/*
 * void swaps the values of *a and *b
 */ void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
