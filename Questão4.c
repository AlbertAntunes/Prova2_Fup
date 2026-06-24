#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int existeTriangulo(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 0; 
    }
    
    if (a < b + c && a > abs(b - c) && b < a + c && b > abs(a - c) && c < a + b && c > abs(a - b)) {
        return 1; 
    } else {
        return 0; 
    }
}
int main() {
    int a, b, c;
    
    printf("Digite os três lados do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (existeTriangulo(a, b, c)) {
        printf("Os lados podem formar um triângulo.\n");
    } else {
        printf("Os lados não podem formar um triângulo.\n");
    }
    
    return 0;
}
