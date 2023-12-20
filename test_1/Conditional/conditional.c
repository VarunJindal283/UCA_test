#include<stdio.h>


int conditional(int x,int y,int z){
    int condition=(!!x);
    int mask=~condition+1;
    return (mask&y)|(~mask&z);
}

int main(){
    int x=0;
    int y=4;
    int z=5;
    printf("%d\n",conditional(x,y,z));
}