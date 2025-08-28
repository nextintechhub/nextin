#include<stdio.h>
void div();
void main()
{
    div();
}
void div()
{
    int a,b,c;
    printf("Enter the value for A: ");
    scanf("%d",&a);
    printf("Enter the value for B: ");
    scanf("%d",&b);
    c=a/b;
    printf("\nThe Quotient of A and B is %d",c);
}