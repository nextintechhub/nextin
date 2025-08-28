#include<stdio.h>
void mul();
void main()
{
    mul();
}
void mul()
{
    int a,b,c;
    printf("Enter the value for A: ");
    scanf("%d",&a);
    printf("Enter the value for B: ");
    scanf("%d",&b);
    c=a*b;
    printf("\nThe product of A and B is %d",c);
}