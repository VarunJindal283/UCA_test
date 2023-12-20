#include<stdio.h>
#include<stdbool.h>


int sign(int x){
    int signBit=(x>>31)&1;
    int isZero=!x;
    if(signBit==0){
        if(isZero){
            return 0;
        }
        return 1;
    }
    return -1;
}

int main(){
    printf("%d\n",sign(130));
    printf("%d\n",sign(-26));
}