// Chapter 10_01

#include <stdio.h>

int main(void)
{
    int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("%d월은 %d일까지 있습니다.\n", 8, days[7]);
    printf("%d월은 %d일까지 있습니다.\n", 9, days[8]);
    printf("%d월은 %d일까지 있습니다.\n", 10, days[9]);
    printf("%d월은 %d일까지 있습니다.\n", 11, days[10]);
    printf("%d월은 %d일까지 있습니다.\n", 12, days[11]);
    return 0;
}
