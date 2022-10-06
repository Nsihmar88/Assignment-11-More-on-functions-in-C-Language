// Write a function to print first N prime numbers (TSRN)

#include<stdio.h>

void prime(int);
int main()
{
    int n1;

    printf("Enter a number: ");
    scanf("%d", &n1);
    prime(n1);    
    return 0;
}
void prime(int x)
{
    int i = 3, count, c;

    if(x>=1)
    {
        printf("\n\nFirst %d prime numbers are :  ", x);
        printf("2 ");
    }
    // iteration for n prime numbers
    // i is the number to be checked in each iteration starting from 3
    for(count = 2; count <= x; i++)  
    {
        // iteration to check c is prime or not
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }
        if(c == i)  // c is prime
        {
            printf("%d ", i);
            count++;    // increment the count of prime numbers
        }
    }   
}