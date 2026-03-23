#include<stdio.h>
#define max 9

void push(int );
int pop();
void display();

int arr[max];
int top=-1,bot=-1;

int main(){
	
	int x,n,i=0;
	while(i<=max){
		printf("\npress '1' for Enter data '2' for pop data '3 for exit':- ");
		scanf("%d",&n);
		switch(n){
			case 1 :
				printf("\nEnter the data :- ");
				scanf("%d",&x);
				push(x);
				break;
			case 2 :
				x=pop();
				printf("\n%d is delete.",x);
				display();
				break;
			case 3:
				printf("\n Final dispaly \n");
				display();
				printf("\nExit !");
				exit(0);	
		}
	}
}

void push(int x){
	if(bot>max){
		printf("Stack is full.");
		return;
	}
	if(top<0){
		top++;
	}
	bot++;
	arr[bot]=x;
}

int pop(){
	int n;
	if(bot<0){
		printf("Stack is empty");
		return -1;
	}
	n=arr[top];
	arr[top]=NULL;
	top++;
	return n;
}

void display(){
	int i;
	printf("\n");
	for(i=0;i<=max;i++){
		printf("%d ",arr[i]);
	}
}