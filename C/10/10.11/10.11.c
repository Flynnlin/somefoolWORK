#include<stdio.h>
int main(){
    int a[10],i,*p;
    p=a;
    for(i=0;i<10;i++){
        *(p+i)=i;
    }
    for(i=0;i<10;i++){
        printf("a[%d]=%d\n",i,*(p+i));
    }
}