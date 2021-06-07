#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int *A, int size);

int main(void)
{
    int a[10] = {0};
    int i;
    int size = 10;
    array_fill(&a, size);
    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

void array_fill(int *A, int size)
{
    int i;
    srand((unsigned)time(NULL));
    for(i = 0; i < size; i++)
        A[i] = rand();
}
