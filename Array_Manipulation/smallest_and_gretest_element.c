#include<stdio.h>
#include<conio.h>
#define max 5

void insert(int *);
void dis(int *);
void large(int *);
void small(int *);

int main(){
	int arr[max];
	insert(arr);
	dis(arr);
	large(arr);
	small(arr);
}

//this is for inserting element in array
void insert(int *arr){
	int i,n;
	printf("how many element you want to store in 6 space of array :- ");
	scanf("%d",&n);
	printf("now enter the element\n");
	for(i=0;i<=n-1;i++) {
		scanf("%d",&arr[i]);
	}
}

//this is for display all element
void dis(int *arr){
	int i;
	for(i=0;i<=max;i++) {
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

//this funtion is for found largest value or element in array
void large(int *arr){
	int i,g=arr[0];
	for(i=0;i<=max;i++){
		if(g<arr[i]){
			g=arr[i];
		}
		else{
			continue;
		}
	}
	printf("this number %d is greater in array.\n",g);		
}

//this funtion is for found smallest value or element in array
void small(int *arr){
	int i,g=arr[0];
	for(i=0;i<=max;i++){
		if(g>arr[i]){
			g=arr[i];
		}
		else{
			continue;
		}
	}
	printf("this number %d is smallest in array.",g);
}
