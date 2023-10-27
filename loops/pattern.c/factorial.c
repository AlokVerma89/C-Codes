#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of number :");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    printf("The value of Factorial is :%d", product);

    return 0;
}