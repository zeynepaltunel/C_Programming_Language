#include <stdio.h>

struct node{
	int number;
	struct node *next;
};

typedef struct node Node;

void traverseList(Node*);
Node* addbeginning(Node*,int);
Node* addlast(Node*,int);

int main(){
	
	int n;
	
	Node *head,*tail;
	
	head=(Node*)malloc(sizeof(Node));
	head->next=(Node*)malloc(sizeof(Node));
	
	if(n!=-1){
		head->number=n;
		head->next=NULL;
		tail=head;
	}
	
	printf("Enter a number: \n");
	scanf("%d", &n);
	
	while(n!=-1){
		
		if(n%2==0 && n!=-1){
			tail=addlast(tail,n);
		}
		else{
			head=addbeginning(head,n);
		}
		printf("Enter a number: \n");
		scanf("%d", &n);
}
	traverseList(head);
	
	return 0;	
}

void traverseList(Node* head){
	
	Node *p;
	p=head;
	
	while(p!=NULL){
		printf("%d\n", p->number);
		p=p->next;
	}
}
Node* addbeginning(Node *head,int n){
	
	Node *New;
	New=(Node*)malloc(sizeof(Node));
	New->next=(Node*)malloc(sizeof(Node));
	
	New->number=n;
	New->next=head;
	
	return New;
}
Node* addlast(Node *tail,int n){
	
	Node *New;
	New=(Node*)malloc(sizeof(Node));
	New->next=(Node*)malloc(sizeof(Node));
	
	New->number=n;
	tail->next=New;
	New->next=NULL;
	
	return New;
}

