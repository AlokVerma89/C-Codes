#include <stdio.h>
int main()
{
    int x = 3, y, z;
    y = x = 10;
    z = x < 10;
    printf("\nx=%dy=%d", x, y, z);
}