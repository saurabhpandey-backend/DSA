#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *tail,*newnode,*temp,*current,*prev,*nextnode;

void create();
void traverse();
void del_pos();
void pos_del();
int main(){
	create();
	traverse();
//	del_pos();
	pos_del();
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
	printf("\nEnter the data :- ");
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

void ins_tail(){
	temp= tail;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data for tail :- ");
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
}

void ins_pos(){
	temp=tail->next;	
	printf("\nEnter the pos :- ");
	int pos,i=1;
	scanf("%d",&pos);
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nenter the data for position %d :- ",pos);
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}

void del_pos(){
	int pos,i=1;
	printf("\nEnter the position :- ");
	scanf("%d",&pos);
	current = tail->next;
	while(i<pos){
		prev=current;
		current=current->next;
		i++;
	}
	prev->next=current->next;
	free(current);
}

// here i found the new way to del node to any position
void pos_del(){
	int pos,i=1;
	printf("\nEnter the position :- ");
	scanf("%d",&pos);
	current = tail->next;
	while(i<pos-1){
		current=current->next;
		i++;
	}
	nextnode=current->next;
	current->next=nextnode->next;
	free(nextnode);
}

void  traverse(){
	temp=tail->next;
	do{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=tail->next);	
}