#include<stdio.h>
void add();
void main()
{
    add();
}
void add()
{
    int a,b,c;
    printf("Enter the value for A: ");
    scanf("%d",&a);
    printf("Enter the value for B: ");
    scanf("%d",&b);
    c=a+b;
    printf("\nThe sum of A and B is %d",c);
}