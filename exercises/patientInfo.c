#include<stdio.h>

struct Patient{
	int no;
	char name[20];
	char symptoms[50];
	int age; 
};

typedef struct Patient patient;

void createFile(patient* myptr);
void writeFile(patient* myptr);
void readFile(patient* myptr);
void removeRecord(patient* myptr);
void updateRecord(patient* myptr);

int main(){
	
	FILE *myptr;
	createFile(myptr);
	writeFile(myptr);
	readFile(myptr);
	removeRecord(myptr);
	readFile(myptr);
	updateRecord(myptr);
	readFile(myptr);
	
	return 0;	
}

void createFile(patient* myptr){
	
	patient emptyPerson={0,"","",0};
	
	int i;
	
	if((myptr=fopen("patient.dat","w"))==NULL)
		printf("File could not be opened!\n");
	else{
		for(i=0; i<20; i++){
			fwrite(&emptyPerson,sizeof(patient),1,myptr);
		}
	fclose(myptr);	
	}	
}

void writeFile(patient* myptr){
	
	patient emptyPerson={0,"","",0};
	
	if((myptr=fopen("patient.dat","w"))==NULL)
		printf("File could not be opened!\n");
	else{
	
		printf("Enter patient no:\n");	
		scanf("%d", &emptyPerson.no);
	
		while(emptyPerson.no!=0){
			printf("Enter patient name, symptoms and age:\n");
			scanf("%s %s %d", emptyPerson.name,emptyPerson.symptoms,&emptyPerson.age);
		
			fseek(myptr,(sizeof(patient))*(emptyPerson.no-1),SEEK_SET);
			fwrite(&emptyPerson,sizeof(patient),1,myptr);
		
			printf("Enter patient no:\n");
			scanf("%d", &emptyPerson.no);
		}
	}
	fclose(myptr);
}

void readFile(patient* myptr){
	
	patient emptyPerson={0,"","",0};
	
	if((myptr=fopen("patient.dat","r"))==NULL)
		printf("File could not be opened!\n");
	else{
		printf("%s	%s	%s	%s\n","No","Name","Symptoms","Age");
		fread(&emptyPerson,sizeof(patient),1,myptr);
		while(!feof(myptr)){
			
			if(emptyPerson.no!=0)
				printf("%d	%s	%s	%d\n", emptyPerson.no,emptyPerson.name,emptyPerson.symptoms,emptyPerson.age);
			fread(&emptyPerson,sizeof(patient),1,myptr);
			
		}
	}
	fclose(myptr);	
}

void removeRecord(patient* myptr){
	
	patient emptyPerson={0,"","",0};
	int n;
	
	if((myptr=fopen("patient.dat","r+"))==NULL)
		printf("File could not be opened!\n");
	else{
		printf("Which record do you want to remove?\n");
		scanf("%d",&n);
		
		fseek(myptr,(sizeof(patient))*(n-1),SEEK_SET);
		fwrite(&emptyPerson,sizeof(patient),1,myptr);
	
	}	
	fclose(myptr);
}

void updateRecord(patient* myptr){
	
	patient emptyPerson;
	int n;
	char name[20];
	char symptoms[40];
	int age;
	
	if((myptr=fopen("patient.dat","r+"))==NULL)
		printf("File could not be opened!\n");
	else{
		printf("Which record do you want to update?\n");
		scanf("%d", &n);
	
		fseek(myptr,sizeof(patient)*(n-1),SEEK_SET);
		fread(&emptyPerson,sizeof(patient),1,myptr);

		if(emptyPerson.no==0)
			printf("No recors to update!\n");
		else{
			printf("Enter new name, symptom and age:\n");
			scanf("%s %s %d", &name,&symptoms,&age);
			
			strcpy(emptyPerson.name,name);
			strcpy(emptyPerson.symptoms,symptoms);
			emptyPerson.age=age;
			
			fseek(myptr,sizeof(patient)*(n-1),SEEK_SET);
			fwrite(&emptyPerson,sizeof(patient),1,myptr);	
		}
	}
	fclose(myptr);
}
