#include<stdio.h>
int main(){
    int i,product=1;
    int arr[5];
    printf("enter the 5 element given in an array");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        product=product*arr[i];
    }
    printf("%d",product);
    return 0;
}