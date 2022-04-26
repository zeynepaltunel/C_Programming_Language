#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
	int number;
	char name[40];
	char surname[40];
	int midterm;
	int final;
	float grade;
	
};

typedef struct student node;

int main(){
	
	int n=0,i,no,sum=0;
	int selection,temp;
	float avarage,result,max;
	
	node *ptr=(node*)malloc(1*sizeof(node));
	
	while(1){
		
		printf("Selection [1-5]:\n");
		scanf("%d", &selection);
		
		switch(selection)
		{
			case 1:
				printf("Write student information(number-name-surname-midterm-final)\n");
				
				ptr=(node*)realloc(ptr,(1+n)*sizeof(node));
	
				scanf("%d",&(ptr+n)->number);
				scanf("%s", (ptr+n)->name);
				scanf("%s", (ptr+n)->surname);
				scanf("%d",&(ptr+n)->midterm);
				scanf("%d",&(ptr+n)->final);
				
				(ptr+n)->grade=((ptr+n)->midterm * 0.4)+((ptr+n)->final * 0.6);
				n++;
				
				break;
				
			case 2:
				
				for(i=0; i<n; i++){
		
				printf("%d-%s-%s-%d-%d-%f\n", (ptr+i)->number,(ptr+i)->name,(ptr+i)->surname,(ptr+i)->midterm,(ptr+i)->final,(ptr+i)->grade);
	
				}	
				break;
			case 3:
				printf("Write student number:\n");
				scanf("%d",&no);			
				for(i=0; i<n; i++){
					if((ptr+i)->number==no){
						scanf("%d",&(ptr+i)->number);
						scanf("%s", (ptr+i)->name);
						scanf("%s", (ptr+i)->surname);
						scanf("%d",&(ptr+i)->midterm);
						scanf("%d",&(ptr+i)->final);
						
					}
				}
				break;
			case 4:
				for(i=0; i<n; i++){
					sum=sum+(ptr+i)->midterm*0.4+(ptr+i)->final*0.6;
				}
				avarage=sum/n;
				printf("%f\n", avarage);
				break;
			case 5:
				
				max=(ptr+0)->grade;
				i=0;
	
				while(i!=n){
					if(max<=(ptr+i)->grade){
						max=(ptr+i)->grade;
						temp=i;
						i++;
					}
					else
						i++;
				}
				
				printf("%s %s has highest grade with %f\n", (ptr+temp)->name, (ptr+temp)->surname,max);
			
				break;	
						
		}
	}
	return 0;
}
