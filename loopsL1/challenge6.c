#include <stdio.h>

int main(void)
{
    int num;
    int counter;
    int even;

    counter = 0;
    even = 0;

    printf("enter an integer n to get the first n odd numbers: ");
    scanf("%d", &num);

    while(counter < num)
    {
        printf("%d", even);
        if(counter < num - 1)
        {
            printf(", ");
        }
        even += 2;
        counter++;
    }
}