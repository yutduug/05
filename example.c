#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;
    int result;

    printf("계산식을 입력하시오: ");
    scanf("%d %c %d", &num1, &op, &num2);

    if (op == '+')
        result = num1 + num2;
    else if (op == '-')
        result = num1 - num2;
    else if (op == '*')
        result = num1 * num2;
    else if (op == '/')
        result = num1 / num2;
    else
    {
        printf("잘못된 연산자입니다.\n");
        return 0;
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}