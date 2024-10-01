#include <stdio.h>

int main()
{
    int n;
    int temp = 0;
    
    printf("type the how many numbers you want to sort: ");
    scanf("%d", &n);
    int arr[n];
    printf("\ntype a table of numbers to be sorted in an ascending order: ");
    for(int i = 0; i < n; i++)
    {
        printf("\nenter numer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j= 0; j < n - 1 - i; j++)
        {
        if(arr[j] > arr[j + 1])
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
        }
    }
    for(int i = 0; i < n; i++)
    {
    printf("%d\n", arr[i]);
    }
}