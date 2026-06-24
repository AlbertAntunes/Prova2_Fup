#include <stdio.h>
#include <stdlib.h>


 int main() {
    int n, i, count = 0;
    float *vetor, media = 0.0;
    printf("Digite o tamanho do vetor: ");

    scanf("%d", &n);
    vetor = (float *)malloc(n * sizeof(float));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
        media += vetor[i];
    }

    media /= n;

    for (i = 0; i < n; i++) {
        if (vetor[i] > media) {
            count++;
        }

    }
    printf("Media: %.2f\n", media);
    printf("Quantidade de elementos acima da media: %d\n", count);
    free(vetor);


     return 0;
 }


