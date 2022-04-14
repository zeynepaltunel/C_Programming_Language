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

	
	struct student person[10];
	
	for(i=0;i<3;i++){
		scanf("%d", &person[i].number);
		scanf("%s", person[i].name);
		scanf("%s", person[i].surname);
		scanf("%d", &person[i].midtermGrade);
	}
	
	for(i=0;i<3;i++){
		
		printf("%d-%s-%s-%d\n", person[i].number,person[i].name,person[i].surname,person[i].midtermGrade);
	
	}
	
	return 0;
}
