
#include <stdio.h>

int main()
{
    
        char name[50];
        int age;
        float height;
        char gen; 
        
   printf("Enter your name\n");
   scanf("%s",&name);
   printf("Enter your age in years\n");
   scanf("%d",&age);
   printf("Enter your height in feet\n");
   scanf("%f",&height);
   printf("Enter your gender \n");
   scanf(" %c",&gen);
   
       printf("_______________________________________________________________________________\n");
       printf("S.No.\t\tName\t\tAge in years\t\tHeight\t\tGender\n");
       printf(" 1.  \t\t  %s \t\t%d\t\t\t%f\t%c\n",name,age,height,gen);
       printf("_______________________________________________________________________________\n");
       
 }