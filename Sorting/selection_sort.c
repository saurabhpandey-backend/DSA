#include<stdio.h>
int main(){
	int a[10],i,j,k,n,temp;
	printf("how many elements you have - ");
	scanf("%d",&n);
	printf("Enter the elements :-\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[k]){
				k=j;
			}
		}
		if(k!=i){
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		}
//  also i use the sort funtion like this
//		if(k!=i){
//			swap(a[i],a[k]);
//		}

	}
	
	
	printf("\nafter\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}

