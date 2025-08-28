             #include<stdio.h>
             #include<conio.h>
             void main()
               {
                 float s,ca;
                 printf("\nEnter sales amount: ");
               scanf("%f",&s);
               if(s>=0 && s<=1000)
                 ca=0.05*s;
             else if(s>1000 && s<=2000)
               ca=0.1*s;
              else
               ca=0.12*s;
               printf("Your Commission is Rs. %.2f",ca);                                                                            
            }

