//Write a function to print first N terms of Fibonacci series (TSRN)

#include<stdio.h>

void Fibonnaci(int);
int main()
{
    int num;

    printf("\nEnter a number to display the N terms of Fibonnaci series: ");
    scanf("%d",&num);
    Fibonnaci(num);
    return(0);
}
void Fibonnaci(int num)
{
    int i, fibonnaci,a=-1,b=1;

    for (i = 1; i <= num; i++)
    {
        fibonnaci=a+b;
        printf(" %d",fibonnaci);
        a=b;
        b=fibonnaci;
    }
}