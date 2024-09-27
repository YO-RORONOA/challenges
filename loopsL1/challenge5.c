#include<stdio.h>

int main(void)
{
    int num;
    int pow;
    int i;
    int result;
    i = 1;
    result = 1;

    printf("let's calculate n to the power of b\n");
    printf("enter the number n: ");
    scanf("%d", &num);
    printf("\nenter the power b: ");
    scanf("%d", &pow);

    while(i <= pow)
    {
        result *= num;
        i++;
    }
    printf("%d^%d = %d", num, pow, result);
}