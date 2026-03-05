#include<stdio.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head=NULL,*newnode,*temp;
void create();
void traverse();
void insert();
int main(){
	int choise;
	create();
	traverse();
	printf("\ndo you want to insert data on head press 1 :-");
	scanf("%d",&choise);
	if(choise==1){
		insert();
		traverse();	
	}
	else{
		printf("\nok\n");
		traverse();
	}
}

void create(){
	head=temp;
	int choice=1;
	while(choice!=NULL){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter the value :- ");
		scanf("%d",&newnode->data);
		newnode->prev=NULL;
		newnode->next=NULL;
		
		if(head==NULL){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp = newnode;
		}
		printf("Want to insert new value press '1' :- ");
		scanf("%d",&choice);
	}
}

void ins
	temp=head;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter the value :- ");
	scanf("%d",&newnode->data);
	newnode->next=head;
	newnode->prev=NULL;
	temp=temp->next;
	temp->prev=newnode;
	head=newnode;
}

void traverse(){
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
