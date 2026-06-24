#include<stdio.h>
int main()
{
   int age=18;
   int person;
   printf("Enter Your Age;");
   scanf("%d",&person);
   if(age<=person)
   {
       printf("Congratulation......You are Eligible For Voting");
   }
   else
   {
       printf("Sorry You Are Not Eligible For Voting");
   }
   return 0;
}