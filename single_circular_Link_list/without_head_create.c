#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void create();
void traverse();
void display();

struct node *tail,*newnode,*temp;

int main(){
	create();
	traverse();
	printf("\n");
	display();
}

void create(){
	int choice=1;
	while(choice!=0){
		printf("enter the data :- ");
		newnode=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		
		if(tail==NULL){
			tail=newnode;
			tail->next=newnode;
		}
		else{
			newnode->next=tail->next;
			tail->next=newnode;
			tail=newnode;
		}
		printf("press '1' for newdata :- ");
		scanf("%d",&choice);
	}
}

void traverse(){
	temp=tail->next;
	while(temp->next!=tail->next){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d ",temp->data);
}

//here i create new traversing 
void display(){
	temp=tail->next;
	do{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=tail->next);
}