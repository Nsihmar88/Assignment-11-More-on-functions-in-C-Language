// Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>

int prime(int);
int main()
{
    int n1, P_Number;

    printf("Enter a number: ");
    scanf("%d", &n1);
    P_Number=prime(n1);
    printf("\nNext prime number is %d to entered number %d.",P_Number,n1);    
    return 0;
}
int prime(int x)
{
    int i,j,result; 
    
    for (i=x+1; ; i++)
    {        
        for (j=2; j<i; j++)
            if (i%j==0)
                break;
        if (j==i)
        {
            result=i;
            break;
        }            
    }    
    return(result);
}