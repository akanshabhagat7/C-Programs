// Program to display 5 times Hello on screen
// Accept number from user and print that numner of times on screen

// Demonstration of ITERATION

#include<stdio.h>

void Display(int iNo)      // Defination
{
	int iCnt=0;
	
	//      1         2        3
	for(iCnt = 0; iCnt<iNo; iCnt++)
	{
	    printf("Hello\n");  //4
	}	
}

int main()
{
	int iValue =0;
	
   printf("Enter the number\n");
   scanf("%d",&iValue); 
   
   Display(iValue);    // Function call

    return 0;  
}