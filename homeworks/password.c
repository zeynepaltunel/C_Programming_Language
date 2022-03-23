#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i=0,temp;
	char *ptr=(char*)malloc(sizeof(char));
	
	printf("Write your password:\n");
	printf("Press enter to exit!\n");
	
	while(1){
		
		*(ptr+i)=getch();
		if(*(ptr+i)==13) break;
		putchar('*');
		i++;
		ptr=(char*)realloc(ptr,(i+1)*sizeof(char));
		
	}
	printf("\n");
	printf("Your password is: ");
	temp=i;
	for(i=0; i<temp; i++){
		putchar(*(ptr+i));
	}
	
	return 0;
}
