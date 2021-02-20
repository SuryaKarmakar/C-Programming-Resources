#include<stdio.h>
int main(){
	int isAge;
	printf("Enter your Age : ");
	scanf("%d",&isAge);

	if (isAge >= 18)  
		printf("you are eligible to join");		//this statement will be executed if the condition is ture/non zero
	else
		printf("you are not eligible to join");		//otherwise this statement will executed
	return 0;
}

