#include<stdio.h>


int invert(int x,int p,int n){
    int mask=((1<<n)-1)<<p;
    return x^mask;
}

int main(){
    int x=64;
    int p=3;
    int n=2;
    printf("%d\n",invert(x,p,n));
}