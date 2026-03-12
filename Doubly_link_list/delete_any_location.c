#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head,*temp,*newnode,*tail;

void create();
void traverse();
void del_loc();

int main(){
	create();
	traverse();	
	del_loc();
	traverse();
}

void create(){
	int choice=1;
	while(choice!=0){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter the data :- ");
		scanf("%d",&newnode->data);
		
		if(head==NULL){
			head=temp=newnode;
			newnode->next=NULL;
			newnode->prev=NULL;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			newnode->next=NULL;
			temp=newnode;
			tail=newnode;
		}
		printf("press '1' for new node :- ");
		scanf("%d",&choice);
	}	
}

void del_loc(){	
	temp = head;
	int pos,i=1;
	printf("\nEnter the pos :- ");
	scanf("%d",&pos);
		while(i!=pos){
			temp=temp->next;
			i++;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
}



void traverse(){
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}