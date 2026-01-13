
#include <stdio.h>

int main()
{
   char name[50];
   int age;
   float height;
   char gen;
   
   //taking user input 
   printf("Enter your name\n");
   scanf("%s",&name);
   printf("Enter your age in years\n");
   scanf("%d",&age);
   printf("Enter your height in feet\n");
   scanf("%f",&height);
   printf("Enter your gender \n");
   scanf(" %c",&gen);
   
   //output
   printf("\n\nName\t %s ",name);
   printf("\nAge in years \t %d",age);
   printf("\nHeight in feet\t %f",height);
   printf("\nGender\t %c",gen);
   
}