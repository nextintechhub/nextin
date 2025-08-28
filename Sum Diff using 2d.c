#include<stdio.h>

void main()
{
	int a[2][3], b[3][2], c[2][2];
	int i, j, k;
	int sum=0, diff=0;
	
	printf("Enter the element of first matrix: \n");
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter the element of second matrix: \n");
		for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	//calculation of matrix
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			for(k=0; k<3; k++){
				c[i][j]+=a[i][k]*b[k][j];
				sum=a[i][j]+b[i][j];
				diff=a[i][j]-b[i][j];
			}
		}

	}
		printf("The calculation is: \n");
		printf("The result is: %d\t\n", c[i][j]);
		printf("The Sum is: %d\n", sum);
		printf("The Difference is: %d", diff);
	printf("\n");
}