   #include<stdio.h>
   #include<conio.h>
   void main()
    {
      int n;
      printf("\nEnter any number: ");
      scanf("%d",&n);
      if(n%5==0 && n%11!=0)
       printf("%d is exactly Divisible by 5 but not by 11",n);
      else
       printf("condition dissatisfied");
    }

