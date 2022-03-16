#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,i,max;
	
	printf("Write size of array: ");
	scanf("%d", &n);
	
	int *ptr=(int*)calloc(n,sizeof(int));
	
	for(i=0; i<n; i++){
		scanf("%d", ptr+i);
	}
	
	max=*(ptr+0);
	i=0;
	
	while(i!=n){
		if(max<=*(ptr+i)){
			max=*(ptr+i);
			i++;
		}
		else
			i++;
	}
	printf("%d", max);
	return 0;
}
