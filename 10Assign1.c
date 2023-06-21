#include<stdio.h>
#include<conio.h>
float carea(float);
int main()
{
    float a,r;
    printf("Enter radius:");
    scanf("%f",&r);
    a=carea(r);
    printf("area of circle is %0.3f",a);
    getch();
    return 0;
}

float carea(float r)
{
    return 3.141592653589793238*r*r;
}