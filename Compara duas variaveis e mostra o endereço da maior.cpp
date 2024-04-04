#include <stdio.h>
#include<locale.h>

int main() {
setlocale(LC_ALL,"portuguese");

    int var1, var2;

    printf("\nDigite o valor da variavel a: ");
    scanf("%d", &var1);
    printf("Digite o valor da variavel b: ");
    scanf("%d", &var2);

    printf("\nO endereço da variavel a é: %d", &var1);
    printf("\nO endereço da variavel b é: %d", &var2);
    printf("\nO conteúda na variavel a é: %d", var1);
    printf("\nO conteúdo na variavel b é: %d\n", var2);

    if (&var1 > &var2) {
        printf("\nConteudo no maior endereco: %d\n", var1);
    } else {
        printf("\nConteudo no maior endereco: %d\n", var2);
    }

    return 0;
}
