#include<stdio.h>
#include<string.h>

struct mydetails
{
    char    lastname[50];
    char    surname[50];
    int     age;
};

int main()
{
    struct mydetails youness;
    strcpy(youness.lastname, "ouahmane");
    strcpy(youness.surname, "youness");
    youness.age = 24;
    

    printf("my last name: %s\n", youness.lastname);
    printf("my surnamename: %s\n", youness.surname);
    printf("my age is: %d\n", youness.age);
}