#include <stdio.h>
#define SIZE 10

void array_copy(int a[], int b[], int size);

int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int b[SIZE] = {0};
    array_copy(a, b, SIZE);
    for(i = 0; i < SIZE; i++)
        printf("%d ", a[i]);
    printf("\n");
    for(i = 0; i < SIZE; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}

void array_copy(int a[], int b[], int size)
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        b[i] = a[i];
    }
}
