// tried on leetcode
// to run this code on leetcode please firstly remove these include packages and main() function.
#include<stdio.h>
#include<stdbool.h>
#include<string.h>


bool isValid(char* s) {
    size_t length=strlen(s);
    char stack[length];
    int size=0;
    for(int i=0;i<length;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            stack[size++]=s[i];
        }
        else{
            if(size==0) return false;
            else{
                if(s[i]==')' && stack[--size]!='('){
                    return false;
                }
                else if(s[i]=='}' && stack[--size]!='{'){
                    return false;
                }
                else if(s[i]==']' && stack[--size]!='['){
                    return false;
                }
            }
        }
    }
    if(size==0){
        return true;
    }
    return false;
}

int main(){
    char arr1[]="()";
    char arr2[]="()[]{}";
    char arr3[]="(]";

    printf("%d\n",isValid(arr1));
    printf("%d\n",isValid(arr2));
    printf("%d\n",isValid(arr3));
}