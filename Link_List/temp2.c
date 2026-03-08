#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *head=NULL,*newnode,*temp;
void create();
void traverse();
void ins_start();
void ins_last();
void ins_after();
void del_start();
void del_last();
void del_after();
void start();
void last_del();
void find_len();
void reverse();

int main(){
	create();
	traverse();
	int n;
	printf("\n wants to insert \n in Start press '1'\n on last press '2'\n any after element press '3'\n del first element press '4'\n del last element press '5'\n del desire element press '6'\n Find length press '7'\n reversed list press '8'\n otherwise '0' :- ");
	scanf("%d",&n);
	if(n==1){
//		start_ins();
//		ins_start();
		start();	
		traverse();
	}
	else if(n==2){
		ins_last();	
		traverse();
	}
	else if(n==3){
		ins_after();	
		traverse();
	}
	else if(n==4){
		del_start();	
		traverse();
	}
	else if(n==5){
//		del_last();	
		last_del();
		traverse();
	}
	else if(n==6){
		delete_pos();	
		traverse();
	}
	else if (n==7){
		find_len();
		traverse();
	}
	else if(n==8){
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

void start_ins(){
	temp = head;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the value :-");
	scanf("%d",&newnode->info);
	
	if(head == NULL){
		newnode->next=NULL;
		head = temp = newnode;
	}
	else{
		newnode->next= temp;
		head = temp = newnode;
	}
}

//here i found new second way to insert node in head
void ins_start(){
	temp=head;
	newnode= (struct node*)malloc(sizeof(struct node));
	printf("enter the element :- ");
	scanf("%d",&newnode->info);
	newnode->next=temp;
	head=temp= newnode;
	temp=head;
}

//here i found third new way to insert node in head
void start(){
	temp=head;
	newnode= (struct node*)malloc(sizeof(struct node));
	printf("enter the element :- ");
	scanf("%d",&newnode->info);
	newnode->next=head;
	head=temp= newnode;
}

void ins_last(){
	temp=head;
	printf("enter the value");
	newnode=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&newnode->info);
	newnode->next=NULL;
	if(temp==NULL){
		head=temp=newnode;
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;	
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


void del_start(){
	temp=head;
	temp=temp->next;
	free(head);
	head = temp;
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

void delete_pos(){
	struct node *nextnode;
	int pos,i=1;
	temp = head;
	printf("enter the postion :- ");
	scanf("%d",&pos);
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);	
}

void find_len(){
	int len=1;
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		len++;
	}
	printf("total no. of node and lenth is %d\n",len);
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
