#include<stdio.h>


int logicalShift(int x,int n){
    int mask=(1<<31)>>(n-1);
    return (x>>n)&(~(mask));
}

int main(){
    int x=0x87654321;
    int n=4;
    printf("%d\n",logicalShift(x,n));
    printf("%d\n",0x8765432);
}