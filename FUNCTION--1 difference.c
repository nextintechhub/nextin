#include<stdio.h>
void sub();
void main()
{
    sub();
}
void sub()
{
    int a,b,c;
    printf("Enter the value for A: ");
    scanf("%d",&a);
    printf("Enter the value for B: ");
    scanf("%d",&b);
    c=a-b;
    printf("\nThe Difference of A and B is %d",c);
}