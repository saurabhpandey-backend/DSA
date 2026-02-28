#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *head=NULL,*newnode,*temp;
void create();
void traverse();
void delete_pos();

int main(){
	create();
	traverse();
	int n;
	printf("\n del desire element press '1'\n otherwise '0' :- ");
	printf("");
	printf("");
	scanf("%d",&n);
	if(n==1){
		delete_pos();	
		traverse();
	}
	else{
		printf("ok");
		traverse();
	}
}

void create(){

	int choice = 1;
	
	while(choice!=0){
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter the value :-  ");
		scanf("%d",&newnode->info);
		newnode->next = NULL;
		
		if(head == NULL){
			head = temp = newnode;
		}	
		else{
			temp->next=newnode;
			temp=newnode;
		}
		printf("want to insert new value press 1 otherwise 0 :- ");
		scanf("%d",&choice);
	}
}

void delete_pos(){
	struct node *nextnode;
	int pos,i=1;
	temp = head;
	printf("enter the postion :- ");
	scanf("%d",&pos);
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
	
}

void traverse(){
	temp=head;
	while(temp != NULL){
		printf("%d ",temp->info);
		temp= temp->next;
	}
}
