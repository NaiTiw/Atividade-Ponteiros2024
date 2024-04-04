#include <stdio.h>
#include<locale.h>

void encontrarMinMax(int vetor[], int tamanho, int *min, int *max) {
    *min = *max = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *min) {
            *min = vetor[i];
        }
        if (vetor[i] > *max) {
            *max = vetor[i];
        }
    }
}

int main() {

    setlocale(LC_ALL,"portuguese");

    int vetor[100], tamanho, min, max;

    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("\t\nQuais os elementos do vetor: \n\n");
    for (int i = 0; i < tamanho; i++) {
        printf("\t\tElemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    encontrarMinMax(vetor, tamanho, &min, &max);

    printf("\nMenor elemento: %d\n", min);
    printf("Maior elemento: %d\n", max);

    return 0;
}
