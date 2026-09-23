#include <stdio.h>

int main() {
    int a, *b, **c, ***d;
    int dobro, triplo, quadruplo;

    printf("\n--- Aritmetica de Ponteiros - Dobro, o Triplo e o Quadruplo ---\n\n");

    printf("Digite um numero: ");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    dobro = *b * 2;
    triplo = **c * 3;
    quadruplo = ***d * 4;

    printf("\n");
    printf("Dobro de [%d]: %d\n", a, dobro);
    printf("Triplo de [%d]: %d\n", a, triplo);
    printf("Quadruplo de [%d]: %d\n", a, quadruplo);

    return 0;
}