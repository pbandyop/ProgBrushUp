#include <stdio.h>

/*Function to show the difference between postfix and prefix*/

int main(){

	int a = 8;
	
	printf("Original value of a is: %d\n", a);
	printf("Post increment value of a (a++) is: %d\n", a++);
	printf("Current value of a is: %d\n", a);
	printf("Pre increment value of a (++a) is: %d\n", ++a);
	printf("Current value of a is: %d\n", a);
	return 0;

}
