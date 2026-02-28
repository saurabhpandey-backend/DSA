#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *head=NULL,*newnode,*temp;
void create();
void traverse();
void reverse();

int main(){
	create();
	traverse();
	int n;
	printf("\n reversed list press '1'\n otherwise '0' :- ");
	scanf("%d",&n);
	if(n==1){
		printf("this is old list :- ");
		traverse();
		printf("\nthis is reverse list :- ");
		reverse();
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


void reverse(){
	struct node *prevnode,*currentnode,*nextnode;
	prevnode=NULL;
	currentnode=nextnode=head;
	
	while(currentnode!=NULL){
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=prevnode;
}
void traverse(){
	temp=head;
	while(temp != NULL){
		printf("%d ",temp->info);
		temp= temp->next;
	}
}
