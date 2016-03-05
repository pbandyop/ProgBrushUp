#include <stdio.h>

/*Swap two numbers entered by user*/
int main(){

	int a, b, c;
	
	printf("Enter two numbers with single space (a and b): ");
	scanf("%d %d", &a, &b);

	c = a;
	a = b;
	b = c;

	printf("Two numbers swapped (a and b) values are: %d and %d\n", a , b);
	return 0;
	
}

