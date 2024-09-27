#include <stdio.h>

int main(void)
{
    int size;
    int MAX;

    printf("enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; 

    printf("enter the elements of the array: \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
         if (i == 0)
        {
        MAX = arr[i];
        }
        else if( MAX < arr[i])
        MAX = arr[i];
    }
    printf("the biggest number of the array is %d", MAX);
}