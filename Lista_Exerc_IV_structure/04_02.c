#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

struct Retangulo {
    struct Ponto superiorEsquerdo;
    struct Ponto inferiorDireito;
};

int main() {
    struct Retangulo retangulo;

    float largura, altura;
    float area, perimetro, diagonal;

    printf("\n--- Retangulo ---\n\n");

    printf("Digite o X do ponto superior esquerdo: ");
    scanf("%f", &retangulo.superiorEsquerdo.x);

    printf("Digite o Y do ponto superior esquerdo: ");
    scanf("%f", &retangulo.superiorEsquerdo.y);

    printf("Digite o X do ponto inferior direito: ");
    scanf("%f", &retangulo.inferiorDireito.x);

    printf("Digite o Y do ponto inferior direito: ");
    scanf("%f", &retangulo.inferiorDireito.y);

    largura = retangulo.inferiorDireito.x - retangulo.superiorEsquerdo.x;
    altura = retangulo.superiorEsquerdo.y - retangulo.inferiorDireito.y;

    area = largura * altura;

    perimetro = 2 * (largura + altura);

    diagonal = sqrt(largura * largura + altura * altura);

    printf("\n--- Resultados ---\n");
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}   