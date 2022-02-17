#include<stdio.h>
#include<stdlib.h>

void func(void);
void func_sta(void);

int main()
{
	func();
	func_sta();
	printf("\n");
	func();
	func_sta();
	return 0;
} 

void func(void)
{
	int id=1;
	
	printf("func() id degisken degeri: %d\n", id);
	
	id=id+21;
	
	printf("func() id degisken degeri: %d\n", id);
}

void func_sta(void)
{
	static int id=1;
	
	printf("func() id degisken degeri: %d\n", id);
	
	id=id+21;
	
	printf("func() id degisken degeri: %d\n", id);
}
