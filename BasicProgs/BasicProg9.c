#include <stdio.h>

/*Conditional operator example*/
int main(){

	int x = 23;
	
	printf("Original value of x is: %d\n", x);
	x = (x>= 24)?2:9;
	printf("Value of x after the decision is made is: %d\n", x);
	return 0;

}
