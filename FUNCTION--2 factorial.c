#include<stdio.h>
void fact();
void main()
{
    fact();
}
void fact()
{
    int a,b=1;
    printf("Enter the value for A: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        b=b*i;
    }
    printf("\nThe factorial of A is %d",b);
}