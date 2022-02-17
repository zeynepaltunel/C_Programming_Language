#include<stdio.h>
#include<stdlib.h>
float square(const int r);
const float pi=3.14;

int main(){
	int r;

	printf("Write a circle of radius: \n");
	scanf("%d", &r);
	printf("square=%.2f", square(r));
	
	return 0;
}
float square(const int r)
{
	return pi*r*r;
}
