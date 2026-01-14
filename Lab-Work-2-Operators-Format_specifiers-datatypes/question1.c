
#include <stdio.h>

int main()
{
    int a =8,b=29;
    float c =15.35,d= 7.254;
    
    float avg,prod;
    
    //part i
    avg=(a+b+c+d)/4.0;
    printf("%f",avg);
    
    //part ii
    printf("\n %d",(int)avg);
    
    //part iii
    prod=c*d;
    printf("\n %0.2f",prod);
    
    //part iv
    printf("\n %d",b/a);
    printf("\n %d",b%a);
    
    //part v
    
    printf("\n %o", (unsigned int)prod);

    //part vi
    printf("\n %x", (unsigned int)prod);

    
    return 0;
}