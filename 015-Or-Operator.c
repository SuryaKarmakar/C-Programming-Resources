#include<stdio.h>
int main(){
	char adharCard, panCard;
	printf("[+] if you have Adhar card then enter 'y' otherwise enter 'n' : ");
	scanf("%c/n",&adharCard);

	printf("[+] if you have Pan card then enter 'y' otherwise enter 'n' : ");
	scanf("%c/n",&panCard);

	//if any of the conditions are ture then it will execute
	if ((adharCard == 'y') || (panCard == 'y'))
		printf("You are eligible to join\n");
	else
		printf("you are not eligible to join\n");
return 0;
}
