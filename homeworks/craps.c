#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int x,y,z;
	int score,temp;
	
	x=1+rand()%6;
	y=1+rand()%6;
	z=x+y;
	printf("First thrown\n");
	printf("%d %d\n", x,y);	
	
	if(z==7 || z==11){
		printf("Win!");
		return 0;
	}
	else if(z==2 || z==3 || z==12){
		printf("Lost!");
		return 0;
	}
	else{
		score=z;
		temp=score;
	}
	while(score!=7){
		x=1+rand()%6;
		y=1+rand()%6;
		printf("Throw again!\n");
		printf("%d %d\n", x,y);
		score=x+y;
		if(score==temp){
			printf("Win!");
			return 0;
		}	
	}
	printf("Lost!");
	return 0;
}
