#include <stdio.h>

int main() {
   printf("Enter any year to know if its a leap year or not \n");
   int year;
   scanf("%d",&year);
   if(year%400==0||year%4==0&&!(year%100==0))
   printf("leap year\n");
   else
   printf("not a leap year");

    return 0;
}
