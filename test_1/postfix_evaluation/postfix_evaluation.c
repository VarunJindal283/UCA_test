#include<stdbool.h>
#include<stdio.h>
#include<string.h>


int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int stack[100];
        int top=-1;
        while(true){
            char temp[100];
            scanf("%s",temp);
            if(temp[0]=='?'){
                break;
            }
            else if(temp[0]=='+'){
                int a=stack[top--];
                int b=stack[top--];
                stack[++top]=b+a;
            }
            else if(temp[0]=='-'){
                int a=stack[top--];
                int b=stack[top--];
                stack[++top]=b-a;
            }
            else if(temp[0]=='*'){
                int a=stack[top--];
                int b=stack[top--];
                stack[++top]=b*a;
            }
            else if(temp[0]=='/'){
                int a=stack[top--];
                int b=stack[top--];
                stack[++top]=b/a;
            }
            else{
                top++;
                int n=strlen(temp);
                stack[top]=0;
                for(int x=0;x<n;x++){
                    stack[top]=stack[top]*10+((int)(temp[x])-(int)'0');
                }
                // printf("%d\n",stack[top]);

            }
        }
        printf("%d\n",stack[0]);
    }
}