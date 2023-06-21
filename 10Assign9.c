#include<stdio.h>
#include<conio.h>
int f1(int,int);
int main()
{
    int N,d;
    printf("Enter a number and enter a digit:");
    scanf("%d%d",&N,&d);
    printf(f1(N,d)==1?"yes digit in this no":"digit not in this number");
    return 0;
}
int f1(int N,int d)
{
    while(N)
    {
        if(d==N%10)
            return 1;
        N/=10;    
    }
    return 0;       
}