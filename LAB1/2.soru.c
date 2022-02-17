//deneme1.c
#include<stdio.h>
#include<stdlib.h>

void fonk(void);

int gid=287; //global int degiskeni tanýmlamasý

int main(void)
{
	printf("deneme1.c gid degiskeni degeri: %d\n", gid);
	
	fonk(); //deneme2.c dosyasýndaki fonk() fonksiyonuna cagrý
	
	return
	 0;
}

//denem2.c
extern int gid; // global int degisken bildirisi

void fonk(void)
{
	printf("deneme2.c gid degiskeni degeri; %d", gid);
}
