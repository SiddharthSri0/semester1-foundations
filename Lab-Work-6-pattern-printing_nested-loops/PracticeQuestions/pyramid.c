#include<stdio.h>
int main(){
    /*
    pyramid 
    
      *
     ***
    *****
   *******
    
    */
    
    int n;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    int h =2*n-1;
    printf("\n");
    for(int i=1;i<=n;i++){
       for(int j=1;j<=h-i;j++){
        printf(" ");
       }
       for(int j=1;j<=2*i-1;j++){
        printf("*");
       }
    printf("\n");
    }
    
    
}