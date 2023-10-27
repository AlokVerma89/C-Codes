#include <stdio.h>
#define size 10

typedef struct stack
{
    int arr[size];
    int top;
}stack;

stack stk;

int main(){
    stk.top=-1;
}

int isempty(){
    return stk.top==-1;
}
int isfull(){
    return stk.top==size-1;
}
void push(int num){
    if(!isfull()){
        stk.top++;
        stk.arr[++stk.top]=num;
    }
    else{
        printf("stack is full");
    }
}
int pop(){
    if(!isempty()){
        int item;
        item=stk.arr[stk.top];
        stk.top--;
        return item;
    }
    else{
        printf("stack is empty");
    }
    return 0;
}
int show(){
    if (!isempty()){
        for(int i=stk.top;i>=0;i--){
            printf("%d",stk.arr[i]);
        }
    }
    else{
        printf("stack is empty");
    }}

int peep(){
    if(!isempty())
        return stk.arr[stk.top];
    printf("stack is empty");
    return -1 ;
}