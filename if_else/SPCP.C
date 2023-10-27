#include<stdio.h>
int main(){
    int sp;
    int cp;
    printf("enter the value of sp and cp");
    scanf("%d%d",&sp,&cp);
    if(sp>cp){printf("profit");}
    if(cp>sp){printf("loss");}
    return 0;
}   