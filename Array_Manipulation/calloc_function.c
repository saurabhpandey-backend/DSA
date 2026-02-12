//Using the calloc Function
//it is contigues memory allocation used to dynamically allocate multiple block of memory
//and each block is of same size
// all the block initilize zero in the memory when no value is entered or initilized

#include<stdio.h>
#include<stdlib.h>  // for dyanamic mamory allocation

int main(){
	int i,n,*p;
	printf("How many no. Store ? \n");
	scanf("%d",&n);
	p = (int *) calloc(n, sizeof(int));  // void* calloc(no. of block, size of the datatype)  
	
	printf("before value entered\n");
	for(i=0;i<n;i++){
		printf("%d : %d\n",i,*(p+i)); // here i am showing auto allocte 0 (zero) before value entered
	}
	
	printf("Enter the element :\n");
	for(i=0;i<n;i++){
		scanf("%d",(p+i)); // (p+i) means if p have address 2000 and i have 1 then answer is 2004 according to the data type.
	}
	printf("after value entered\n");
	for(i=0;i<n;i++){
		printf("%d",*(p+i));
	}
	
	free(p);
	
	printf("\nafter free the memory\n");
	for(i=0;i<n;i++){
		printf("%d : %d\n",i,*(p+i));
	}
}
