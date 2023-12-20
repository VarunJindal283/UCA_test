#include<stdio.h>


int bitXor(int x,int y){
    return (~(x&y))&(~(~x&~y));
};


int main(){
    int a=4;
    int b=5;
    printf("%d",bitXor(a,b));
}