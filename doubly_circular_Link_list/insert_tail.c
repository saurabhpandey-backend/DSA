#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node* next;
};

void create();
void traverse();
void ins_tail();

struct node *tail,*newnode,*temp;

int main(){
	create();
	traverse();
	ins_tail();
	traverse();
}

void create(){
	int choice=1;
	while(choice!=0){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter the data :- ");
		scanf("%d",&newnode->data);
		if(tail==NULL){
			tail=temp=newnode;
			tail->next=newnode;
			tail->prev=newnode;
		}
		else{
			newnode->next=tail->next;
			newnode->prev=tail;
//			temp->prev=newnode;
			tail->next->prev=newnode;
			tail->next=newnode;
			tail=newnode;
		}
		printf("press 1 for new data :- ");
		scanf("%d",&choice);
	}
}

void ins_tail(){
	temp=tail;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nInsert at tail \n");
	printf("Enter the data :- ");
	scanf("%d",&newnode->data);
	if(tail==NULL){
		tail=temp=newnode;
		tail->next=newnode;
		tail->prev=newnode;
	}
	else{
		newnode->next=tail->next;
		newnode->prev=tail;
		tail->next=newnode;
		tail=newnode;
	}
}

void traverse(){
	temp=tail->next;
	while(temp!=tail){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}