#include<stdio.h>
void show(int n){
    if(n<=1)
    {
        return 1;
    }
    else{
        printf("%d ",n);
        show(n-1);
        printf("%d",n);
        }

    }
    void main(){
        show(4);
    }