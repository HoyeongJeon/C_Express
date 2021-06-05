#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(void)
{
    int list[10] = {0};
    int i;
    int max = INT_MIN;
    int min = INT_MAX;
    srand((unsigned)time(NULL));
    for(i = 0; i < 10; i++)
    {
        list[i] = rand();
        if(list[i] > max)
            max = list[i];
        if(list[i] < min)
            min = list[i];
    }
    printf("최댓값은 %d\n최솟값은 %d\n", max, min);
    return 0;
}
