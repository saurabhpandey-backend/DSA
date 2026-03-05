#include<stdio.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *head=NULL,*temp=NULL,*newnode,*tail;

void create();
void traverse();
void position();

int main(){
	int choice;
	create();	
	traverse();
	printf("do you want to insert any position press 1 :- ");
	scanf("%d",&choice);
	if(choice==1){
		position();
		traverse();	
	}
	else{
		printf("\nok\n");	
		traverse();
	}
}

void create(){
	int choice=1;
	while(choice){
		printf("Enter the value :- ");
		newnode=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
		printf("Want to insert new node :- ");
		scanf("%d",&choice);
	}
}

void position(){
	temp=head;
	int pos,i=1;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nWhich postion do you want to insert :- ");
	scanf("%d",&pos);
	printf("\nEnter the value :- ");
	scanf("%d",&newnode->data);
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	newnode->prev=temp;
	newnode->next=temp->next;
	temp->next=newnode;
	temp->next->prev=newnode;	
}

void traverse(){
	temp = head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
