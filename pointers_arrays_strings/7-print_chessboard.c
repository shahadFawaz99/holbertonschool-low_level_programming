#include "main.h"
#include <stdio.h>
/**
* print_chessboard - Prints the chessboard.
* @a: 2D array representing the chessboard.
*
* Return: Nothing.
*/
void print_chessboard(char (*a)[8])
{
int row, col;
for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
putchar(a[row][col]);
}
putchar('\n');
}
}
