   #include<stdio.h>
   #include<conio.h>
   void main()
    {
      float cp,sp;
      printf("\nEnter Cost Price and Selling Price: ");
      scanf("%f%f", &cp, &sp);
      if(sp>cp) {
       printf("Rs. %.2f is Profit",sp-cp);
    }
      else {
       printf("Rs. %.2f is Loss",cp-sp);
    }
    }
