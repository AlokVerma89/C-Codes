#include <stdio.h>

void name(int n) {
    for (int i = 1; i <= n; i++) {
        printf("BOSS\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    name(n); // Corrected function call with an argument
    return 0; // Added return statement
}
