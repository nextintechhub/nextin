#include<stdio.h>
void rem();
void main()
{
    rem();
}
void rem()
{
    int a,b,c;
    printf("Enter the value for A: ");
    scanf("%d",&a);
    printf("Enter the value for B: ");
    scanf("%d",&b);
    c=a%b;
    printf("\nThe Remainder of A and B is %d",c);
}