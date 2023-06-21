#include<stdio.h>
#include<conio.h>
void primefactors(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    primefactors(n);
    return 0;
}
void primefactors(int n)
{
    int i;
    for(i=2;i<=n/2;)
        n%i==0?printf("%d,",i),n/=i:i++;
    printf("%d,%d",n,1);
}