#include <stdio.h>
int location(int tag[], int i);

int main(void)
{
    int i;
    int tag[10] = {1,4,2,3,6,5,8,9,7,10};
    
    printf("상품 번호를 입력하세요:");
    scanf("%d", &i);
    printf("상품 번호 %d의 위치는 %d입니다.\n", i, location(tag, i));
    return 0;
}

int location(int tag[], int i)
{
    int n;
    for(n = 0; n < 10; n++)
    {
        if(tag[n] == i)
        {
            return n+1;
        }
    }
    return -1;
}
