#include <stdio.h>

/*Print the number entered by user only if it is negative*/
int main(){

	float x;

	printf("Enter a number integer or decimal: ");
	scanf("%f", &x);
	
	if(x<0){
		printf("You entered: %f\n", x);
	}else{
		printf("Sorry you entered a +ve number.\n");
	}

	return 0;

}
