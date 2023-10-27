#include<stdio.h>

int main() {
    int n, i, m, j;
    printf("Enter the rows and columns of the array:\n ");
    scanf("%d%d", &m, &n);
    int arr[m][n];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (j = 0; j < n; j++) {
        if (j % 2 == 0) {
            for (i = m - 1; i >= 0; i--) {
                printf("%d ", arr[i][j]);
            }
        } else {
            for (i = 0; i <= m - 1; i++) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

