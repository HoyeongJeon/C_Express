#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    int i;
    int list[SIZE] = {0};
    int max = 0;
    int freq = 0;
    srand((unsigned)time(NULL));
    for(i = 0; i < 100; i++)
    {
        ++list[rand()%10];
    }
    for(i = 0; i < 10; i++)
    {
        if(list[i] > max)
        {
            max = list[i];
            freq = i;
        }
    }
    printf("가장 많이 나온수 = %d\n", freq);
    
    return 0;
}
