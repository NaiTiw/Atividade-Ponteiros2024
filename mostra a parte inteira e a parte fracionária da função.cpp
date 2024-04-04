#include <stdio.h>
#include<locale.h>

void separaPartes(float num, int *parteInteira, float *parteFracionaria) {
    *parteInteira = (int)num;
    *parteFracionaria = num - *parteInteira;
}

int main() {

    setlocale(LC_ALL,"portuguese");

    float numero;
    int parteInteira;
    float parteFracionaria;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    separaPartes(numero, &parteInteira, &parteFracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionária: %.2f\n", parteFracionaria);

    return 0;
}
