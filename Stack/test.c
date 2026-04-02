#include<stdio.h>
#include<stdlib.h>

#define max 9
int stack[max];
int top=-1;
int i=0;

void push();
void pop();
int peek();
void display();

int main(){
	int choice=0,n;
	while(1){
		printf("Press '1' for push '2' for pop '3' for peek '4' for display '5' for exit :- ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("How many push you have :- ");
				scanf("%d",&n);
				while(i<n){
					push();
					i++;			
				}
				display();
				break;
			case 2:
				printf("How many pop you have :- ");
				scanf("%d",&n);
				i=peek();
				while(i>n){
					pop();
					i--;			
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
}

void push(){
	int n;
	printf("enter the data :- ");
	scanf("%d",&n);
	if(top==max-1){
		printf("Stack Overflow !\nNo space in stack.");
		return;
	}
	else{
		top++;
		stack[top]=n;
	}
}

void pop(){
	if(top==-1){
		printf("Stack Underflow !\nNo element in stack.");
		return;
	}
	else{
		stack[top]=0;
		top--;
	}
}

int peek(){
	printf("the stack peek is %d \n",top+1);
	return top+1;
}

void display(){
	int i=top;
	while(i>=0){
		printf("%d ",stack[i]);
		i--;
	}
	printf("\n");
}