//program to demonstrating array of strctures initialization
#include<stdio.h>

struct emp{
	char name[20];
	int emp_id;
	float sal;
};

//this is the way "one" to insert the data in struture 
//struct emp empl[2] = {
//	{"Dipika",1904,100000.1},
//	{"Saurabh",3053,200000.1}
//};

//int main(){
//	printf("Employee Id :- %d \n",empl[0].emp_id);
//	printf("Employee Name :- %s \n",empl[0].name);
//	printf("Employee Salery :- %f \n",empl[0].sal);
//	printf("Employee Id :- %d \n",empl[1].emp_id);
//	printf("Employee Name :- %s \n",empl[1].name);
//	printf("Employee Salery :- %f \n",empl[1].sal);
//}

//this is the way "two" to insert the data in struture 
//int main(){
//	struct emp e1;
//	
//	strcpy(e1.name,"Dipika");
//	e1.emp_id=1904;
//	e1.sal=50000.1;
//		
//	printf("Employee Id :- %d \n",e1.emp_id);
//	printf("Employee Name :- %s \n",e1.name);
//	printf("Employee Salery :- %f \n",e1.sal);
//}

//this is the way "three" to insert the data in struture 
int main(){
	struct emp e1 = {
		.name = "Dipika",
		.emp_id=1904,
		.sal=50000.1	
	};
	
	printf("Employee Id :- %d \n",e1.emp_id);
	printf("Employee Name :- %s \n",e1.name);
	printf("Employee Salery :- %f \n",e1.sal);
}

