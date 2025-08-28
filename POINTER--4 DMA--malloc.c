#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n, i, *p, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    p =(int *)malloc(n*sizeof(int));

    for(i=0; i<n; i++){
    scanf("%d",p+i);
    sum +=*(p + i);
    }
   
    printf("sum = %d\n",sum);
    float avg=(float)sum/n;

	printf("average = %.2f",avg);
	free(p);
}