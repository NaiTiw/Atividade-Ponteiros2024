#include <stdio.h>
#include<locale.h>

int main() {
setlocale(LC_ALL,"portuguese");

    int var1, var2;

    printf("\nDigite o valor da variavel a: ");
    scanf("%d", &var1);
    printf("Digite o valor da variavel b: ");
    scanf("%d", &var2);

    printf("\nO endere�o da variavel a �: %d", &var1);
    printf("\nO endere�o da variavel b �: %d", &var2);
    printf("\nO conte�da na variavel a �: %d", var1);
    printf("\nO conte�do na variavel b �: %d\n", var2);

    if (&var1 > &var2) {
        printf("\nConteudo no maior endereco: %d\n", var1);
    } else {
        printf("\nConteudo no maior endereco: %d\n", var2);
    }

    return 0;
}
