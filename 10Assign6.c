#include<stdio.h>
#include<conio.h>
double facto(int);
int main()
{
    double f;
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    f=facto(n);
    printf("factorial is %lf",f);
    return 0;
}
double facto(int n)
{
    double fact=1;
    if(n==0)
       return 1;
    else
        for(;n;n--)
           fact*=n;
        return fact;             
}