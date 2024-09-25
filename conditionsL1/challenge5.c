#include <stdio.h>

int main(void)
{
int years;
int choice;
const int   days = 365;
const int   hours = 24;
const int   minutes = 60;
const int   seconds = 60;


printf("enter the number of years: ");
scanf("%d", &years);

//menu
printf("\n choose the conversion: \n");
printf("1. months\n");
printf("2. days\n");
printf("3. hours\n");
printf("4. minutes\n");
printf("5. seconds\n");
printf("choose your option carfully o_o, from 1 trough 5: \n");
scanf("%d", &choice);

switch(choice)
{
    case 1:
    printf("%d years = %d months", years, years * 12);
    break;
    case 2:
    printf("%d years = %d days", years, years * 365);
    break;
    case 3:
    printf("%d years = %d hours", years, years * days * hours);
    break;
    case 4:
    printf("%d years = %d minutes", years, years * days * hours * minutes);
    break;
    case 5:
    printf("%d years = %d seconds", years, years * days * hours * minutes * seconds);
    break;
    default:
    printf("WARNING!!!!!!!!!!!!\n CHOOSE  A REAL NUMBER");
    break;
    return 1;
}

}