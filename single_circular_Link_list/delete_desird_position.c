#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;	
};

struct node *head=NULL,*newnode,*temp,*tail,*prev_node;

void create();
void traverse();
void del_head();
void del_pos();
int get_len();

int main(){
	create();
	traverse();
	del_pos();
	traverse();
}

void create(){
	int choice=1;
	while(choice!=0){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter the value :- ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->next=head;
			temp=tail=newnode;
		}
		printf("press 1 for newnode :- ");
		scanf("%d",&choice);
	}	
}

void del_head(){
	temp=head;
	tail->next=head->next;
	head=head->next;
	free(temp);
	printf("\nhead loaction is delete and move to next\n");
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
			prev_node=temp;
			temp=temp->next;
			i++;
		}
	}
	prev_node->next=temp->next;
	if(tail->next==head){
		tail=prev_node;
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
	temp=head;
	while(head!=temp->next){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d ",temp->data);
}