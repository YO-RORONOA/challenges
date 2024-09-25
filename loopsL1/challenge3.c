#include <stdio.h>

int main(void)
{
    int n;
    int sum;
    
    sum = 0;
    printf(" the sum of the first n natural numbers\n");
    printf("enter your number: ");
    
    if(scanf("%d", &n) != 1)
    {
        printf("error encountered! please enter a number");
        return 1;
    }
    
    if(n < 0)
    {
        printf("please enter a positive number");
        return 1;
    }

    while(n >= 1)
    {
        sum += n;
        n--;
    }
    printf("result = %d", sum);
}