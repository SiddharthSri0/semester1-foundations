#include <stdio.h>

int main()
{
    int row, column, image;
    printf("Enter the number of pixels in a row then in a column (monitor resolution):\n");
    scanf("%d %d", &row, &column);

    printf("Enter the number of images you want to transfer:\n");
    scanf("%d", &image);

    double bits, transfer;
    bits = (row * column * 24) / (1024.0 * 1024.0); 
     // time in seconds
    transfer = (image * bits) / 512.0;               

    printf("Transfer time is %.2f seconds\n", transfer);

    return 0;
}
