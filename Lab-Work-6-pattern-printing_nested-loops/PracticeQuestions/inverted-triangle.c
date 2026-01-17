#include <stdio.h>
/*
inverted triangle
    
   *******
    *****
     ***
      *
*/
int main() {
    
    int n;//height control variable
    printf("Enter number of rows:\n");
    scanf("%d", &n);

    int h = 2*n - 1;// width control variable

    
    for(int i = n; i >= 1; i--) {

        //spaces
        for(int j = 1; j <= h - i; j++)
            printf(" ");

        // stars
        for(int j = 1; j <= 2*i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
