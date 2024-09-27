#include <stdio.h>

int main(void)
{
    int size;
    int factor;
    int result;

    printf("enter the size of the array: ");
    scanf("%d", &size);
    printf("enter the factor of multiplication: ");
    scanf("%d", &factor);

    int arr[size]; 

    printf("enter the elements of the array: \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        result = arr[i] * factor;
        printf("%d * %d = %d\n", arr[i], factor, result); 
    }
}