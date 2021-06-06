#include <stdio.h>
int vector_add(double x[], double y[]);
int vector_mul(double x[], double y[]);

int main(void)
{
    double x[3] = {1,2,3};
    double y[3] = {4,5,6};
    
    vector_add(x, y);
    vector_mul(x, y);
    return 0;
}


int vector_add(double x[], double y[])
{
    int i;
    double sum[3];
    for(i = 0; i < 3; i++)
    {
        sum[i] = x[i] + y[i];
    }
    printf("벡터의 합 = [%f %f %f]\n", sum[0], sum[1], sum[2]);
    return 0;
}

int vector_mul(double x[], double y[])
{
    int i;
    double sum = 0;
    for(i = 0; i < 3; i++)
    {
        sum += x[i] * y[i];
    }
    printf("벡터의 내적 = %f\n", sum);
    return 0;
}
