#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//question 1
int main ()
{
	
	int n,sq;
	n=0,sq=0;
	
	printf("Enter the num: "); //output
	scanf("%d", &n); //input
	
	sq=n*n;//calculate square
	
	//use conditional statement >10
	
	if(sq>10)
	printf("The square of %d is %d", n,sq);
	else
	printf("Sorry the number is less then 10");

	
	return 0;
}
