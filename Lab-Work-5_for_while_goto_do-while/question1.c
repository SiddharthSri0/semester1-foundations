#include <stdio.h>

int main()
{
   printf("Enter a number to find its factorial \n");
   int n;
   scanf("%d", &n);

   int fact = 1;

   if(n == 1 || n == 0){
       goto fact_label;
   }

   for(int i = 1; i <= n; i++){
       fact = fact * i;
   }

   goto fact1;

fact_label:
    printf("factorial is 1");
    return 0;

fact1:
    printf("factorial is %d", fact);

    return 0;
}
