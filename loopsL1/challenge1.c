#include <stdio.h>

int main(void) 
{
    int num;
    int n = 1;

    printf("Write a number to get its multiplication table:\n");
    printf("Your number is: ");

    if (scanf("%d", &num) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    while (n <= 10) {
        printf("%d * %d = %d\n", num, n, num * n);
        n++;
    }

    return 0;
}