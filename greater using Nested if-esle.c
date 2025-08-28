#include<stdio.h>
#include<conio.h>

int main()

{
	
	int a, b, c;
	 printf("Enter First numbers: " );
	 scanf("%d", &a);
	 printf("Enter Second numbers: " );
	 scanf("%d", &b);
	 printf("Enter Third numbers: " );
	 scanf("%d", &c);
	 
	 if(a>b && a>c)
	 
	 {
	 	printf("The greater of the greatest is %d\n",a );
	 }
	 
	 else if (b>c && b>a)
	 
	 	{
	 	printf("The greater of the greatest is %d\n",b);	
		}
		
      else
      
      {
      	printf("The greater of the greatest is %d\n",c);
	  }
}
