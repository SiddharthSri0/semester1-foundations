#include <stdio.h>
#include <math.h>

int main()
{
    int choice,quant;
    int bill;
    printf("\n--- juet cafeteria menu ---");
    printf("\n1. burger  - 85");
    printf("\n2. pizza   - 125");
    printf("\n3. sandwich- 60");
    printf("\n4. lassi   - 40");
    printf("\n5. exit");
    
    printf("\nenter your choice: ");
    scanf("%d", &choice);
    
    printf("\nenter the quatity you want ");
    scanf("%d",&quant);
    
    switch(choice) {
    
        case 1:
            printf("you selected burger\n");
            bill=quant*85;
            break;
    
        case 2:
            printf("you selected pizza\n");
            bill=quant*125;
            break;
    
        case 3:
            printf("you selected sandwich\n");
            bill=quant*60;
            break;
    
        case 4:
            printf("you selected lassi\n");
            bill=quant*60;
            break;
    
        case 5:
            printf("thank you\n");
            bill=quant*40;
            break;
    
        default:
            printf("invalid choice\n");
            break;
    }
    printf("Your final cost is %d",bill);
    

}
