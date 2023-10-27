#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the ages of ram shyam and ajay");
    scanf("%d%d%d", a, b, c);
    if (a < b)
    {
        if (a < c)
        {
            printf("%d is younger among all", a);
        }
        else
            printf("%d is youngest", c);
    }

    else
        (b < a);
    {
        if (b < c)
            printf("%d is smallest among all", b);
        else
            printf("%d is smallest among all", c);
    }
    return 0;
}
