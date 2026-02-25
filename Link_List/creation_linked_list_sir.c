//"This program was taught to me by my HOD 'Prof Praveen Sir' in the lecture room."

#include<stdio.h>
struct node{
	int info;
	struct node *next;
};

void insert();
void traverse();

struct node *first=NULL,*last=NULL;

int main(){
	insert();
	traverse();
}

void insert(){
	struct node *p;
	
	while(1){
		p= (struct node *)malloc(sizeof(struct node));
		printf("enter info :- ");
		scanf("%d",&p->info);
		p->next=NULL;
		if(first==NULL){
			first = p;
			last = p;
		}
		else{
			last->next=p;
		}
		printf("enter the 1 for exit ");
		int n ;
		scanf("%d",&n);
		if(n!=1){
			break;
		}
		last->next=NULL;
	}
}

void traverse(){
	struct node *p;
	p=first;
	while(p!=NULL){
		printf("%d",p->info);
		p=p->next;
	}
	printf("NULL");
}


