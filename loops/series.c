#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 1, n, x, i, fact = 1;
    printf("enter the value of x and n: ");
    scanf("%d%d", &x, &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + pow(-x, i) / fact;
    }
    printf("%d", sum);

    return 0;
}