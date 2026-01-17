#include <stdio.h>

int main() {
    //enter an odd integer for desired result
    
    int n;
    printf("Enter an odd number of rows: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Number of rows must be odd.\n");
        return 0;
    }

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        int row_num = i <= mid ? i : n - i + 1; 
        int spaces = mid - row_num;

       
        for (int s = 0; s < spaces; s++)
            printf(" ");

       
        for (int j = 0; j < row_num; j++)
            printf("%d", row_num + j);

        
        for (int j = row_num + row_num - 2; j >= row_num; j--)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}
