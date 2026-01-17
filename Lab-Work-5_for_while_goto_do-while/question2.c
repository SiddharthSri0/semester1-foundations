#include <stdio.h>
#include <math.h>

int main()
{
    int num, copy, rem, sum = 0, digits = 0;

    printf("Enter a number\n");
    scanf("%d", &num);

    copy = num;

    while(copy > 0) {
        copy = copy / 10;
        digits++;
    }

    copy = num;

    while(copy > 0) {
        rem = copy % 10;
        sum = sum + pow(rem, digits);
        copy = copy / 10;
    }

    if(sum == num)
        printf("armstrong number");
    else
        printf("not an armstrong number");

    return 0;
}
