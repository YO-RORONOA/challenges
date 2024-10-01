#include <stdio.h>

int sum(int one, int two)
{
    return(one + two);
}

int main()
{
    int first;
    int second;
    int result;
    printf("find out the sum of two numbers\n");
    printf("enter the first number: ");
    scanf("%d", &first);
    printf("\nenter the second nubmer: ");
    scanf("%d", &second);
    result = sum(first, second);
    printf("the sum is %d", result);
}