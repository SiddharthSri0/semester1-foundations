#include <stdio.h>

int main() {
    int amt, n100, n50, n10, remainder;
    printf("Enter amount: ");
    scanf("%d", &amt);

    n100 = amt / 100;
    remainder = amt % 100;

    n50 = remainder / 50;
    remainder = remainder % 50;

    n10 = remainder / 10;

    printf("100s: %d, 50s: %d, 10s: %d\n", n100, n50, n10);

    return 0;
}
