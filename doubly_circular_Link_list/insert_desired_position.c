#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node* next;
};

void create();
void traverse();
void ins_head();
void ins_tail();
int get_len();
void ins_pos();

struct node *tail,*newnode,*temp;

int main(){
	create();
	traverse();
	ins_pos();
	traverse();
}

void create(){
	int choice=1;
	while(choice!=0){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter the data :- ");
		scanf("%d",&newnode->data);
		if(tail==NULL){
			tail=temp=newnode;
			tail->next=newnode;
			tail->prev=newnode;
		}
		else{
			newnode->next=tail->next;
			newnode->prev=tail;
//			temp->prev=newnode;
			tail->next->prev=newnode;
			tail->next=newnode;
			tail=newnode;
		}
		printf("press 1 for new data :- ");
		scanf("%d",&choice);
	}
}

void ins_head(){
	temp=tail->next;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nInsert at head \n");
	printf("Enter the data :- ");
	scanf("%d",&newnode->data);
	if(tail==NULL){
		tail=temp=newnode;
		tail->next=newnode;
		tail->prev=newnode;
	}
	else{
		newnode->next=tail->next;
		newnode->prev=tail;
		tail->next->prev=newnode;
		tail->next=newnode;
	}
}

void ins_tail(){
	temp=tail;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nInsert at tail \n");
	printf("Enter the data :- ");
	scanf("%d",&newnode->data);
	if(tail==NULL){
		tail=temp=newnode;
		tail->next=newnode;
		tail->prev=newnode;
	}
	else{
		newnode->next=tail->next;
		newnode->prev=tail;
		tail->next=newnode;
		tail=newnode;
	}
}

int get_len(){
	temp=tail->next;
	int len=0;
	if(tail==NULL){
		return -1;
	}
	else{
		while(temp!=tail){
		temp=temp->next;
		len++;
	}	
	len++;	
	}
	return len;
}

void ins_pos(){
	int pos,i=0;
	int len = get_len();
	printf("\nEnter the position :- ");
	scanf("%d",&pos);
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter the data :- ");
	scanf("%d",&newnode->data);
	if(pos<0 || pos>len){
		printf("\nInvalid Position");
		free(newnode);
		return;
	}
	else if(pos==1){
		ins_head();
		return;
	}
	else{
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
	}
	newnode->next=temp->next;
	newnode->prev=temp;
	temp->next->prev=newnode;
	temp->next=newnode;
}

void traverse(){
	temp=tail->next;
	while(temp!=tail){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}