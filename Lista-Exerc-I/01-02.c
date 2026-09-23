#include <stdio.h>
#include <math.h>

void calc_baskara(float a, float b, float c) {
    float delta = 0, x1 = 0, x2 = 0;

    // Calcular Delta 
    delta = pow(b, 2) - (4 * a * c);
    printf("\nDelta = %.2f", delta);

    if (delta < 0)
    {
        printf("A equacao nao possui raizes reais.\n");

    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("\nRaiz 1 (x1) = %.2f", x1);
        printf("\nRaiz 2 (x2) = %.2f", x2);
    }
}

int main() {
    float a, b, c;

    printf(" \n--- Formula de Baskara ---\n\n");
    
    printf("Digite o Valor de a: ");
    scanf("%f", &a);

    printf("Digite o Valor de b: ");
    scanf("%f", &b);

    printf("Digite o Valor de c: ");
    scanf("%f", &c);

    calc_baskara(a, b, c);

    return 0;
}