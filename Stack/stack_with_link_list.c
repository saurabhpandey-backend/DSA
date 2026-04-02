#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *prev;	
};

struct node *temp,*newnode,*top=NULL;

int i = 0;
void push();
int peek();
void pop();
void display();

int main(){
	int choice,k,n;
	while(1){
		printf("\nPress '1' for push '2' for pop '3' for peek '4' for display '5' for exit :- ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				i=0;
				printf("How many push you have :- ");
				scanf("%d",&n);
				while(i<n){
					push();
					i++;			
				}
				display();
				break;
			case 2:
				k=0;
				printf("How many pop you have :- ");
				scanf("%d",&n);
//				i=peek();
				while(k>n){
					pop();
					k++;			
				}
				display();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
		}
	}	
//	push();
//	push();
//	push();
//	peek();
//	display();
//	pop();
//	peek();
//	display();
}

void push(){
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data :- ");
	scanf("%d",&newnode->data);
	if(top==NULL){
		newnode->prev=NULL;
	}
	newnode->prev=top;
	top=newnode;
}

void pop(){
	temp=top;
	if(top==NULL){
		printf("Stack underflow");
		return;
	}
	printf("\nvalue poped :- %d\n",top->data);
	top=top->prev;
	free(temp);
}

int peek(){
	temp=top;
	int n;
	if(top==NULL){
		printf("Stack have no value");
		return;
	}
	while(temp!=NULL){
		temp=temp->prev;
		n++;
	}
	printf("Stack have %d value's \n",n);
	return n;
}
	
	
void display(){
	temp=top;
	printf("Stack is :- ");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->prev;
	}
}