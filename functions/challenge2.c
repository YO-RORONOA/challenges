#include <stdio.h>

int product(int one, int two)
{
    return(one * two);
}

int main()
{
    int first;
    int second;
    int result;
    printf("find out the product of two numbers\n");
    printf("enter the first number: ");
    scanf("%d", &first);
    printf("\nenter the second nubmer: ");
    scanf("%d", &second);
    result = product(first, second);
    printf("the product is %d", result);
}