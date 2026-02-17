#include<stdio.h>

void display();
void insert();
void insertion();
int a[20],n;

int main(){
	printf("How many Element's ? :- ");
	scanf("%d",&n);
	insert();
	display();
	insertion();
	printf("\nAfter Insertion Sort \n");
	display();
}

void insertion(){
	int i;
	for(i=0;i<n;i++){
		int temp = a[i];
		int j = i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}

void display(){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void insert(){
	int i;
	printf("enter the element\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
