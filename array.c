#include<stdio.h>
#include<conio.h>
#define max 10

void insert(int *);
void dis(int *);
void pinsert(int *arr,int pos,int num);

int main(){
	int arr[max];
	printf("insert the data/n");
	insert(arr);
	dis(arr);
}

//this is for inserting value in array linner way (left to reigt)
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

