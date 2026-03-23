#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;	
};

struct node *head=NULL,*newnode,*temp,*tail;

void create();
void traverse();
void del_head();

int main(){
	create();
	traverse();
	del_head();
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

void del_head(){
	temp=head;
	tail->next=head->next;
	head=head->next;
	free(temp);
	printf("\nhead loaction is delete and move to next\n");
}
void traverse(){
	temp=head;
	while(head!=temp->next){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d ",temp->data);
}