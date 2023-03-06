/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers
 * @a: the matrix
 * @size: the size of the matrix
 * Return: Nothing
 * Description: prints the sum of the two diagonals of a square matrix of
 */
void print_diagsums(int *a, int size)
{
    int i, j, sum1, sum2;
    sum1 = 0;
    sum2 = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j)
            {
                sum1 += a[i][j];
            }
            if (i + j == size - 1)
            {
                sum2 += a[i][j];
            }
        }
    }
    printf("%d, %d \n", sum1, sum2);
}
