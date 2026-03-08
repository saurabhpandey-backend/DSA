#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head,*temp,*newnode,*tail;

void create();
void traverse();
void ins_end();

int main(){
	create();
	traverse();
	ins_end();
	traverse();
}

void create(){
	int choice=1;
	while(choice!=0){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter the data :- ");
		scanf("%d",&newnode->data);
		if(head==NULL){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->next=head;
			temp=newnode;
		}
		printf("press 1 for newnode :- ");
		scanf("%d",&choice);
	}
}

void ins_end(){
	temp=head;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data :- ");
	scanf("%d",&newnode->data);
	newnode->next=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=newnode;
}

void traverse(){
	temp=head;
	while(temp->next!=head){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}