#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node* next;
};

void create();
void traverse();
int get_len();
void del_head();
void del_pos();

struct node *tail,*newnode,*temp;

int main(){
	create();
	traverse();
	del_pos();
	printf("\n");
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

void del_head(){
	printf("\nDelete the head");
	if(tail==NULL){
		printf("\nEmpty Link List");
		return;
	}
	else{
		temp=tail->next;
		tail->next=temp->next;
		free(temp);
	}
}

void del_pos(){
	int pos,i=0;
	int len = get_len();
	printf("\nEnter the position :- ");
	scanf("%d",&pos);
	if(pos<0 || pos>len){
		printf("\nInvalid Position");
		return;
	}
	else if(pos==1){
		del_head();
		return;
	}
	else{
		while(i<pos){
			temp=temp->next;
			i++;
		}
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	if(temp==tail->next->prev){
		tail=temp->prev;
		free(temp);
	}
	else{
		free(temp);
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

void traverse(){
	temp=tail->next;
	while(temp!=tail){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}