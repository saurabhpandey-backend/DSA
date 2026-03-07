#include<stdio.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *newnode,*head=NULL,*next,*temp;

void create();
void traverse();
void del_start();

int main(){
	create();
	traverse();
	del_last();
	traverse();
}

void create(){
	int choice=1;
	while(choice){
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter the data :- ");
		scanf("%d",&newnode->data);
		if(head==NULL){
			head=temp=newnode;
		}
		else{
			newnode->prev=temp;
			temp->next=newnode;
			temp=newnode;
			newnode->next=NULL;
		}
		printf("Enter new node press '1' :- ");
		scanf("%d",&choice);
	}
}

void del_last(){
	temp=head;
	struct node *prev;
	while(temp!=NULL){
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	temp=NULL;
}
void traverse(){
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}