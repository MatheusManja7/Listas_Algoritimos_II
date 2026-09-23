#include <stdio.h>

void converter_Segundos(int tempo_s) {
    int horas, min, segundos;

    horas = tempo_s / 3600;
    min = (tempo_s % 3600) / 60;
    segundos = tempo_s % 60;

    printf("\nTempo de Duracao: %dh:%dm:%ds", horas, min, segundos);

}

int main() {
    int temp_s;

    printf(" \n--- Segundos em Horas ---\n\n");

    printf("Digite o Tempo de Duracao em Segundos (Ex: 3600): ");
    scanf("%d", &temp_s);

    converter_Segundos(temp_s);

    return(0);
}