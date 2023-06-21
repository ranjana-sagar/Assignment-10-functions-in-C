#include<stdio.h>
#include<conio.h>
int NCR(int,int);
int fact(int);
int main()
{
    int n,r;
    long long int nCr;
    printf("Enter the value of n(Total no of objects in the set):_");
    scanf("%d",&n);
    printf("Enter the value of r(Number of choosing objects from the set):_");
    scanf("%d",&r);
    nCr=NCR(n,r);
    printf("Numers of combination is %d",nCr);
    return 0;
}
int fact(int n)
{
    int fact=1;
    for(;n;n--)
        fact*=n;
    return fact;    
}
int NCR(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}