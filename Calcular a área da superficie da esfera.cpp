#include <stdio.h>
#include<locale.h>

void calcularEsfera(float raio, float *area, float *volume) {
    *area = 4 * 3.1415 * (raio * raio);

    *volume = (4.0 / 3.0) * 3.1415 * (raio * raio * raio);
}

int main() {

    setlocale(LC_ALL,"portuguese");

    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calcularEsfera(raio, &area, &volume);

    printf("Área da superfície: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
