#include <stdio.h>
int main(){
    //n must be an odd number for the program to give desired result
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if((j==(n+1)/2) ||(i==4)){
                printf("+");
            }
            else if((j==1 || j==n)||(i==1 || i==n)){
                printf("*");
            }
            else
                printf(" ");
            
        }
        printf("\n");
    }
}