#include <stdio.h>
int scalar_mult(int a[][3], int scalar);

int main(void)
{
    int i, j;
    int a[][3] = {1,2,3,4,5,6,7,8,9};
    scalar_mult(a, 2);
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int scalar_mult(int a[][3], int scalar)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            a[i][j] = a[i][j] * scalar;
        }
    }
    return 0;
}
