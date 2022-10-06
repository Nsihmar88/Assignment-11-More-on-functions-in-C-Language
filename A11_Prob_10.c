//Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.TNRN

#include<stdio.h>

void Sum_of_Series ();
int main()
{
    Sum_of_Series ();
    return 0;
}
void Sum_of_Series ()
{
    int fact=1, j, num, sum=0;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    
    for ( j = 1; j<=num; j++)
    {
        fact=fact*j;
        sum=sum+fact/j;
    }
    printf("\nThe sum of the series is: %d.",sum);    
}
