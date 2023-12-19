#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int longestValidParentheses(char* s) {
    size_t n=strlen(s);
    if(n==0){
        return 0;
    }
    char arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        int startingBracket=0;
        int endingBracket=0;
        for(int j=i;j<n;j++){
            if(s[j]=='('){
                startingBracket++;
            }
            else{
                endingBracket++;
            }
            if(endingBracket>startingBracket){
                break;
                i=j;
            }
            else if(endingBracket==startingBracket && endingBracket+startingBracket>max){
                max=endingBracket+startingBracket;
            }
        }
    }
    return max;
}

int main(){
    char arr1[]="(()";
    char arr2[]=")()())";
    char arr3[]="";

    printf("%d\n",longestValidParentheses(arr1));
    printf("%d\n",longestValidParentheses(arr2));
    printf("%d\n",longestValidParentheses(arr3));
}