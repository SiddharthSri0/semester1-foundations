#include<stdio.h>
int main() {
	/*
	diamond for n=7 that is one section
	
            *
           ***
          *****
         *******
        *********
       ***********
      *************
     ***************
    *****************
   *******************
  *********************
 ***********************
*************************
 ***********************
  *********************
   *******************
    *****************
     ***************
      *************
       ***********
        *********
         *******
          *****
           ***
            *

	 */
    int n;
    printf("Enter the number of rows for one segment \n");
    scanf("%d",&n);
    int h=2*n-1;
    printf("\n");
    
    //upper triangle

	for (int i = 1; i <= h; i++) {
	    for(int j =1;j<=h-i;j++)
	        printf(" ");
	    
		
		for(int j=1;j<=2*i-1;j++)
		    printf("*");
		
		printf("\n");
	}

     //lower triangle
     
     for(int i = h - 1; i >= 1; i--) {

        for(int j = 1; j <= h - i; j++)
            printf(" ");

        for(int j = 1; j <= 2*i - 1; j++)
            printf("*");

        printf("\n");
    }

}