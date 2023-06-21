#include<stdio.h>
#include<conio.h>
float Si(float,int,short int);
int main()
{
    float si,p;
    int r,t;
    printf("Enter the principal ammount, rate of intreser and time:_");
    scanf("%f%d%d",&p,&r,&t); 
    si=Si(p,r,t);
    printf("Simple interest is %0.2f",si);
    return 0;
}
float Si(float p,int r,short int t)
{
    return (p*r*t)/100.0;
}