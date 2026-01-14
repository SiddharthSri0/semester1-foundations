#include <stdio.h>

int main() {
   printf("Enter any character\n");
   char c;
   int x;
   scanf("%c",&c);
   x=(int)c;
   if(x>=65 && x<=90)
   printf("capital letter\n");
   else if(x>=97 && x<=122)
   printf("small letter\n");
   else 
   printf("special character");
    return 0;
}
