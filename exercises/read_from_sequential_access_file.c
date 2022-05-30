#include<stdio.h>

struct Customer{
	int accountNo;
	char name[20];
	float balance;
}; 

typedef struct Customer customer;

int main(){
	
	customer cust;
	
	FILE *myptr;
	
	if((myptr=fopen("customer.txt","r"))==NULL)
		printf("File could not be opened!");
	else{
		fscanf(myptr,"%d%s%f", &cust.accountNo,cust.name,&cust.balance);
		while(!feof(myptr)){
			printf("%d-%s-%f\n", cust.accountNo,cust.name,cust.balance);
			fscanf(myptr,"%d%s%f", &cust.accountNo,cust.name,&cust.balance);
		}
		fclose(myptr);
	}	
	return 0;
}
