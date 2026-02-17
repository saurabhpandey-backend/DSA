#include<stdio.h>
void display();
void insert();
void quick(int low,int high);
int partition(int low,int high);
int a[20],low=0,high;

int main(){
	printf("how many element's ? :- ");
	scanf("%d",&high);
	insert();
	display();
	quick(low,high);
	printf("\n");
	display();
}

void insert(){
	printf("Enter the element's :->\n");
	int i;
	for(i=0;i<high;i++){
		scanf("%d",&a[i]);
	}
}

void display(){
	int i;
	for(i=0;i<high+1;i++){
		printf("%d ",a[i]);
	}
}

void quick(low,high){
	if(low<high){
		int loc = partition(low,high);
		quick(low,loc-1);
		quick(loc+1,high);
	}
}

int partition(low,high){
	int start = low;
	int end = high;
	int pivot = a[low];
	
	while(start<end){
		while(a[start]<=pivot){
			start++;
		}
		while(a[end]>pivot){
			end--;
		}
		if(start<end){
			int temp = a[start];
			a[start] = a[end];
			a[end] = temp;
		}
	}
	int temp = a[low];
	a[low]=a[end];
	a[end]=temp;
	return end;
}
