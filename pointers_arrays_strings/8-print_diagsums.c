#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: pointer to the first element of the matrix
* @size: size of the matrix
*
* Return: Nothing
*/
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;
/* Loop over the rows of the matrix */
for (i = 0; i < size; i++)
{
/* sum1 is for the main diagonal */
sum1 += *(a + i * size + i);
/* sum2 is for the secondary diagonal */
sum2 += *(a + i * size + (size - i - 1));
}
/* Print the results */
printf("%d, %d\n", sum1, sum2);
}
