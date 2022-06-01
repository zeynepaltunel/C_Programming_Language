#include<stdio.h>
#include<string.h>

struct student{
	int no;
	char name[20];
	int grade;
};

typedef struct student Student;

void createFile(Student* myptr);
void writeFile(Student* myptr);
void readFile(Student* myptr);

int main(){
	
	FILE *myptr;
	
	createFile(myptr);
	writeFile(myptr);
	readFile(myptr);
	
	return 0;
}
void createFile(Student* myptr){	
	int i;
	Student emptyPerson={0,"",0};
	
	if((myptr=fopen("studentInfo.dat","w"))==NULL)
		printf("File could not be opened!\n");
	else{
		for(i=0; i<20; i++)
			fwrite(&emptyPerson,sizeof(Student),1,myptr);
	}	
	fclose(myptr);
}

void writeFile(Student* myptr){
	
	Student emptyPerson={0,"",0};
	
	if((myptr=fopen("studentInfo.dat","w"))==NULL)
		printf("File would not be opened!");
	else{
		printf("Enter student no:\n");
		scanf("%d", &emptyPerson.no);
		
		while(emptyPerson.no!=0){
			
			printf("Enter student name and grade:\n");
			scanf("%s %d", emptyPerson.name,&emptyPerson.grade);
			
			fseek(myptr,(emptyPerson.no-1)*sizeof(Student),SEEK_SET);
			fwrite(&emptyPerson,sizeof(Student),1,myptr);
			
			printf("Enter student no:\n");
			scanf("%d", &emptyPerson.no);
		}
		fclose(myptr);	
	}
}

void readFile(Student* myptr){
	
	Student emptyPerson={0,"",0};
	
	if((myptr=fopen("studentInfo.dat","r"))==NULL)
		printf("File could not be opened!");
	else{
		printf("%s	%s	%s", "No","Name","Grade\n");
		
		fread(&emptyPerson,sizeof(Student),1,myptr);
		while(!feof(myptr)){
			
			if(emptyPerson.no!=0){
				printf("%d	%s	%d\n", emptyPerson.no,emptyPerson.name,emptyPerson.grade);
			}	
			fread(&emptyPerson,sizeof(Student),1,myptr);		
		}
		fclose(myptr);
	}	
}



