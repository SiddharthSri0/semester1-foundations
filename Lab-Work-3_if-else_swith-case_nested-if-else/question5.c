#include <stdio.h>

int main() {
    int age;

    //using conditional operators 
    
    printf("enter your age: ");
    scanf("%d", &age);

    printf("eligibility:\n");
    printf("voting: %s\n", (age >= 18) ? "yes" : "no");
    printf("marriage: %s\n", (age >= 21) ? "yes" : "no");
    printf("contest Election: %s\n", (age >= 25) ? "yes" : "no");
    printf("president of India: %s\n", (age >= 35) ? "yes" : "no");

    /* 
    now using nested ifs
    
    int age;
printf("enter your age: ");
scanf("%d", &age);

if(age >= 18) {
    printf("voting: yes\n");
    if(age >= 21) {
        printf("marriage: yes\n");
        if(age >= 25) {
            printf("contest election: yes\n");
            if(age >= 35) {
                printf("president of india: yes\n");
            } else {
                printf("president of india: no\n");
            }
        } else {
            printf("contest election: no\n");
            printf("president of india: no\n");
        }
    } else {
        printf("marriage: no\n");
        printf("contest election: no\n");
        printf("president of india: no\n");
    }
} else {
    printf("voting: no\n");
    printf("marriage: no\n");
    printf("contest election: no\n");
    printf("president of india: no\n");
}



    */
    return 0;
}
