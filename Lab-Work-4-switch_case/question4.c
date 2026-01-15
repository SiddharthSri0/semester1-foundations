
#include <stdio.h>

int main()
{
    int userid,pass;
    printf("Enter userid\n");
    scanf("%d",&userid);
    
    
    switch(userid){
        
        case 3214:
            printf("Enter password");
            scanf("%d",&pass);
            
            switch(pass)
            {
                case 6580:
                printf("Welcome Dear Dev");
                break;
            }
            break;
        default:
            printf("Please enter correct user id and password");
            break;
    }
    
    return 0;
}