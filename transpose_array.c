#include<stdio.h>
//#include<conio.h>

int main(){
	
	int i,j,n=3;
	int a[3][3];
	int b[3][3];
	
	printf("enter the number for matrix a\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
//	
	printf("marix A\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;i<n;j++){
			b[i][j]=a[j][i];
		}
	}
	
	printf("matrix B\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
