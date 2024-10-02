#include <stdio.h>

int main()
{
    int size;
    int temp;
    printf("enter the size of the table you want to sort: ");
    scanf("%d", &size);
    int arr[size];
    printf("enter values you want to sort: ");
    for(int i = 0; i < size; i++)
    {
        printf("\nvalue %d: ", i +1);
        scanf("%d", &arr[i]);
    }
    printf("\nthe values before being sorted are as follow: ");

    for(int i = 0; i < size; i++)
    {
        printf("value %d = %d\n", i + 1, arr[i]);
    }
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    printf("\nthe values after being sorted are as follow: \n");

    for(int i = 0; i < size; i++)
    {
        printf("value %d = %d\n", i + 1, arr[i]);
    }
}