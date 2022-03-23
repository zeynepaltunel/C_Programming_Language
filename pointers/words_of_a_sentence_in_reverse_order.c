#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char A[100] = { "PD Eglenceli Bir Ders" };
	int k=0,n=0,m=0,i,z;
	
	printf("Write a sentence: \n");
	//gets(A);
	
	while(A[n]!='\0'){
		n++;
	}
	
	char *ptr=(int*)malloc(n*sizeof(char));
	char *ptr2=(int*)malloc(n*sizeof(char));
	ptr=A;
	
	int end_index = n - 1, begin_index = n, size = 0, reverse_index = 0;
	
	// Size: 20
	// PD eðlenceli bir ders
	for (; n >= 0; n--) {
		if ( A[n] == ' ' ) {
			begin_index = n + 1;
			size = end_index - begin_index + 1;
			memcpy(ptr2 + reverse_index, A + begin_index, size);
			ptr2[reverse_index + size] = ' ';
			reverse_index += size + 1;
			end_index = n - 1;
		}
	}
	
	size = begin_index - 1;
	memcpy(ptr2 + reverse_index, A, size);
	
	printf("%s", ptr2);
	
	return 0;
}


