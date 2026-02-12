//Using the malloc Function
// It's like how many value you want to enter at the run time you will tell and that only mamory allocated to you.
#include<stdio.h>
#include<stdlib.h>  // for dyanamic mamory allocation

int main(){
	int i,n,*p;
	printf("How many no. Store ? \n");
	scanf("%d",&n);
	p = (int *) malloc(n * sizeof(int));  // void* malloc(size of the datatype)  
	printf("Enter the element :\n");
	for(i=0;i<n;i++){
		scanf("%d",(p+i)); // (p+i) means if p have address 2000 and i have 1 then answer is 2004 according to the data type.
	}
	for(i=0;i<n;i++){
		printf("%d",*(p+i));
	}
	
	printf("\n");	
	for(i=0;i<n;i++){
		printf("%d :- %d\n",*(p+i),(p+i));  //here is i am printing the memory locations.
	}
	free(p);
	
	printf("\nafter free the memory\n");
	for(i=0;i<n;i++){
		printf("%d\n",*(p+i));
	}
}
// I AM BACK !
