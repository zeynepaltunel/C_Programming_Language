#include<stdio.h>
#include<string.h>

int main(){
	
	int i;
	
	struct employees{
		char name[30];
		char surname[30];
		int age;
		int experience;
		char department[30];
		
	};
	
	struct employees *person;
	person=(struct employees*)malloc(10*sizeof(struct employees));
	
	for(i=0; i<3; i++){
		printf("Enter name:\n");
		scanf("%s", (person+i)->name);
		printf("Enter surname:\n");
		scanf("%s", (person+i)->surname);
		printf("Enter age:\n");
		scanf("%d", &(person+i)->age);
		printf("Enter year of experience:\n");
		scanf("%d", &(person+i)->experience);
		printf("Enter department:\n");
		scanf("%s", (person+i)->department);
	}
	for(i=0; i<3; i++){
		printf("%d. Employee Information:\n",i+1);
		printf("%s\n", (person+i)->name);
		printf("%s\n", (person+i)->surname);
		printf("%d\n", (person+i)->age);
		printf("%d\n", (person+i)->experience);
		printf("%s\n", (person+i)->department);
	}
	
	return 0;
}
