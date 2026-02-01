#include<stdio.h>
void insert(int *);
void dis(int *);
int max =3;
int main(){
	int i,j,n=3;
	int a[3][3],b[3][3];
	printf("Enter the element for matrix \n");
	insert(a);
	printf("Enter the element for matrix B\n");
	insert(b);
}

void insert(int *arr){
	int i,j,num;
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			scanf("%d",&arr[i][j]);
//			arr[i][j]=num;
		}
	}
}

void dis(int *arr){
	int i,j;
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			printf("%d",arr[i][j]);
		}
	}
}
