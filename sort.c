#include<stdio.h>
#define max 4

void insert(int *);
void dis(int *);
void dupli(int *);
void sort(int *);

int main(){
	int arr[4];
	insert(arr);
	dis(arr);
	dupli(arr);
	dis(arr);
	sort(arr);
	dis(arr);
}

void insert(int *arr){
	int i,n=4;
	printf("now enter the element\n");
	for(i=0;i<=n;i++) {
		scanf("%d",&arr[i]);
	}
}

void dis(int *arr){
	int i,n=4;
	for(i=0;i<=n;i++) {
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

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
void sort(int *arr){
	int i,j,k,n=5,temp;
	printf("sorted array\n");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
