#include <stdio.h>

int main()
{
    char name[50];
    char branch[50];
    char university[100];
    char address[150];

    // input
    printf("Enter your Name:\n");
    gets(name);

    printf("Enter your Branch name:\n");
    gets(branch);

    printf("Enter your University name:\n");
    gets(university);

    printf("Enter your University address:\n");
    gets(address);

    // output
    puts("\n--- Student Details ---\n");
    puts(name);
    puts(branch);
    puts(university);
    puts(address);

    return 0;
}
