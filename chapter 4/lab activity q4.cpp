#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//question 4

//declearing function
void Input(int N);
void Message(int N);


int main(int argc, char *argv[]) {
	
	int n=0;
	
	//calling input funcs
	Input(n);
	
	//CALLIGN TH MESSAGE FUNCTIONN
	Message(n);
	
	return 0; 	
};

//CREATING THE FUNCTION

//input func
void Input(int N){
	printf("enter the number : ");
	scanf("%d", &N);
};

void Message(int N)
{
		if(N>0)
		printf("%d is a positve number", N);
		else if(N<0)
		printf("%d is a negitive number", N);
		else if(N==0)
		printf("%d is equal to zero", N);
}


