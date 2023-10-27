#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    //max=a>b?a:b;
   // max=max>c?max:c;
   (a>b&&a>c)?printf("a is greater"):(b>c)?printf("b is greater",b):printf("c is greater",c);

//printf("%d",max);
}