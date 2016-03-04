#include <stdio.h>

/*Function to demonstrate the airthmetic operations in C*/
int main(){

	int a = 12, b = 9, c;
	
	c = a + b;
	printf("The addition of a = %d and b = %d is: %d\n", a,b,c);
	c = a - b;
	printf("The substraction of a = %d and b = %d is: %d\n", a,b,c);
	c = a * b;
	printf("The multiplication of a = %d and b = %d is: %d\n", a,b,c);
	c = a / b;
	printf("The division of a = %d and b = %d is: %d\n", a,b,c);
	c = a % b;
	printf("The remainder of a = %d and b = %d is: %d\n", a,b,c);
	return 0;
	

}
