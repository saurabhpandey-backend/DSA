#include<stdio.h>
#include<conio.h>
#define max 4

void insert(int *);
void dis(int *);
void reverse(int *);

int main(){
	int arr[max];
	printf("insert the data/n");
	insert(arr);
	dis(arr);
	reverse(arr);
	printf("\n");
	dis(arr);
}

//this is for inserting value in array linner way (left to right)
void insert(int *arr){
	int i,x,num;
	printf("how many number insert : ");
	scanf("%d",&x);
	for(i=0;i<=x-1;i++){
		scanf("%d",&num);
		arr[i]=num;
	}
}

//this is for display the value of array
void dis(int *arr){
	int i;
	for(i=0;i<=10;i++){
		if(arr[i]<=0){
			break;
		}
		else{
			printf("%d\t",arr[i]);
		}
	}
}

void reverse(int *arr){
	int i,temp;
	for(i=0;i<=max/2;i++){
		temp=arr[i];
		arr[i]=arr[max-i];
		arr[max-i]=temp;
	}
}
