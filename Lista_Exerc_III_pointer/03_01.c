#include <stdio.h>
#include <math.h>
#define PI 3.14

void  calcular_esfera(float raio, float *area, float *volume) {
    *area =  4 * PI * pow(raio, 2);
    *volume =  (4.0 / 3.0) * PI * pow(raio, 3);
}

int main() {
    float raio;
    float area, volume;

    printf(" \n--- Raio e Voluma de uma Esfera ---\n\n");

    printf("Digite o valor do Raio: ");
    scanf("%f", &raio);

    calcular_esfera(raio, &area, &volume);

    printf("Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);
    
    return 0;
}