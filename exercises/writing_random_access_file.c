#include<stdio.h>

struct Information{
	int accountNo;
	char name[20];
	char surname[20];
	float balance;
};

typedef struct Information info;

int main(){
	
	int i;
	info empty={0,"","",0};
	info custInfo={0,"","",0};
	
	FILE *myptr;
	
	if((myptr=fopen("customer.dat","w"))==NULL)
		printf("File could not be opened!\n");
	else{
		for(i=0; i<10; i++){
			fwrite(&empty,sizeof(info),1,myptr);
		}
		fclose(myptr);
	}
	
	if((myptr=fopen("customer.dat","r+"))==NULL)
		printf("File could not be opened!\n");
	else{
		printf("Enter account number:\n");
		printf("Enter 0 to Exit!");
		scanf("%d", &custInfo.accountNo);
		
		while(custInfo.accountNo!=0){
			printf("Enter name,surrname and balance:\n");
			scanf("%s%s%f", custInfo.name,custInfo.surname,&custInfo.balance);
			fseek(myptr,(custInfo.accountNo-1)*sizeof(info),SEEK_SET);
			fwrite(&custInfo,sizeof(info),1,myptr);
			
			printf("Enter account number:\n");
			scanf("%d", &custInfo.accountNo);
		}

	}
	rewind(myptr);
	
	while(!feof(myptr)){
		
		fread(&custInfo,sizeof(info),1,myptr);
		printf("%d-%s-&s-%f\n", custInfo.accountNo,custInfo.name,custInfo.surname,custInfo.balance);
		
	}
	fclose(myptr);	
	return 0;
}
