#include<stdio.h>
#include<conio.h>
#define max 4

void insert(int *);
void dis(int *);
void dupli(int []);

int main(){
	int arr[4];
	insert(arr);
	dis(arr);
	dupli(arr);
	dis(arr);
}

void insert(int *arr){
	int i,n=5;
	printf("now enter the element\n");
	for(i=0;i<=n-1;i++) {
		scanf("%d",&arr[i]);
	}
}

void dis(int *arr){
	int i,n=5;
	for(i=0;i<=n;i++) {
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

//this funtion remove the duplicate element in array
//void dupli(int *arr){
//	int i,j,k,n=5;
//	for(i=0;i<=n;i++){
//		for(j=i+1;j<n;j++){
//			if(arr[i]==arr[j]){
//				for(k=j;k<n-1;k++){
//					arr[k]=arr[k+1];
//				}
//				j=j-1;
//				n=n-1;
//			}
//		}
//	}
//}

//this function also remove duplicate but according to my logic 
void dupli(int arr[]){
	int i,j,k,n=5;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(arr[i]==arr[j+1]){
				arr[j+1]=0;
				n--;
				j--;
			}
		}
	}
}
