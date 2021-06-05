#include <stdio.h>

int main(void)
{
    int i;
    int num;
    int list[10][3] = {0};
    for(i = 0; i < 10; i++)
    {
        list[i][0] = i;
        list[i][1] = i*i;
        list[i][2] = i*i*i;
    }
    
    printf("정수를 입력하세요:");
    scanf("%d",&num);
    
    for(i = 0; i < 10; i++)
    {
        if(list[i][2] == num)
        {
            printf("%d의 세제곱근은 %d\n",num, list[i][0]);
            break;
        }
    }
    return 0;
}
