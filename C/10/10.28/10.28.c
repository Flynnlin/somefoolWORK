#include <stdio.h>
int main(){
    static int a[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
    char *PF;
    PF="%d,%d,%d,%d,%d\n";
    printf(PF,a,*a,a[0],&a[0],&a[0][0]);
    printf(PF,a+1,*(a+1),a[1],&a[1],&a[1][0]);
}