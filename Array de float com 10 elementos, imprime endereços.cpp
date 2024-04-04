#include <stdio.h>
#include<locale.h>


int main() {

    setlocale(LC_ALL,"portuguese");

    float vet[10];

    printf("Digite os valores dos 10 elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%f", &vet[i]);
    }

    printf("\nEndereços de memória de cada posição do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %d: %p =  valor: %f\n", i+1, (void*)&vet[i], vet[i]);
    }

    return 0;
}
