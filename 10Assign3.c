#include<stdio.h>
#include<conio.h>
int iseven(int);
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    i=iseven(n);
    printf(i==1?"even number":"odd number");
    return 0;
}
int iseven(int n)
{
    if(n%2)
        return 0;
    else
        return 1;    
} 