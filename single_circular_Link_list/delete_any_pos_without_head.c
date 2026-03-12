#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *tail,*newnode,*temp,*current,*prev;

void create();
void traverse();
void del_pos();
int main(){
	create();
	traverse();
	del_pos();
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

void  traverse(){
	temp=tail->next;
	do{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=tail->next);	
}