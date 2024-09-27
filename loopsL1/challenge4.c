#include <stdio.h>

int main(void)
{
    int num;
    int counter;
    int odd;

    counter = 0;
    odd = 1;

    printf("enter an integer n to get the first n odd numbers: ");
    scanf("%d", &num);

    while(counter < num)
    {
        printf("%d", odd);
        if(counter < num - 1)
        {
            printf(", ");
        }
        odd += 2;
        counter++;
    }
}