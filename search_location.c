#include<stdio.h>
#include<conio.h>
#define max 10

void insert(int *);
void dis(int *);
void pinsert(int *,int,int);
void search(int *,int);

int main(){
	int arr[max],pos;
	printf("insert the data\n");
	insert(arr);
	dis(arr);
	printf("enter the value which postion you want to check\n");
	scanf("%d",&pos);
	search(arr,pos);
}

//this is for inserting value in array linner way
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
	for(i=0;i<=max;i++){
		if(arr[i]<=0){
			break;
		}
		else{
			printf("%d\t",arr[i]);
		}
	}
	printf("\n");
}

void search(int *arr,int num){
	int i,pos=0;
	for(i=0;i<=max;i++){
		if(arr[i]<=0){
			break;
		}
		else{
			if(arr[i]==num){
				printf("postion of %d is %d",num,pos+1);
			}
		}
		pos++;
	}
}
