#include<stdio.h>
#include<conio.h>
void printn(int);
int main()
{
    int n;
    printf("Enter a numer:");
    scanf("%d",&n);
    printn(n);
    return 0;
}
void printn(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d",i);
}