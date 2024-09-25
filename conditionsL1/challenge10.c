#include <stdio.h>

void    printer(int days, int months, int years)
{
    char* name_of_months[] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"
    };

printf("%02d-%s-%d\n", days, name_of_months[months - 1], years);
}

int main (void)
{
int days;
int months;
int years;
printf("enter a date formated as jj/mm/aaaa: \n");
scanf("%d/%d/%d", &days, &months, &years);

printer(days, months, years);
return 0;
}
