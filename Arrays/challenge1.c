#include<stdio.h>

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;
    int i = 0;

    printf("the values in the array are:\n");
    while(i < 5)
    {
        printf("%d\n", array[i]);
        i++;
    }
}