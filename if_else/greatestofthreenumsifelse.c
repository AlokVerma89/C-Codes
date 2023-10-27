#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three nums");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("The GReatest number is:%d",a);
    else if(b>c&&b>a)
    printf("The GReatest number is:%d",b);
    else
    printf("The greatest number is:%d",c);
return 0;
}