#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1},n,count=0;
    printf("Enter the element of array: ");
    scanf("%d",&n); 
    for(int i=0;i<5;i++)
    {
        if(arr[i]>n)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}