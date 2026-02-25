#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};

struct node *head=NULL,*newnode,*temp;
void create();
void traverse();
void start_ins();

int main(){
	create();
	traverse();
	int n;
	printf("\nwants to insert in Start press 1 ");
	scanf("%d",&n);
	if(n=1){
		start_ins();	
		traverse();
	}
	else{
		printf("ok");
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
		printf("\nwant to insert new value press 1 otherwise 0 :- ");
		scanf("%d",&choice);
	}
}

void start_ins(){
	temp = head;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the value for inserting in Start :- ");
	scanf("%d",&newnode->info);
	
	if(head == NULL){
		newnode->next=NULL;
		head = temp = newnode;
	}
	else{
		newnode->next= temp;
		head = temp = newnode;
	}
}

void traverse(){
	temp = head;
	while(temp != NULL){
		printf("%d ",temp->info);
		temp= temp->next;
	}
}
