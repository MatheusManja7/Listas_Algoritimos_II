// Lista - 1: Funções 
#include <stdio.h>
#include <math.h>

#define PI 3.14

float calc_esfera(float r) {
    float volume = 0;

    volume = (4.0 * PI * pow(r, 3)) / 3.0;

    printf("Volume: %.2f", volume);

    return(volume);
}

int main() {
    float raio;

    printf(" \n--- Volume de uma Esfera ---\n\n");

    printf("Digite o Raio: ");
    scanf("%f", &raio);

    calc_esfera(raio);

    return 0;
}