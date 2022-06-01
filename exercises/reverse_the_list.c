#include<stdio.h>

struct list{
	int number
};

typedef struct list List;

List* reverse(List* ptr);

int main(void){
	int i;

	List *ptr=(List*)malloc(5*sizeof(List));
	
	for(i=0; i<5; i++){
		scanf("%d", &(ptr+i)->number);
	}
	
	printf("\n---------\n");
	
	ptr=reverse(ptr);
	
	for(i=0; i<5; i++){
		
		printf("%d\n", (ptr+i)->number);
	
	}
	
	return 0;
}

List* reverse(List* ptr){
	
	int i,j;
	j=4;
	List *temp;
	
	for(i=0; i<5/2; i++){
		
		*temp=*(ptr+i);
		*(ptr+i)=*(ptr+j);
		*(ptr+j)=*temp;
		j--;
		
	}
	i=0;
	return ptr+i;
}

