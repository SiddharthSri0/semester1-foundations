
#include <stdio.h>

int main()
{
    int num;
    char c;
    printf("Enter you character\n");
    scanf("%c",&c);
    num =(int)c;
    
    
    switch (num)
    {
        
        case 65 ... 90:
        printf("Your character is a uppercase letter ");
        break;
        
        case 97 ...122:
        printf("Your character is a lowercase letter");
        break;

        
        default:
        printf("Your character is a special character ");
        break;
        
    }
    
    
    return 0;
}