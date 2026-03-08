#include<stdio.h>
#include<conio.h>
int a[20],n;
void heapsort(int *a,int n);
void maxheap(int *a, int n, int i);
void display();
void insert();

int main(){
	printf("How many Element to enter -> ");
	scanf("%d",&n);
	insert();
	display();
	heapsort(a,n);
	printf("\n");
	display();
}

void heapsort(int *a,int n){
	int i;
	for(i=n/2;n>=1;i--){
		maxheap(a,n,i);
	}
	for(i=n;i>=1;i--){
		int temp = a[1];
		a[1]=a[i];
		a[i]=temp;
		maxheap(a,n,1);
	}
}

void maxheap(int *a,int n,int i){
	int large = i;
	int left = i*2;
	int right = (i*2)+1;
	
	while(left<=n && a[left]>a[large]){
		large = left;
	}
	
	while(right<=n && a[right]>a[large]){
		large = right;
	}
	if(large != i){
		int temp = a[large];
		a[large]=a[i];
		a[i]=temp;
		maxheap(a,n,large);
	}
}

void insert(){
	int i;
	printf("enter the elements :-");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
}

void display(){
	int i;
	for(i=0;i<n;i++){
		printf("%d, ",a[i]);	
	}
}
