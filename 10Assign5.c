#include<stdio.h>
#include<conio.h>
void printnodd(int);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printnodd(n);
    return 0;
}
void printnodd(int n)
{
    int i;
    for(i=1;i<=n*2-1;i+=2)
        printf("%d ",i); 
}