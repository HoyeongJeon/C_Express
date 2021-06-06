#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 10

int main(void)
{
    double list[SIZE];
    int i, j;
    double sum, m, v;
    sum = 0;
    m = 0;
    //srand((unsigned)time(NULL));
    for(i = 0; i < SIZE; i++)
    {
        //list[i] = rand(); //list에 난수 넣기
        printf("데이터를 입력하세요: ");
        scanf("%d", &j);
        list[i] = j;
        sum += list[i]; // list총합
    }
    m = sum/SIZE; // 평균
    
    for(i = 0; i < SIZE; i++) // 표준편차 구하기
    {
        sum += (list[i] - m)*(list[i] - m);
    }
    printf("\n");
    v = sqrt(sum / SIZE); // 표준편차
    
    printf("평균값 %f\n", m);
    printf("표준편차의 값은 %f\n",v);
    
    return 0;
}
