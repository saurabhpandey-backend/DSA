//	write the program to read a matrix size mXn. It then calculates the sum of the values contained 
//	in the element row wise as well as column wise , and then print them.

#include<stdio.h>
int main(){
	int a,b,i,j,n=0;
	printf("Enter the what matrix do you want mXn :-\n");
	scanf("%d %d",&a,&b);
	int arr[a+1][b+1];
	
	printf("Enter the elements is array matrix 3X3 :-\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Here is a matrix :- \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("With row total :- \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			arr[i][3]= arr[i][0]+arr[i][1]+arr[i][2];
		}
	}
	
	for(i=0;i<a;i++){
		for(j=0;j<=b;j++){
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("With col total :- \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			arr[3][n]= arr[0][n]+arr[1][n]+arr[2][n];
			n++;
		}
	}
	
	for(i=0;i<=a;i++){
		for(j=0;j<=b;j++){
			printf("%d    ",arr[i][j]);
		}
		printf("\n");
	}
}
