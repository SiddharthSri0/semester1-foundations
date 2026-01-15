#include <stdio.h>
#include <math.h>

int main()
{
    int choice;

    do {
        printf("\n1. calculate bmi");
        printf("\n2. exit");
        printf("\nenter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1: {
                float mass, height;
                printf("enter your mass in kilograms and height in meters\n");
                scanf("%f %f", &mass, &height);

                int BMI = ceil((mass) / (height * height));

                switch(BMI) {
                    case 1 ... 17:
                        printf("underweight");
                        break;

                    case 18 ... 25:
                        printf("normal weight");
                        break;

                    default:
                        printf("overweight");
                        break;
                }
                break;
            }

            case 2:
                printf("exiting");
                break;

            default:
                printf("invalid choice");
        }

    } while(choice != 2);

    return 0;
}
