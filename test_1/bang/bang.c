#include<stdio.h>


int bang(int x){
    int negX=~x+1;
    int signBits=(x|negX)>>31;
    return (~(signBits)&1);
}

int main(){
    int x=3;
    printf("%d\n",bang(x));
}