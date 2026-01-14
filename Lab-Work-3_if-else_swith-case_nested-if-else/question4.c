#include <stdio.h>

int main() {
   printf("enter your marks to know your grade\n");
   int marks;
   scanf("%d",&marks);
   if(marks>=80)
   printf("your grade is A+ excellent");
   else if(marks>=72)
   printf("your grade is A very good");
   else if(marks>=64)
   printf("your grade is B+ good");
   else if(marks>=56)
   printf("your grade is B average");
   else if(marks>=48)
   printf("your grade is C below average");
   else if(marks>=35)
   printf("your grade is P pass");
   else if(marks<35)
   printf("your grade is F fail");

    return 0;
}
