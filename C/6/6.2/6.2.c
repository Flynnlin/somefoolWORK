#include<stdio.h>
main(){
	int i,sum=0;
	i=1;
	while(i<=100){
		sum=sum+i++;
	}
	printf("%d\n",sum);
} 
