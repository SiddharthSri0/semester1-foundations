#include <stdio.h>
int main(){
    //n must be an odd number for the program to give desired result
    int n;
    char c=97;
    int x;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter a number to show in the pattern");
    scanf("%d",&x);
    int copy=x;
    for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){

        if(j <= i)            
            printf("%c", c);
        else{
            printf("%d", x);
            x--;
        }
    }
    x=copy-i;
    printf("\n");
    c++;
}


}
