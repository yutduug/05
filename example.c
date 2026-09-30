#include <stdio.h>

int main(void)
{
    int answer = 59;
    int guess;
    int count = 0;

    do
    {
        printf("숫자를 입력하시오: ");
        scanf("%d", &guess);

        count++;

        if (guess > answer)
            printf("정답보다 큽니다.\n");
        else if (guess < answer)
            printf("정답보다 작습니다.\n");
        else
            printf("정답입니다!\n");

    } while (guess != answer);

    printf("시도 횟수: %d\n", count);

    return 0;
}