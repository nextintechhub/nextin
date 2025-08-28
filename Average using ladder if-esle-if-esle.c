#include<stdio.h>
int main()
{
	float Maths, FIT, C, Digital_logic, English;
	float avg;
	
	printf("Enter Marks of Maths subject: ");
	scanf("%f", &Maths);
	
	printf("Enter Marks of Foundation of IT subject: ");
	scanf("%f", &FIT);
	
	printf("Enter Marks of C Programming subject: ");
	scanf("%f", &C);
	
	printf("Enter Marks of Digital LOgic subject: ");
	scanf("%f", &Digital_logic);
	
	printf("Enter Marks of English subject: ");
	scanf("%f", &English);
	
	avg=(Maths+FIT+C+Digital_logic+English)/5;
	
	if(avg>=90)
	{
		printf("The grade is A+");
	}
	else if(avg>=80)
	{
		printf("The grade is A");
	}
	else if(avg>=70)
	{
		printf("The grade is B+");
	}
	else if(avg>=60)
	{
		printf("The grade is B");
	}
	else if(avg>=50)
	{
		printf("The grade is C+");
	}
	else if(avg>=40)
	{
		printf("The grade is C");
	}
	else if(avg>=30)
	{
		printf("The grade is D+");
	}
	else
	{
		printf("You are fail");
	}
}
