#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *head=NULL,*newnode,*temp;
void create();
void traverse();
void del_last();
void last_del();


int main(){
	create();
	traverse();
	int n;
	printf("\n del last element press '1'\n otherwise '0' :- ");
	printf("");
	printf("");
	scanf("%d",&n);
	if(n==1){
//		del_last();	
		last_del();
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

void del_last(){
	temp=head;
	int *n;
	while(temp->next!=NULL){
		temp=temp->next;
		if(temp->next!=NULL){
			n=temp;
		}
	}
	free(temp);
	temp=n;
	temp->next=NULL;
}

//here i find the new way to delete the last node 
void last_del(){
	struct node *prevnode;
	temp = head;
	while(temp->next!=NULL){
		prevnode = temp;
		temp = temp->next;
	}
	prevnode->next = NULL;
	free(temp);
}

void traverse(){
	temp=head;
	while(temp != NULL){
		printf("%d ",temp->info);
		temp= temp->next;
	}
}
