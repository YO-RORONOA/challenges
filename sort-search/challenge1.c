#include <stdio.h>

int main()
{
    int size;
    int temp;

    printf("enter the number of elements you want to sort: ");
    scanf("%d", &size);
    int arr[size];
    printf("enter the values you want to sort: \n");
    for(int i = 0; i < size;i++)
    {
        printf("value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("the values before sorting are as a follow: \n");
    for(int i = 0; i < size; i++)
    {
        printf("value %d = %d\n ", i + 1, arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
  printf("the values after sorting are as a follow: \n");
    for(int i = 0; i < size; i++)
    {
        printf("value %d = %d\n ", i + 1, arr[i]);
    }
}