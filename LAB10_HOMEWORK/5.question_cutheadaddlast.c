#include<stdio.h>
#include<stdlib.h>

struct node{
    int number;
    struct node *next;
};

typedef struct node Node;

Node* cutheadaddlast(Node* head);
Node* createList();
void traverseList(Node* head);

int main(){
    
    Node *head;
    
    head=createList();
    traverseList(head);
    printf("\n");
    head=cutheadaddlast(head);
    traverseList(head);
    
    return 0;
}

Node* createList(){
    
    int n,i;
    Node *head,*p;
    
    printf("How many numbers in the List?\n");
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
        printf("Enter a number:"); scanf("%d", &p->number);
    }
    p->next=NULL;

    return head;
}

void traverseList(Node *head){
    Node *p;
    p=head;
    
    while(p!=NULL){
        printf("%d\n", p->number);
        p=p->next;
    }
}

Node* cutheadaddlast(Node* head){
    
    Node *p,*q;
    p=head;
    q=head->next;
    
    while(p!=NULL){
    
        if(p->next==NULL){
            
            p->next=head;
            p=p->next;
            p->next=NULL;
            
            break;
            
        }
        p=p->next;
    }
    head=q;
    return head;
}
