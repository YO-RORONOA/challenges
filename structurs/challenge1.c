#include<stdio.h>

struct rectangle
{
    float length;
    float width;
};

float aire(struct rectangle rect)
{
    return (rect.length * rect.width);
}
int main()
{   
    struct rectangle rect;
    float result;   


    printf("enter the length of the rectangle: \n");
    scanf("%f", &rect.length);
     printf("enter the widtu of the rectangle: \n");
    scanf("%f", &rect.width);

    result = aire(rect);
    printf("the area of the rectangle is: %.2f", result);
}