#include <stdio.h>
int main()
{ 
   float salary;
   printf("Please enter your salary");
   printf("  $______\b\b\b\b\b\b");
   scanf("%f",&salary);
   printf("\n\n\t$%.2fa month is $%.2f a year.",salary,salary*12.0);
   printf("\rgreat!!\n");
   return 0;
}