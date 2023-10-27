#include <stdio.h>

int main() {
    int nst = 1;
    int nsp = 3;
    
    for (int i = 1; i <= 4; i++) {
        for (int k = 1; k <= nsp; k++) {
            printf(" ");
        }
        
        for (int j = 1; j <= nst; j++) {
            printf("%d", j);  
        
        printf("\n");
        
        nsp--;     
        nst += 2;  
    }
    
    return 0;
}