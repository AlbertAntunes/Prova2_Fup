#include <stdio.h>

int main() {
    int matriz[10][10];
    int i, j;

    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] = i * 10 + j; 
        }
    }

    
    printf("Diagonal Principal:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    printf("Diagonal Secundária:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", matriz[i][9 - i]);
    }
    printf("\n");

    return 0;
}
