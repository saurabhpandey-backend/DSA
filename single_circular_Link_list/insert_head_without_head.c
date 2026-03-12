#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *tail,*newnode,*temp;

void create();
void traverse();
void ins_head();

int main(){
	create();
	traverse();
	ins_head();
	traverse();
}

void create(){
	int choice = 1;
	while(choice!=0){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter the data :- ");
		scanf("%d",&newnode->data);
		
		if(tail==NULL){
			tail=temp=newnode;
			tail->next=newnode;
		}
		else{
			newnode->next=tail->next;
			tail->next=newnode;
			tail=newnode;
		}
		printf("Press '1' for newnode :- ");
		scanf("%d",&choice);
	}
}

void ins_head(){
	temp=tail->next;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data for head :- ");
	scanf("%d",&newnode->data);
	if(tail==NULL){
		tail=newnode;
		tail->next=newnode;
	}
	else{
		newnode->next=tail->next;
		tail->next=newnode;
	}
	
}

void  traverse(){
	temp=tail->next;
	do{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=tail->next);	
}