#include<stdio.h>
int main()
{
	int nbr;
	printf("Enter an Integer: ");
	scanf("%d", &nbr);
	if(nbr%2==0)
	printf("%d is an even integer.", nbr);
	else
	printf("%d is an odd integer.", nbr);
}
