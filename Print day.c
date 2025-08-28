

#include<stdio.h>
   #include<conio.h>
   void main()
    {
      int n;
      printf("\nEnter number between 1 to 7 ");
      scanf("%d",&n);

      switch(n)
       {
        case 1:
         printf("\nSUNDAY");
         break;
        case 2:
         printf("\nMONDAY");
         break;
        case 3:
         printf("\nTUESDAY");
         break;
         case 4:
         printf("\nWEDNESDAY");
         break;
         case 5:
         printf("\nTHURSDAY");
         break;
         case 6:
         printf("\nFRIDAY");
         break;
         case 7:
         printf("\nSATURDAY");
         break;

         default:
         printf("\n Invalid Choice");
       }

    }
