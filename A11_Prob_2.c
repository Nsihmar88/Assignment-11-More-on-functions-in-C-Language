// Write a function to calculate HCF of two numbers. (TSRS)

#include<stdio.h>

int HCF(int,int);
int main()
{
    int n1, n2, hcf;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);    
    if(n1>n2)
        hcf=HCF(n1,n2);
    else   
        hcf=HCF(n2,n1);
    
    printf("\nThe HCF of two numbers %d and %d is %d.", n1, n2, hcf);
    return 0;
}
int HCF(int x,int y)
{
    int r=1; 
        while(r!=0) 
           { 
                r=x%y; 
                x=y; 
                y=r; 
           } 
    return(x);

}