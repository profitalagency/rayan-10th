#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		int marks;
		char grade; //declearation
		marks=0,grade=' '; //initialize
		int i=1;
		while(i!=0)
		{
		
		//taking input fro the user
		printf("Please enter your marks: ");
		scanf("%d", &marks);
		
		//conditional statements
		
		if(marks>=80 && marks <=90 ){
			
			grade='A';
		}
		else if(marks>=70 && marks <= 80 )
		{
				grade='B';
		}
		else if(marks>=60 && marks <= 70 )
		{
				grade='C';
		}
		else if(marks>=50 && marks <= 60 )
		{
				grade='D';
		}
		else {
			printf("Sorry failed");
			grade='F';
		}
		if(grade!='F')
		printf("\ndo you want to do this again? ");
		scanf("%d",&i);
		
		

	}
	return 0;
}