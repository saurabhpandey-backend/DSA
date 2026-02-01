#include<stdio.h>
#define max 2
struct emp{
	char name[20];
	int id;
	float sal;
};

int main(){
	
	struct emp e1[max] = {
		{
		.name = "Dipika",
		.id = 1904,
		.sal = 500000
		},
		
		{
		.name = "Saurabh",
		.id = 3053,
		.sal = 500000
		}
	};
	
	int i;
	for(i=0;i<max;i++){
		printf("Employee name :- %s\n",e1[i].name);
		printf("Employee Id :- %d\n",e1[i].id);
		printf("Employee salary :- %f\n",e1[i].sal);
	}
}s
