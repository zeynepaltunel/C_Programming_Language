#include<stdio.h>
#include<stdlib.h>

struct node{
	int number;
	struct node* next;
};

typedef struct node Node;

Node* reverse(Node *head);
void traverseList(Node* head);
Node* createList();

int main(){
	
	int number;
	
	Node *head;
	
	head=createList();
	traverseList(head);
	printf("\n");
	head=reverse(head);	
	traverseList(head);
	
	return 0;
}

int n;

Node* createList(){
	
	int i;
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


Node* reverse(Node *head){
	
	Node *p=head; //simdiki
	Node *q=NULL,*next=NULL; //onceki,sonraki
		
		while(p!=NULL){
			next=p->next;
			p->next=q;
			q=p;
			p=next;
		}
		head=q;
	
	return head;
}

void traverseList(Node* head){
	Node *p;
	p=head;
	
	while(p!=NULL){
		printf("%d\n",p->number);
		p=p->next;
	}
	
}

