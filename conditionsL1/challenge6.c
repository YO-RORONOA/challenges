#include <stdio.h>

int main (void)
{
float numb;

printf("is the number positive, negative or a 0?\n");
printf("write the number you want to check: \n");
scanf("%f", &numb);

if(numb > 0)
{
    printf("the number is positive");
}
else if(numb < 0)
{
    printf("the number is negative");
}
else if( numb = 0)
{
printf("the number is 0");
return 0;
}
else
printf("error!!!! write another number");
} 