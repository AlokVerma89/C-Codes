#include<stdio.h>
int main()
{
    int arr[10],n,max;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>0;i--){
        max = i;
        for(int j=i-1;j>=0;j--){
            if(arr[max]<arr[j])
            max = j;
        }        
        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
    printf("Sorted array :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
} 