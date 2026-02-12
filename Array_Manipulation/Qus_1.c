//  Write the program to read the value for the elements of a one dimensional array 
//  of integers and then sorts it in the ascending order, example :- minimum to maximum

#include<stdio.h>
#include<conio.h>

void insert(int arr[]);
void sort(int arr[]);
void dis(int arr[]);

int main(){
//	clrscr();
	int arr[5];
	insert(arr);
	dis(arr);
	sort(arr);
	dis(arr);
	getch();
	return 0;
}

void sort(int arr[5]){
	int i,j,n=5,temp;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(arr[i]>arr[j+1]){
			int temp;
			temp=arr[j+1];
			arr[j+1]=arr[i];
			arr[i]=temp;
			}	
		}
	}
}

void insert(int arr[5]){
	int i,n=5;
	printf("Enter the five no. :- \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n");
}

void dis(int arr[5]){
	int i,n=5;
	printf("\n");
	for(i=0;i<=n;i++){
		printf("%d",arr[i]);
	}
}


//This is in only main()
//#include<stdio.h>
//int main(){
//	int arr[5];
//	int i,j,n=5;
//	printf("Enter the five no. :- \n");
//	for(i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	
//	for(i=0;i<n;i++){
//		printf("%d",arr[i]);
//	}
//	printf("\n");
//	for(i=0;i<n;i++){
//		for(j=i;j<n;j++){
//			if(arr[i]>arr[j+1]){
//			int temp;
//			temp=arr[j+1];
//			arr[j+1]=arr[i];
//			arr[i]=temp;
//			}	
//		}
//	}
//	for(i=0;i<=n;i++){
//		printf("%d",arr[i]);
//	}
//}



