#include <stdio.h>

int main(void)
{
    float note;

    printf(" what is the grade you obtainted by students?\n");
    printf("enter your grade: ");
    scanf("%f", &note);

    if(note < 10)
    {
        printf(" YOU FAILED\n");
    }
    else if( 9 < note && note < 13 )
    {
        printf("your grade is: passable\n");
    }
    else if(11 < note && note < 15)
    {
        printf("your grade is: farily good\n");
    }
    else if(13 < note && note < 17)
    {
        printf("your grade is good\n");
    }
    else if(17 <= note && note <= 20)
    {
        printf("your grade is very good");
    }
    else
    printf("error encountered");
}