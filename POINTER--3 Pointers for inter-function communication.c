#include<stdio.h>

void main(){
	
	int number=50;
	int *p;
	int **p2;
	
	p=&number;
	p2=&p;
	
printf("Address of number variable is %p\n",&number);
printf("Address of P is %p\n",p);
printf("value of p is %d\n",*p);
printf("address of p is %p\n", p2);   
printf("address of p2 is %p\n",*p2); 
printf("value of *p2 is %d\n",*p2);	

}