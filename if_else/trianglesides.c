#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the lenght of three sides");
    scanf("%d%d%d", &a, &b, &c);

    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        printf(" VAlid Triangle");
    }
    else
    {
        printf("Not Valid");
    }

    return 0;
}