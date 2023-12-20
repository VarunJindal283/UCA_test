#include<stdio.h>


int getByte(int x,int n){
    int shiftAmount=n<<3;
    int extractByte=(x>>shiftAmount)&(0xFF);
    return extractByte;
}

int main(){
    int x=0x12345678;
    int n=1;
    printf("%d\n",getByte(x,n));
    printf("%d\n",0x56);
}