#include<stdio.h>
#include<conio.h>
#define max 6

void insert(int *);
void dis(int *);
void begin_ins(int *,int);
void end_ins(int *, int);

int main(){
	int arr[max];
	printf("insert the data/n");
	insert(arr);
	dis(arr);
	begin_ins(arr,8);
	printf("\n");
	dis(arr);
	end_ins(arr,5);
	printf("\n");
	dis(arr);
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
}

//here it is for add any element in left side array after done sifting 
void begin_ins(int *arr,int val){
	int i;
	for(i=max;i>=0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=val;
}

//here it is for add any element in blanked area right side array  
void end_ins(int *arr,int val){
	int i;
	for(i=0;i<=max;i++){
		if(arr[i]<=0){
			arr[i]=val;
			break;
		}
	}
}
