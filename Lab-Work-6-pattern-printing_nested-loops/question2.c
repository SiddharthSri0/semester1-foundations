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
            else if(i<=(n+1)/2)
            {
                if(j<(n+1)/2)
                    printf("*");
                if(j>(n+1)/2)
                    printf("1");
            }
            else if(i>(n+1)/2){
                if(j<(n+1)/2)
                    printf("a");
                if(j>(n+1)/2)
                    printf("Z");
                
            }
        }
        printf("\n");
    }
}