//Write a function to print PASCAL Triangle. (TSRN)

#include<stdio.h>

void PASCAL_Triangle (int);
int Combination(int, int);
int fact(int);
int main()
{   
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    PASCAL_Triangle(num);

    return 0;
}

void PASCAL_Triangle (int num)
{
    int n,r,k,z;
    for (n = 1; n <= num; n++)
    {
        k=1;
        z=0;
        for (r = 1; r <= 2*num-1; r++)
        {
            if(r>=num+1-n && r<=num-1+n && k)
            {           
                printf("%3d",Combination(n-1,z));
                k=0;
                z++;
            }
            else
            {
                printf("   ");
                k=1;
            }
        }
        printf("\n");
    }    
}

int Combination(int n, int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}

int fact(int num)
{
    int i,fact=1;
    
    for ( i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    return(fact);
}