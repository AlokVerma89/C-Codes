#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){printf("yes it is bro");}
    else{printf("no bro it is not");}
    return 0;
}