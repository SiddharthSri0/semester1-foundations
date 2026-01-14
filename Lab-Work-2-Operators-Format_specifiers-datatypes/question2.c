
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    //part i
    int a =2 , b=3, c=5;
    float answer;
    answer=2*a*(log10((4.0*a*a)/b))+abs(b*b-c*c)-5*sqrt(c)+cos(30 * M_PI / 180);
    printf("%f",answer);
    
    
    //part ii
    int x;
    x=(a&&(!b))&&(a||c)||(a&&b&&c)||((!b)&&c);
    printf("\n%d",x);
    
    //part iii
    x=(a&(~b))&(a|c)|(a&b&c)|((~b)&c);
    printf("\n%d",x);
    return 0;
}