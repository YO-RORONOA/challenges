#include <stdio.h>

int main(void)
{
    int size;
    int sum;
    int i;

    sum = 0;
    printf("enter the number of elements you want: ");
    scanf("%d", &size);

    int arr[size];
    printf("enter the elements of the the array: \n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];   
    }
    printf("the sum of the elements in the array is %d", sum);
}