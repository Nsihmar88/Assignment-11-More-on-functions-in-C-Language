// Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>

void prime(int,int);
int main()
{
    int beg, end;

    printf("\nEnter the Begining Number: ");
    scanf("%d",&beg);
    printf("Enter the last Number: ");
    scanf("%d",&end);
    prime(beg,end);
    return 0;
}
void prime(int beg,int end)
{
    int i, j;
    printf(" \nPrime Numbers are: ");
    for (j=beg+1; j<=end-1; j++)
    {
        for (i=2; i<j; i++)
        {
            if (j%i==0)            
            break;
        }
        if (i==j)
            printf("%d ",j);
    }
}