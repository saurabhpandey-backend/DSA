#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *head=NULL,*newnode,*temp;
void create();
void traverse();
void ins_after();

int main(){
	create();
	traverse();
	int n;
	printf("\n wants to insert on any after element press '1'\n otherwise '0' :-");
	scanf("%d",&n);
	if(n==1){
		ins_after();	
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

void ins_after(){
	temp=head;
	int n,*p;
	printf("enter the value");
	newnode=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&newnode->info);
	
	printf("Which after position want's to insert :- ");
	scanf("%d",&n);
	while(temp->info!=n){
		temp=temp->next;
	}
	p=temp->next;
	newnode->next=p;	
	temp->next=newnode;
	
}

void traverse(){
	temp=head;
	while(temp != NULL){
		printf("%d ",temp->info);
		temp= temp->next;
	}
}
