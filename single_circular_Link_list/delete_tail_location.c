#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;	
};

struct node *head=NULL,*newnode,*temp,*tail;

void create();
void traverse();
void del_tail();

int main(){
	create();
	traverse();
	del_tail();
	traverse();
}

void create(){
	int choice=1;
	while(choice!=0){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter the value :- ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->next=head;
			temp=tail=newnode;
		}
		printf("press 1 for newnode :- ");
		scanf("%d",&choice);
	}	
}

void del_tail(){
	temp=head;
	while(temp->next!=tail){
		temp=temp->next;
	}
	temp->next=tail->next;
	free(tail);
	tail=temp;
	printf("\ntail loaction is delete and move to prev\n");
}

void traverse(){
	temp=head;
	while(head!=temp->next){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d ",temp->data);
}