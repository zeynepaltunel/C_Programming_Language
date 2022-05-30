#include<string.h>

struct node{
	int OgrNo;
	int Not;
	struct node *next;
};
typedef struct node Node;

int secondHighest(Node* head);

int main(){

	int i=0,n,x;
	Node *head,*p; 
	
	printf("How many student in the List:\n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		
		if(i==0){
			head=(Node*)malloc(sizeof(Node));
			p=head;
		}
		else{
			p->next=(Node*)malloc(sizeof(Node));
			p=p->next;
		}
		
		printf("Write student no and grade:\n");
		scanf("%d%d", &p->OgrNo,&p->Not);
	}
	p->next=NULL;
	
	x=secondHighest(head);
	printf("The number of the student with the second highest grade: %d", x);
	return 0;
}

int secondHighest(Node* head){
	int a;
	Node *p,*max,*max2;
	p=head;
	max=head;
	max2=head;
	
	while(p->next!=NULL){
		p=p->next;
		if((p->Not) >= (max->Not)){
			max=p;
		}		
	}
	
	a= max->Not;
	max->Not=0;
	
	p=head;
	while(p->next!=NULL){
		p=p->next;
		if((p->Not) >= (max2->Not)){
			max2=p;
		}		
	}
	
	max->Not=a;
	
	a=max2->OgrNo;
	return a;	
}
