#include<stdio.h>
#include<string.h>


int main(void){
	int i;
	
	struct student{
	int number;
	char name[10];
	char surname[10];
	int midtermGrade;
	};

	struct student *ptr=(struct student*)malloc(3*sizeof(struct student));
	
	for(i=0; i<3; i++){
		scanf("%d", &(ptr+i)->number);
		scanf("%s", (ptr+i)->name);
		scanf("%s", (ptr+i)->surname);
		scanf("%d", &(ptr+i)->midtermGrade);
	}
	
	for(i=0; i<3; i++){
		
		printf("%d-%s-%s-%d\n", (ptr+i)->number,(ptr+i)->name,(ptr+i)->surname,(ptr+i)->midtermGrade);
	
	}
	
	return 0;
}
