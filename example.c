#include <stdio.h>

int main(void)
{
    int c;
    int num = 0;

    printf("문자열을 입력하시오: ");

    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
            num++;
    }

    printf("숫자의 개수: %d\n", num);

    return 0;
}