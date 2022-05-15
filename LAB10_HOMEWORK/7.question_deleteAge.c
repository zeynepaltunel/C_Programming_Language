#include<stdio.h>
#include<stdlib.h>

struct node{
	int age;
	struct node *next;
};

typedef struct node Node;

Node* createList();
Node* deleteNode(Node*, int);
void traverseList(Node* head);

int main(){
	
	Node *head;
	int age;
	
	head=createList();
	traverseList(head);
	printf("------------\n");
	
	printf("Which age do you want to delete?\n");
	scanf("%d",&age);

	head=deleteNode(head,age);
	traverseList(head);
	
	return 0;
}

Node* createList(){
	
	Node *head,*p;
	int n,i;
	
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
		printf("Enter age:");
		scanf("%d", &p->age);
	}
	p->next=NULL;
	return head;	
}
void traverseList(Node *head){
	
	Node *p;
	p=head;
	
	while(p!=NULL){
		printf("Age: %d\n", p->age);
		p=p->next;
	}
}

Node* deleteNode(Node* head, int age){
	
	Node *p,*q;
	p=head;
	
	while(p!=NULL){
		if(p->age==age){
			head=p->next;
			free(p);
			break;
		}
		else{
			while(p->next!=NULL && p->age!=age){
				q=p;
				p=p->next;
			}
			if(p->age==age){
				q->next=p->next;
				free(p);
				break;
			}
			else if(p->next==NULL)
				printf("No node found to delete!\n");
				break;
		}
	}
	return head;
}



