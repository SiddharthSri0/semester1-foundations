
#include <stdio.h>

int main()
{
    int power;
    printf("Enter total power consumed in watt\n");
    scanf("%d",&power);
    int MCU;
    MCU=(30*power)/1000;
    //based on the assumption the computer is used for 12 hours 
    int bill = MCU*8*12;
    printf("Your final bill is %d",bill);
    return 0;
}