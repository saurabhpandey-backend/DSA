#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *tail,*temp,*newnode;

void create();
void traverse();
int get_len();
void ins_head();
void ins_tail();
void ins_pos();
void del_head();
void del_tail();

int main(){
	int choice;
	create();
	traverse();
	printf("\npress 1 for create list press 2 for insert at head 3 for insert at tail 4 for any position");
	printf("\n5
	 for delete head 6 for delete tail");	
	scanf("%d",&choice);
	switch(choice){
		case 1 :
			ins_head();
			traverse();
			break;
		case 2 :
			ins_tail();
			traverse();
			break;
		case 3 :
			ins_pos();
			traverse();
			break;
		case 4 :
			del_head();
			traverse();
			break;
		case 5 :
			del_tail();
			traverse();
			break;
	}	
}

void create(){
	int choice =1;
	while(choice!=0){
		newnode= (struct node *)malloc(sizeof(struct node));
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
			tail=newnode;
		}
		printf("Press 1 for new data :- ");
		scanf("%d",&choice);
	}
}

void ins_head(){
	temp=tail->next;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data :- ");
	scanf("%d",&newnode->data);
	if(tail==NULL){
		tail=temp=newnode;
		tail->next=newnode;
		tail->prev=newnode;
	}
	else{
		newnode->next=temp->next;
		newnode->prev=tail;
		temp->prev=newnode;
		tail->next=newnode;
		temp=newnode;
	}
}

void ins_tail(){
	temp=tail;
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
		tail->next->prev=newnode;
		tail->next=newnode;
		tail=newnode;
	}
}

void ins_pos(){
	temp=tail->next;
	int pos,i=0;
	int l=get_len();
	printf("Enter the position :- ");
	scanf("%d",&pos);
	if(pos<0 || pos>l+1){
		printf("Invalide Position Entered !\n");
		return;
	}
	else if(pos==1){
		ins_head();
		return;
	}
	else if(pos==l+1){
		ins_tail();
		return;
	}
	else{
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
	}
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data :- ");
	scanf("%d",&newnode->data);
	newnode->next=temp->next;
	newnode->prev=temp->prev;
	temp->next->prev=newnode;
	temp->next=newnode;
}

void del_head(){
	if(tail==NULL){
		printf("List have no data");
		return;
	}
	temp=tail->next;
	tail->next=temp->next;
	temp->next->prev=tail;
	free(temp);
}

void del_tail(){
	if(tail==NULL){
		printf("List have no data");
		return;
	}
	temp=tail->prev;
	temp->next=tail->next;
	tail->next->prev=temp;
	free(tail);
	tail=temp;
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

void traverse(){
	temp=tail->next;
	while(temp!=tail){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}