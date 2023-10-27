#include<stdio.h>
int main(){
    int a,b,c,d,e;
    float percentage;
    printf("enter the numbers of five subjects: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    percentage=(a+b+c+d+e)/5;
    printf("percentage is %f",percentage);
    if(percentage<100 && percentage>=90)
            printf("A");
    else if(percentage<90 && percentage>=80)
        printf("B");
    else if(percentage>=60 && percentage<80)
        printf("C");
    else
      printf("not in Range");
    return 0;
}