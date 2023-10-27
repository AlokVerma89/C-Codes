#include <stdio.h>
int main()
{
    char babu;
    printf("enter a character");
    scanf("%c", &babu);
    switch (babu)
    {
    case 'a':
        printf("vowel");
        break;

    case 'e':
        printf("vowel");
        break;

    case 'i':
        printf("vowel");
        break;

    case 'o':
        printf("vowel");
        break;

    case 'u':
        printf("vowel");
        break;

    default:
        printf("consonant");
        break;
    }
    return 0;
}