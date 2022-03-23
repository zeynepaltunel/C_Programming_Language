#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *ptr=(int*)malloc(1*sizeof(int));
	int i=0;
	int a=1,temp;
	
	printf("Write numbers: \n");
	printf("Enter zero to exit!\n");
	
	while(1){
		
		scanf("%d", &a);
		if(a==0) break;
		ptr=(int*)realloc(ptr,(i+1)*sizeof(int));
		*(ptr+i)=a;	
		i++;
			
	}
	
	temp=i;
	for(i=0; i<temp; i++){
		printf("%d ", *(ptr+i));
	}
	
	return 0;
}
