
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float kilo;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilo);
    printf("\nDistance in meter      : %.2f", 1000.0 * kilo);
    printf("\nDistance in feet       : %.2f", 3280.84 * kilo);
    printf("\nDistance in centimeter : %.2f", 100000.0 * kilo);
    printf("\nDistance in inch       : %.2f", 39370.08 * kilo);

return 0;

}