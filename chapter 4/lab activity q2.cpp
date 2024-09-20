#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//question 2
void Larger(int A, int B);

int main(int argc, char *argv[]) {
	
	int a,b;
	a=0,b=0;
	
	printf("Enter number 1: "); //output
	scanf("%d", &a); //input a 
	printf("Enter the number 2: "); //output
	scanf("%d", &b); //input b
	
	//calling the functioin made beneath
	Larger(a,b);
	
	
	
	return 0;	
};
void Larger(int A, int B){
	
	if(A>B)
		printf("a is greater "); //output
	else
		printf("b is greater"); //output


}
