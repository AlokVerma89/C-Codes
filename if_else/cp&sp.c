#include<stdio.h>
int main(){
    int cp,sp,profit,loss;
    printf("enter cp and sp: ");
    scanf("%d%d", &cp,&sp);
    if(sp>cp){
        profit= ((sp-cp)/cp)*100
        printf("your profit is:%d",profit);

    }
    else(cp>sp){
        loss=((cp-sp)/cp)*100
        printf("your loss is:%d",loss);
    }

return 0;  
}