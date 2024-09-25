#include <stdio.h>

int main (void)
{
    int n;
    int fact;
    int start;
    fact = 1;
    printf("what is the factorial of the number? \n");
    printf("enter your number: ");

    if(scanf("%d", &n) != 1)
    {
        printf("error encountered. please enter a number");
        return 1;
    }
    if(n <= 0)
    {
        printf("please enter a positive number");
        return 1;
    }
    
    start = n;
    while(n >= 1)
    {
        fact *= n;
        n--;
    }
    printf("%d! = %d ", start, fact);
}