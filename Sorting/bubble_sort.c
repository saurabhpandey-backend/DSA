#include<stdio.h>
void bubble(int *a);
void insert(int *a);
void display(int *a);
int n;
int main(){
	printf("How many Element are ? :- ");
	scanf("%d",&n);
	int a[n];
	insert(a);
	display(a);
	printf("here is a sorted array using Bubble sort Algo \n");
	bubble(a);
	display(a);
}

void bubble(int *a){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void insert(int *a){
	int i;
	printf("enter the elements :- \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

void display(int *a){
	int i;
	printf("the elements are:- ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
