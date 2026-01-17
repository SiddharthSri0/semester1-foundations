#include<stdio.h>
int main(){
/*

 * * * 
* * * *
 * * * 
* * * *
 * * * 
* * * *
 * * * 
 
 */

    
   printf("enter the number of rows ");
   int n;
   scanf("%d",&n);
   int x=2*n-1;
   for(int i =1;i<=x;i++){
       for(int j=1;j<=x;j++){
          if(i%2==0 && j%2==0)
            printf(" ");
          
          else if(i%2==1 && j%2==1)
            printf(" ");
            
          else
            printf("*");
       }
       printf("\n");
   }
}