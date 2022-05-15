#include<stdio.h>
#include<stdlib.h>

struct node{
	int number;
	struct node* next;
};

typedef struct node Node;

Node* changeFirstandLast(Node *head);
void traverseList(Node* head);
Node* createList();

int main(){
	
	int number;
	
	Node *head;
	
	head=createList();
	traverseList(head);
	printf("\n");
	head=changeFirstandLast(head);	
	traverseList(head);
	
	return 0;
}

Node* createList(){
	
	int i,n;
	Node *head,*p;
	
	printf("How many numbers in the List?\n");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){

		if(i==0){
			head=(Node*)malloc(sizeof(Node));
			p=head;
		}
		else{
			p->next=(Node*)malloc(sizeof(Node));
			p=p->next;
		}
		printf("Enter a number:"); scanf("%d", &p->number);
	}
	p->next=NULL;	
	return head;
}


Node* changeFirstandLast(Node *head){

	Node *p,*q;
	p=head;
	
	while(p!=NULL){
		
		if(p==head && p->next==NULL) break;
		
		else if(head->next==p && p->next==NULL){
			
			p->next=head;
			head->next=NULL;
			break;
		}
		else if(p->next==NULL){
			
			p->next=head->next;
			q->next=head;
			
			head->next=NULL;
			break;
		}
		q=p;
		p=p->next;
	}
	
	return p;
}

void traverseList(Node* head){
	Node *p;
	p=head;
	
	while(p!=NULL){
		printf("%d\n",p->number);
		p=p->next;
	}
	
}

