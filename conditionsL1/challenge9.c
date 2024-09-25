#include <stdio.h>

int main(void)
{
    char c;
    
    printf("is the character a leter or not?\n");
    printf("write your character: ");
    scanf("%c", &c);

    if(c >= 65 && c <= 90 || c >= 97 && c <= 122)
    {
    printf("%c is an alphabet", c);
        if(c >= 65 && c <= 90)
        {
        printf(" and it's an uppercase", c);
        }
        else
        printf(" and it's a lowercase", c);
    }
    else
    printf("%c is not an alphabet", c);
}