#include <stdio.h>

void verificaTriangulo(float x, float y, float z) {
    if ((x < y + z) && (y < x + z) && (z < x + y)) {

        if ((x == y) && (y == z)) {
            printf("Triangulo Equilatero\n");
        }
        else if ((x == y) || x == z || (y == z)) {
            printf("Triangulo Isosceles\n");
        }
        else {
            printf("Triangulo Escaleno\n");
        }

    } else {
        printf("Os valores nao formam um triangulo.\n");
    }
}

int main() {
    float x, y, z;

    printf("\n--- Verificacao de Triangulo ---\n\n");

    printf("Digite o valor de X: ");
    scanf("%f", &x);

    printf("Digite o valor de Y: ");
    scanf("%f", &y);

    printf("Digite o valor de Z: ");
    scanf("%f", &z);

    verificaTriangulo(x, y, z);

    return 0;
}