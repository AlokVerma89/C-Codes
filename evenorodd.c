#include<stdio.h>
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    (a%2==0)?printf("yes it is a even number"):printf("it is a odd number");
    return 0;
}