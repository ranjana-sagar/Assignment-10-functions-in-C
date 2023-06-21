#include<stdio.h>
#include<conio.h>
int fact(int);
int NPR(int,int);
int main()
{
    int n,r;
    long long int nPr;
    printf("Enter the value of n(total number of objects):_");
    scanf("%d",&n);
    printf("Enter the value of r(choosing numbeer of objetcs):");
    scanf("%d",&r);
    nPr=NPR(n,r);
    printf("number of permutation is %d",nPr);
    return 0;
}
int fact(int n)
{
    int fact=1;
    for(;n;n--)
        fact*=n;
    return fact;    
}
int NPR(int n,int r)
{
    return fact(n)/(fact(n-r));      
}