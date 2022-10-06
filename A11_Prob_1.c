// Write a function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>

int LCM(int,int);
int main()
{
    int n1, n2, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);    
    lcm=LCM(n1,n2);
    printf("\nThe LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    return 0;
}
int LCM(int n1,int n2)
{
    int i, gcd, lcm;
    for (i=1; i<=n1 && i<= n2; ++i)
    {
        if (n1%i==0 && n2%i==0)
            gcd=i;
    }
    return (((n1*n2)/gcd));

}