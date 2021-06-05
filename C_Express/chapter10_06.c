#include <stdio.h>

int main(void)
{
    int i, j, sum;
    int list[3][5]= {{12, 56, 32, 16, 98},{99, 56, 34, 41, 3},{65, 3, 87, 78, 21}};
    for(i = 0; i < 3; i++)
    {
        sum = 0;
        for(j = 0; j < 5; j++)
        {
            sum += list[i][j];
        }
        printf("%d행의 합: %d\n",i, sum);
    }
    
    for(i = 0; i < 5; i++)
    {
        sum = 0;
        for(j = 0; j < 3; j++)
        {
            sum += list[j][i];
        }
        printf("%d열의 합: %d\n",j, sum);
    }
    return 0;
}
