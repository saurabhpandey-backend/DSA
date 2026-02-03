#include<stdio.h>

int main(){
	int a[3],i;   // the a is always contain the base address of array.
	int *b =a;    // here pointer *b contain the base address od array.
	printf("enter the number \n");
	for(i=0;i<3;i++){
		scanf("%d",(a+i)); // base address of a + size of data type 	
//		scanf("%d",&a[i]); // normal form
	}
	
//	for printint base address of array
printf("%d\n",a);
printf("%d\n",b);


//	for(i=0;i<3;i++){
//		printf("%d\n",b);	//here printing the address of array a who's stored in pointer b
//		b++;
//	}	
//	printf("%d",*a+1); // base address of a is 100 + 1 = 104 
	
//	printf("%d\n",a+1); // here prints address of second element
//	printf("%d\n",&a+1); // here if the the array has contain 3 element then and frist address is 100 the last is 108 then the 108+1 is 112 
//																														is the answer.

//printf("%d\n",&a[0]+1);
//printf("%d\n",*(a+1));
//printf("%d\n",*a+1);

for(i=0;i<3;i++){
	printf("%d\n",i[a]);   // here i[a] equals to *(i+a)
}
}
