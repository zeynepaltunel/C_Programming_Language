#include<stdio.h>

struct Customer{
	int accountNo;
	char name[20];
	float balance;
};

typedef struct Customer customer;

int main(){
		
	FILE *myptr;
	
	if((myptr=fopen("customer.txt","w"))==NULL)
		printf("File could not be opened!\n");
	else{
		printf("Enter your account no:\n");
		printf("Enter -1 to Exit!\n");
		scanf("%d", &cust.accountNo);
		while(cust.accountNo!=-1){
			printf("Enter your name and balance:\n");
			scanf("%s%f", cust.name,&cust.balance);
			fprintf(myptr,"%d %s %f\n", cust.accountNo,&cust.name,cust.balance);
			printf("Enter your account no:\n");
			scanf("%d", &cust.accountNo);
		}
		fclose(myptr);
	}
	return 0;
}
