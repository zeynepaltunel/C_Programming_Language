#include<stdio.h>  
#include<stdlib.h>

//odd beginning,even last

struct node{
	int number;
	struct node *next;
};

typedef struct node Node;

void traverseList(Node* head);
Node* addBegin(Node* head, int number);
Node* addLast(Node* tail, int number);

int main(){
	
	int number;
	Node *head,*tail;
	
	head=(Node*)malloc(sizeof(Node));
	head->next=(Node*)malloc(sizeof(Node));
	
	printf("Enter a number: \n");
	printf("Press -1 to exit! \n");
	scanf("%d", &number);
	
	if(number!=-1){
		head->number=number;
		head->next=NULL;
		tail=head;
	}
	
	while(number!=-1){
		if(number%2==0 && number!=-1){
			tail=addLast(tail,number);
		}
		else if(number%2==1 && number!=-1){
			head=addBegin(head,number);
		}
	printf("Enter a number: ");
	scanf("%d", &number);
	}
	
	traverseList(head);
	
	return 0;
}

Node* addBegin(Node *head,int n){
	
	Node *New;
	New=(Node*)malloc(sizeof(Node));
	New->next=(Node*)malloc(sizeof(Node));
	
	New->number=n;
	New->next=head;
	
	return New;
}
Node* addLast(Node *tail,int n){
	
	Node *New;
	New=(Node*)malloc(sizeof(Node));
	New->next=(Node*)malloc(sizeof(Node));
	
	tail->next=New;
	New->number=n;
	New->next=NULL;
	
	return New;
}

void traverseList(Node *head){
	Node *c;
	c = head;
	while(c!=NULL){
		printf("%d \n",c->number);
		c=c->next;
	}
}

