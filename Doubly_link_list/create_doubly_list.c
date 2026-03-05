#include<stdio.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head=NULL,*newnode,*temp;
void create();
void traverse();

int main(){
	create();
	traverse();
}

void create(){
	head=temp;
	int choice=1;
	while(choice!=NULL){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter the value :- ");
		scanf("%d",&newnode->data);
		newnode->prev=NULL;
		newnode->next=NULL;
		
		if(head==NULL){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp = newnode;
		}
		printf("Want to insert new value press '1' :- ");
		scanf("%d",&choice);
	}
}

void traverse(){
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
