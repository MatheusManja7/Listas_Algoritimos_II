#include <stdio.h>

struct Hora {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    struct Hora horas[5];
    int maior = 0;

    printf("\n--- Maior Hora ---\n\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Horario %d\n", i + 1);
        printf("Hora: ");
        scanf("%d", &horas[i].hora);
        printf("Minuto: ");
        scanf("%d", &horas[i].minuto);
        printf("Segundo: ");
        scanf("%d", &horas[i].segundo);
        printf("\n");
    }

    for (int i = 1; i < 5; i++) {
        int total_atual = (horas[i].hora * 3600) + (horas[i].minuto * 60) + horas[i].segundo;
        int total_maior = (horas[maior].hora * 3600) + (horas[maior].minuto * 60) + horas[maior].segundo;

        if (total_atual > total_maior) {
            maior = i;
        }
    }

    printf("Maior hora: %02d:%02d:%02d\n", horas[maior].hora, horas[maior].minuto, horas[maior].segundo);

    return 0;
}
