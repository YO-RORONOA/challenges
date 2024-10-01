#include <stdio.h>

int min(int one, int two)
{
    if(one > two)
    {
        return(two);
    }
    else
    return one;
}

int main()
{
    int first;
    int second;
    int minn;
    printf("find out the the smallest of two numbers\n");
    printf("enter the first number: ");
    scanf("%d", &first);
    printf("\nenter the second nubmer: ");
    scanf("%d", &second);
    minn = min(first, second);
    printf("the smallest number is %d", minn);
}