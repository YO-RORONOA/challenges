#include <stdio.h>

#define MAX_BOOKS 100 
int bookcount = 0; // counter to increment for arrays(number of books)

    char bookname[MAX_BOOKS][50];   //variables in global scope to 
    char bookauthor[MAX_BOOKS][50]; //be used by each function
    float bookprice[MAX_BOOKS];
    int bookstock[MAX_BOOKS];

void    addbook()
{
    if(bookcount < MAX_BOOKS) // check if there is enough stock
    {
    printf("\nnote: use _ instead of space");
    printf("\ntype the name of the book you want to add: ");
        scanf("%s", &bookname[bookcount]);
    
    printf("\ntype the author's name of the book: ");
        scanf("%s", &bookauthor[bookcount]);
    
    printf("\ntype the price of the book you want to add: ");
        scanf("%f", &bookprice[bookcount]);
    
    printf("\ntype the quantity availabe of the book you want to add: ");
        scanf("%d", &bookstock[bookcount]);
        bookcount++;
    }
    else
    printf("full stock, cant add more.");
}

void    displaybooks()
{
    int i;

    i= 0;
     if (bookcount == 0) // case if the stock is empty
    {
        printf("\nno books in stock");
        return;
    }
    while(i < bookcount)
    {
        printf("\nbook name: %s\n", bookname[i]);
        printf("book author: %s\n", bookauthor[i]);
        printf("book bookprice: %.2f\n", bookprice[i]);
        printf("book bookstock: %d\n", bookstock[i]);
        i++;
    }
}

int strcmp(const char name[], const char stock[]) //function to find books to update in the array
{
    int i;

    i = 0;
    while(name[i] != '\0' && stock[i] != '\0') // null charchter remember ''
    {
        if(name[i] != stock[i])
        {
            return 1;
        }
        i++;
    }
     return (name[i] == stock[i]) ? 0 : 1; // Return 0 if equal, -1 if not
}

char* strcpy(char dest[], char src[])
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

void    updatestock()
{
    char name[50];
    int newq;
    int i;
    int found; // counter to check if book is found (for the if statment)

    i = 0;
    found = 0;
    printf("\nenter the name of the book you want to update: ");
    scanf("%s", name);

    printf("\nenter the new quantity: ");
    scanf("%d", &newq);

    while(i < bookcount)
    {
        if(strcmp(name, bookname[i]) == 0) // if match found update the stock
        {
            bookstock[i] = newq;
            printf("Quantity updated successfully.\n");
            found++;
            return; // Exit the loop
        }
        i++;
    }
    if (found == 0) // if match not found