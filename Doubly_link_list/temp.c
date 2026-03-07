#include<stdio.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *newnode,*head=NULL,*prevnode,*temp;

void create();
void traverse();
void del_start();
void del_last();
void del_pos();

int main(){
	create();
	traverse();
//	del_start();
//	traverse();
//	del_last();
//	traverse();
	del_pos();
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

void del_start(){
	temp=head;
	head=head->next;
	free(temp);
	temp=head;
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

void del_pos(){
	temp=head;
	int pos,i=1;
	while(i<pos-1){
		prevnode=temp;
		temp=temp->next;
		i++;
	}
	prevnode=temp->next;
	temp->next->prev=prevnode;
	free(temp);
}
void traverse(){
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}