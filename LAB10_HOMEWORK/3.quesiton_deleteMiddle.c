#include<stdio.h>
#include<stdlib.h>

int counter=1;

struct node{
	int number;
	struct node *next;
};

typedef struct node Node;

Node* createList();
Node* deleteMiddle(Node* head);
void traverseList(Node* head);

int main(){
	Node* head;
	
	head=createList();
	traverseList(head);
	printf("\n");
	head=deleteMiddle(head);
	traverseList(head);
	
	return 0;
}

Node* createList(){
	
	int i,n;
	Node *head,*p;
	p=head;
	
	printf("How many numbers in the List?\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		if(i==0){
			head=(Node*)malloc(sizeof(Node));
			p=head;
		}
		else{
			p->next=(Node*)malloc(sizeof(Node));
			p=p->next;
		}
		printf("Enter a number:"); 
		scanf("%d", &p->number);
	}
	p->next=NULL;
	
	return head;
}


void traverseList(Node* head){
	
	Node *p;
	p=head;
	
	while(p!=NULL){
		printf("%d\n",p->number);
		p=p->next;
		counter++;
	}	
}

Node* deleteMiddle(Node* head){
	
	int del=0;
	Node *p,*q;
	p=head;
	
	while(p!=NULL){
		del++;
		if(del==counter/2) break;
		else{
			q=p;
			p=p->next;
		}
	}
	if(del==counter/2){
		q->next=p->next;
		free(p);
	}	
	return head;
}
