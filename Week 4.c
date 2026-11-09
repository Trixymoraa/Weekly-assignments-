/*
name: Christine Moraa Orina 
regno:CT100/G/30634/26
date:19/10/2026
Description: ATM withdrawal program 
*/

#include<stdio.h>

int main(){
	float balance, withdrawal;
	
	printf("Enter account balance:\t");
	scanf("%f",&balance);
	
	while(balance>0){
		printf("Enter withdrawal:\t");
		scanf("%f",&withdrawal);
		
		balance=balance-withdrawal;
		
		printf("balance is %.2f \n", balance);
	}
	return 0;
}
