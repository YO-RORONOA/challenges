#include <stdio.h>

int main(void)
{
    int size;
    int MIN;

    printf("enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; 

    printf("enter the elements of the array: \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
         if (i == 0)
        {
        MIN = arr[i];
        }
        else if( MIN > arr[i])
        MIN = arr[i];
    }
    printf("the smallest number of the array is %d", MIN);
}