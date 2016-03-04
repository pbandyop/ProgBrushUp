#include <stdio.h>

/*Function to find whether it is a leap year or not*/
int main(){

	int year;

	printf("Enter a year in format yyyy : ");
	scanf("%d", &year);

	if(year%400 == 0){
		printf("It is a leap year \n");	
	}
	else if(year%100 == 0){
		printf("Not a leap year \n");
	}
	else if(year%4 == 0){
		printf("It is a leap year \n");
	}
	else{
		printf("It is not a leap year \n");
	}
	return 0;

}


