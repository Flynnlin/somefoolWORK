#include<stdio.h>
main(){
	static char st1[30]="My name is ";
	int st2[10];
	printf("input your name\n");
	gets(st2);
	strcat(st1,st2);
	puts(st1);
} 
