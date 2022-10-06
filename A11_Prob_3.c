// Write a function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>

int prime(int);
int main()
{
    int n1, P_Number;

    printf("Enter a number: ");
    scanf("%d", &n1);
    P_Number=prime(n1);

    if(P_Number==1)
        printf("\n%d is Prime number.",n1);
    else   
        printf("\n%d is not Prime number.",n1);
    
    return 0;
}
int prime(int x)
{
    int i,result; 
    
    for ( i = 2; i <= x-1; i++)
    {
        result=x%i;
        if(result==0)
        {
            result=0;
            break;
        }
        else   
            result=1;
    }
    
    return(result);
}