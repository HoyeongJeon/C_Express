#include <stdio.h>
#define SIZE 10

int array_equal(int a[], int b[], int size);
int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int b[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    if(array_equal(a, b, SIZE) == 0)
        printf("2개의 배열은 다름\n");
    else
        printf("2개의 배열은 같음\n");
    return 0;
}

int array_equal(int a[], int b[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        if(a[i] != b[i])
            return 0;
    }
    return 1;
}
