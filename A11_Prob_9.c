// Write a program in C to find the square of any number using the function. TNRN

#include<stdio.h>

void Square();
int main()
{
    Square();
    return(0);
}
void Square()
{
    int num,sq;
    printf("\nEnter a number to display the Square: ");
    scanf("%d",&num);
    sq=num*num;
    printf("\nSquare of %d is: %d",num,sq);
}