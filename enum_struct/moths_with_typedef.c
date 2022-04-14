#include<stdio.h>
#include<string.h>

	enum month_list{
		january=1,february,march,april,may,june,july,august,september,october,november,december
	};
	typedef enum month_list months;
int main(){
	
	months Month;
	
	Month=november;
	
	printf("%d. month is November.",Month);

	return 0;
}

