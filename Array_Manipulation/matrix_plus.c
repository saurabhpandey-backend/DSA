#include<stdio.h>
#include<conio.h>

int main(){
	clrscr();
	int i,j,n=3;
	int a[3][3],b[3][3],c[3][3];
	
	printf("enter the number for matrix a\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the number for matrix b\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("marix A\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("matrix B\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
//	here this is matrix plus.
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("matrix C\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
