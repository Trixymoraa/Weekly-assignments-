/*
name : Christine Moraa Orina 
Reg no: CT100/G/30634/26
date : 20/10/2026
Description:  Mobile data purchases 
*/

#include<stdio.h>

int main(){
	
	int choice;
	int bundles;
	
	printf("select data bundles:\n");
	printf("1. 100mbs = 50 kes\n");
	printf("2. 500mbs = 200kes\n");
	printf("3. 1GB = 350 Kes\n");
	printf("4. 2GB = 600 Kes\n");
	
	printf("enter choice 1-4: ");
	scanf("%d",&choice);
	
	if(choice == 1){
		printf("you selected 100mbs. cost 50ksh");
	}
	else if (choice == 2){
		printf("you selected 500mbs. cost 200ksh");
	}
	else if(choice == 3){
		printf("you selected 1GB. cost 350");
	}
	else if(choice == 4){
		printf("you selected 2GB. cost 600");
	}
	else {
		printf("invalid choice");
	}
		
return 0;
}
