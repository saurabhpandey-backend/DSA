#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head,*newnode,*tail,*temp;

void create();
void traverse();
void ins_start();

int main(){
	create();
	traverse();
	ins_start();
	traverse();
}

void create(){
	int choice=1;
	while(choice!=0){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter the data :- ");
		scanf("%d",&newnode->data);
		if(head==NULL){
			head=temp=newnode;
			newnode->next=NULL;
		}
		else{
			temp->next=newnode;
			newnode->next=head;
			temp=tail=newnode;
		}
		printf("\npress 1 for new data :- ");
		scanf("%d",&choice);
	}
}

void ins_start(){
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter the data :- ");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	tail->next=newnode;
}

void traverse(){
	temp=head;
	while(temp->next!=head){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d ",temp->data);
}