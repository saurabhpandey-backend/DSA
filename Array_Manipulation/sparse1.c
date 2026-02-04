#include<stdio.h>

int main(){
	int a[3][3];
	int i,j,z,nz=1;
	printf("Enter the element :-\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("a [%d][%d] :- ",i,j,a[i][j]); scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]!=0){
				nz++;
			}
			else{
				z++;
			}
		}
	}
	
	if(nz>z){
		printf("this matrix is Non Sprase");
	}
	else{
		int s[nz][3],k=0;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(a[i][j]!=0){
					s[k][0]=i;
					s[k][1]=j;
					s[k][2]=a[i][j];
					k++;
				}
			}
		}
	printf("this is Sprase Matrix :- \n");
//	printf("%d",nz);
	for(i=0;i<nz-1;i++){
		for(j=0;j<3;j++){
			printf("%d",s[i][j]);
		}
		printf("\n");
	}
	}
	
}
