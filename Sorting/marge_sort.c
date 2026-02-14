#include<stdio.h>

void create(int *a);
void print(int *a);
void div(int *a,int low,int);
void marge(int *a,int low,int mid,int high);
int low=0,high;
int a[20],b[20];
int main(){
	printf("How many elements : ");
	scanf("%d",&high);
	create(a);
	print(a);
	div(a,low,high);
	printf("Here is a Sorted useing with Marge sort Algo\n");
	print(a);
}

void div(int *a,int low,int high){
	if(low<high){
		int mid = (low+high)/2;
		div(a,low,mid);
		div(a,mid+1,high);
		marge(a,low,mid,high);	
	}
} 

void marge(int *a,int low,int mid,int high){
	int i = low, j=mid+1, k=low;
	while(i<=mid && j<=high){
		if(a[i]<a[j]){
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	
	if(i>mid){
		while(j<=high){
			b[k]=a[j];
			k++;j++;
		}
	}
	else{
		while(i<=mid){
			b[k]=a[i];
			k++;i++;
		}
	}
	int m;
	
	for(m=low;m<=high;m++){
		a[m]=b[m];
	}
}

void create(int *a){
	int i;
	printf("Enter the number\n");
	for(i=0;i<high;i++){
		scanf("%d",&a[i]);
	}
}
void print(int *a){
	int i;
	for(i=0;i<high;i++){
		printf("%d ",a[i]);
	}
}
ss
