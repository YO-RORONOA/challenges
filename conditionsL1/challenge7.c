#include <stdio.h>

int main(void)
{
    char    L;
    printf("is the letter uppercase or not?\n");
    printf("choose your letter: ");
    scanf("%c", &L);

    if(L >= 65 && L <= 90)
    {
        printf("the letter is uppercase\n");
    }
    else
    printf("the letter is not an uppercase");
    return 0;

}