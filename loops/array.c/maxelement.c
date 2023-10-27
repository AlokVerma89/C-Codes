#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={-10,-7,-4,-3,-2,-1,-16};
    int min=INT_MAX;
    for(int i=0;i<7;i++)
    {
        if(min>arr[i])
        { min=arr[i];}
    }
    printf("Minimum element in the array is %d",min);
    return 0;
}