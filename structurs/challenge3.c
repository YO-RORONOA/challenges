#include <stdio.h>

 struct infos_student
    {
        char lastname[50];
        char surname[50];
        int notes[4];
    };

int main()
{
    int i;
    int counter;

    i = 0;
    counter = 1;
   struct infos_student youness = {"ouahmane", "youness", };
   youness.notes[0] = 19;
   youness.notes[1] = 20;
   youness.notes[2] = 18;
   youness.notes[3] = 19;
   /*
    you can also do it like this:
        struct infos_student youness = {"ouahmane", "youness", {19, 20, 18, 19}};

    */
   printf("lastname: %s\n", youness.lastname);
   printf("surname: %s\n", youness.surname);

   while(i < 4)
   {
    printf("note %d: %d\n", counter, youness.notes[i]);
    counter++;
    i++;
   }
}