#include <stdio.h>

float calcMedia(float soma, float cont) {
    return soma / cont;
}

int main() {
    float num, soma = 0, cont = 0;
    float media;

    printf("\n--- Media Aritmetica ---\n\n");
    printf("[0] - Encerrar\n\n");

    do {
        printf("Digite um numero: ");
        scanf("%f", &num);

        if (num > 0) {
            soma += num;
            cont++;
        }

    } while (num != 0);

    if (cont > 0) {
        media = calcMedia(soma, cont);
        printf("\nMedia Aritmetica: %.2f\n", media);
    } else {
        printf("\nNenhum valor foi informado.\n");
    }

    return 0;
}