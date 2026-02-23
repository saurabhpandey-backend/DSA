#include<stdio.h>
struct node{
	int info;
	struct node *next;
};

struct node *head=NULL,*newnode,*temp;
void create();
void traverse();

int main(){
	create();
	traverse();
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

void traverse(){
	temp = head;
	while(temp != NULL){
		printf("%d  ",temp->info);
		temp= temp->next;
	}
}
