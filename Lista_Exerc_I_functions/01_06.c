#include <stdio.h>

char media(float m) {
    if (m >= 0.0 && m <= 4.9) {
        return 'D';
    } 
    else if (m >= 5.0 && m <= 6.9) {
        return 'C';
    } 
    else if (m >= 7.0 && m <= 8.9) {
        return 'B';
    } 
    else if (m >= 9.0 && m <= 10.0) {
        return 'A';
    }

    return 'X'; 
}

int main() {
    float n_media;
    char conceito;

    printf("\n--- Media Final ---\n\n");

    printf("Digite a media do aluno: ");
    scanf("%f", &n_media);

    conceito = media(n_media);

    printf("Conceito: %c\n", conceito);

    return 0;
}