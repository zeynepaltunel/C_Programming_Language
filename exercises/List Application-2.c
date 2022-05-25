#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	int number;
	char name[20];
	int mid;
	int final;
	float total;
	struct node *next;
};

typedef struct node Node;

Node* createList();
void traverseList(Node* head);
Node* addRecord(Node* head);
Node* removeRecord(Node* head, int no);
void totalGrade(Node* head); //student number who has highest grade 
void highestStudent(Node* head);
void average(Node* head);

Node* total(Node *p){
	
	float t;
	
	t=(p->mid*0.4) + (p->final*0.6);
	
	p->total=t;
	
	return p;
}


int main(){
	
	Node *head;
	int n,no;
	
	printf("Select 1: Create a list.\n");
	printf("Select 2: Add new record.\n");
	printf("Select 3: Remove record.\n");
	printf("Select 4: Print total gardes.\n");
	printf("Select 5: Print student number who has highest grade.\n");
	printf("Select 6: Print average:\n");
	printf("Select 7: Exit.\n");	
	
	while(n!=-1){
		printf("Which process do you want to choose?\n");
		scanf("%d",&n);
		
		switch(n){
			case 1:
				head=createList();
				traverseList(head);
				break;
			case 2:
				head=addRecord(head);
				traverseList(head);
				break;
			case 3:
				printf("Which student record do you want to delete? Please enter student number:\n");
				scanf("%d", &no);
				head=removeRecord(head,no);
				traverseList(head);
				break;	
			case 4:
				totalGrade(head);
				break;
			case 5:
				highestStudent(head);
				break;	
			case 6: 
				average(head);
				break;	
			case 7:
				n=-1;
				break;	
		}
	}	
	return 0;
}

Node* createList(){
	
	int i,n;

	Node *p,*head;

	printf("How many students in your the list?\n");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		if(i==0){
			head=(Node*)malloc(sizeof(Node));
			p=head;
		}
		else{
			p->next=(Node*)malloc(sizeof(Node));
			p=p->next;
		}
		printf("Enter student number,name,midterm result and final result:\n");
		scanf("%d%s%d%d",&p->number,p->name,&p->mid,&p->final);
	}
	p->next=NULL;
	return head;
}

void traverseList(Node* head){
	Node *p;
	p=head;
	
	while(p!=NULL){
		printf("%d--%s--%d--%d\n", p->number,p->name,p->mid,p->final);
		p=p->next;
	}
}

Node* addRecord(Node* head){
	
	
	Node *p;
	Node* newNode=(Node*)malloc(sizeof(Node));
	
	printf("Enter student number,name,midterm result and final result:\n");
	scanf("%d%s%d%d",&newNode->number,newNode->name,&newNode->mid,&newNode->final);
	
	p=head;
	
	while(p!=NULL){
		
		if(p->next==NULL){
			p->next=newNode;
			newNode->next=NULL;
			break;
		}
	p=p->next;
	}
	return head;
}

Node* removeRecord(Node* head, int no){
	Node *p,*q;
	p=head;
	
	if(p->number==no){
		head=p->next;
		free(p);
	}
	else{
		while(p->number!=no && p->next!=NULL){
			q=p;
			p=p->next;
		}
		if(p->number==no){
			q->next=p->next;
			free(p);
		}
		else if(p->next==NULL){
			printf("No student record found to delete!\n");
		}
	}
	return head;
}

void totalGrade(Node* head){
	
	Node *p;
	p=head;
	float t;
	
	while(p!=NULL){
		
		total(p);
		printf("No: %d\nName: %s\nTotalGrade: %f\n", p->number,p->name,p->total);
		p=p->next;
	}
}

void highestStudent(Node* head){
	
	Node *p,*goodStudent;
	p=head;
	goodStudent=head;
	
	while(p->next!=NULL){
		p=p->next;
		
		if((total(p))<=(total(goodStudent))){
			goodStudent=p;
		}
	}
	
	printf("Top student:");
	printf("%d %s with %f\n", goodStudent->number,goodStudent->name,goodStudent->total);
	
}

void average(Node* head){
	
	float a,sum=0;
	int counter=0;
	
	Node *p;
	p=head;
	
	if(p==NULL)
		printf("No record!\n");
	else{
		do
		{
			sum+=p->total;
			p=p->next;
			counter++;
		}
		while(p!=NULL);
		
		a=sum/counter;
		
		printf("Average: %.2f\n", a);
	}
}
