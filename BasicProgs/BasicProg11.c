#include <stdio.h>

/*Even or odd number check*/
int main(){

	int a;

	printf("Enter a decimal or integer number:");
	scanf("%d", &a);
	
	if((a%2)==0){
		printf("It is an even number.\n");
	}else{
		printf("It is an odd number.\n");
	}

	return 0;

}
