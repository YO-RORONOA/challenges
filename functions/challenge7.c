#include <stdio.h>

int    length(char size[])
{
    int i;
    i = 0;
    while (size[i] != '\0' )
    {
        i++;
    }
    return (i);
}

void    revstring(char rev[])
{
    int len;

    len = length(rev);

    while(len > 0)
    {
        printf("the reversed string is: %s", rev[len]);
        len--;
    }
}

int main()
{
    char string[100];
    printf("enter the word you want to reverse\n");
    scanf("%s", string);
    revstring(string);

}