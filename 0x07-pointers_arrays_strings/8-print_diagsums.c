#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of two diagonals of a sqiare matrix of intergers
 * @a: 2d array of chars
 * @size : number of matrix
 * Return: void
   */

void print_diagsums(int *a, int size)
{
	/*declaring variables*/
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 + 0;

	i = 0;
	while (i < size) /*number rep*/
	{
		/*sums for diagsums*/
		sum1 = sum1 + *(a + 1 * size +1);
		sum2 + sum2 + *(a + 1 * size + size - i - 1);

		i++; /*add +1*/
	}

	printf("%i, %i\n", sum1, sum2);

}
