#include<stdio.h>
#define SIZE 10
typedef struct stack{
    int arr[SIZE];
    int Top;
   
}stack;
stack stk;

int isEmpty(){
    return stk.Top==-1;
}
int isFull(){
    return stk.Top==SIZE-1;
}

void Push(int num){
    if(! isFull()){
        stk.Top++;
        stk.arr[stk.Top]=num;

    }
    else{
        printf("Stack is full\n");
    }
}
int POP(){
    if(! isEmpty()){
        int item;
        item=stk.arr[stk.Top];
        stk.Top--;
        return item;
    }

}
void Show(){
    if(! isEmpty()){
        for(int i=stk.Top;i>=0;i--){
            printf("%d\n",stk.arr[i]);
        }
    }
    else{
        printf("Stack is Empty");
    }
}
int peep(){
    if(!isEmpty())
      return stk.arr[stk.Top];
    printf("Stack is Empty");
    return -1;
}
int main()
{
    int num;
    stk.Top=-1;
    printf("Enter any number");
    scanf("%d",&num);
    while(num>0)
    {
        Push(num%16);
        num/=16;
    }
    printf("\nBinary=");

    while(!isEmpty())
    {
        printf("%d",POP());
    }
}