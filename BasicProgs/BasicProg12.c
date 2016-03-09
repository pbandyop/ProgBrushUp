#include <stdio.h>

/*Relate numbers by <, >, =*/
int main(){

	int a, b;

	printf("Enter two numbers (a and b): ");
	scanf("%d %d", &a, &b);

	if(a == b){
		printf("a and b are equal.\n");
	}
	else if(a < b){
		printf("a is less than b.\n");
	}
	else{
		printf("a is greater than b.\n");
	}

	return 0;

}
