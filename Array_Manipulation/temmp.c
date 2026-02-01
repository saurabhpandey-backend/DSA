#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 5
#define len 40
int main(){
	int dex;
	int enter = 0;
	char name[len];
	static char list[max][len] = {"Saurabh","Dipika","Sristi","Shambhvi","Balika"};
	printf("Enter your name :");
	gets(name);
	for(dex=0;dex<max;dex++){
		if(strcmp(&list[dex][0],name) == 0){
			enter=1;
			if(enter==1){
				printf("\n");
				puts(name);
				printf("You may enter plese.");
			}
		}
		else{
			printf("\n");
			puts(name);
			printf("Sorry! You may not allowed to enter.");
		}
	}
}


//the program is for print ASCII value for every word 
//int main(){
//	int i;
//	char fname[15];
//	printf("Enter your word : ");
//	scanf("%s",&fname);
//	printf("Your word is %s\n",fname);
//	printf("this is the ASCII value = \n");
//	for(i=0;fname[i]!='\0';i++){
//		printf("%c = %d ",fname[i],fname[i]);
//	}
//}


//this is for use gets and puts for string manipulation
//int main(){
//	char greet[]= "Namaste", fname[15];
//	puts("Enter your name : ");
//	gets(fname);
//	puts(greet);
//	puts(fname);
//}


//this is for take string from user and print that
//int main(){
//	char fname[15];
//	printf("Enter your name : ");
//	scanf("%s",&fname);
//	printf("Namaste %s",fname);
//}
