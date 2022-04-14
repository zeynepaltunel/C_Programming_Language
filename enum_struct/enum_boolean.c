#include<stdio.h>
#include<string.h>

int main(void){
	
	enum boolean{
		false=0,
		true=1
	};
	
	enum boolean isTrue;
	
	isTrue=true;
	
	if(isTrue==1){
		printf("True\n");
	}
	
	return 0;
}
