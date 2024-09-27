#include <stdio.h>

int main(void)
{
    int num;
    int digit;
    int result;
    result = 0;
    printf("reverse printing your numbers\n");
    printf("enter your number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;
        num /= 10;
        result = result * 10 + digit;
    }
    printf("The reversed number is: %d\n", result);
}