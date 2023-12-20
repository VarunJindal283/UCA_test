#include<stdio.h>


int bitAnd(int x,int y){
    return ~(~x|~y);
};


int main(){
    int a=6;
    int b=5;
    printf("%d",bitAnd(a,b));
}