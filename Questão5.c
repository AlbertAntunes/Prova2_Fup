#include <stdio.h>

void incrementa(int *x) {
    (*x)++;
}

int main() {
    int x = 5;
    printf("Antes %d\n", x);
    incrementa(&x);
    printf("Depois %d\n", x);
    return 0;
}
