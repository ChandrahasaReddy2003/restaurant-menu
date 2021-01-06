#include<stdio.h>

int  printMenu()



{

system("clear");

int response;

fprintf(stdout," *********************************************\n");

fprintf(stdout,"              Restaurant       \n ");

fprintf(stdout,"*********************************************\n\n");

fprintf(stdout,"Make your selection from the menu below:\n\n");

fprintf(stdout,"     1. pizza                        RS 239\n");

fprintf(stdout,"     2. Burger                       RS 129\n");

fprintf(stdout,"     3. Pasta                        RS 179\n");

fprintf(stdout,"     4. French Fries                 RS 99\n");

fprintf(stdout,"     5. Sand wich                    Rs 149\n");



fprintf(stdout,"Type q or Q when you are finished with your selections.\n\n");

fprintf(stdout," *********************************************\n\n");

fprintf(stdout,"Select 1, 2, 3, 4, 5 ---> \n\n");

fscanf(stdin, "%d", &response);

return response;

}



int main()



{

  int s;

  float p, x;

  int response;

  response = printMenu();
 printf("How many orders of item number %d would you like?\n", response);

  scanf("%d", &s);



  switch (response)

{

   case 1:

   printf("You have ordered %d order(s) of the Pizza\n", s);

   p=s*239;

   printf("your total is RS%.2f\n\n", p);

   break;



   case 2:

   printf("You have ordered %d order(s) of the Burger\n", s);

   p=s*129;

   printf("Your total is RS %.2f\n\n", p);

   break;
 case 3:
 printf("You have ordered %d order(s) of the Pasta\n", s);

   p=s*179;

   printf("Your total is RS %.2f\n\n", p);

   break;



   case 4:

   printf("You have ordered %d order(s) of the French Fries\n", s);

   p=s*99;

   printf("Your total is RS %.2f\n\n", p);
   break;


   case 5:

   printf("You have ordered %d order(s) Sandwich\n", s);

   p=s*149;

   printf("your total is RS %.2f\n\n", p);

   break;

}

x=p;

printf("Please pay $ %.2f\n\n",x);

printf("Thank you for eating !\n\n");

}
