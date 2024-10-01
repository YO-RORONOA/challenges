#include <stdio.h>

int facto(int fact)
{
    int result;
    
    result = 1;
    while(fact >= 1)
    {
         result *= fact;
         fact--; 
    }
    return (result);
}

int main()
{
    int fact;
    int result;

    printf("find out the the factorial of a number\n");
    printf("enter the number: ");
    scanf("%d", &fact);
    result = facto(fact);
    printf("the factorial is %d", result);
}