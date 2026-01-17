#include<stdio.h>
int main(){
    /*
    right half pyramid
    
    *
    **
    ***
    ****
    
    */
    
    int n;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j)
            printf("*");
        }
        printf("\n");
    }
    
}