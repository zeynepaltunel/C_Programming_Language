#include<stdio.h>
#include<string.h>

struct {
	int day;
	int month;
	int year;
	
}birthday;

int main(){
	
	scanf("%d %d %d", &birthday.day, &birthday.month, &birthday.year);
	printf("%d/%d/%d\n", birthday.day, birthday.month, birthday.year);
	
	return 0;
}
