#include <stdio.h>

int main() {
    int array[5];
    int *p = array;

    printf("\n--- Aritmetica de Ponteiros - Posicoes com Valores Pares ---\n\n");

    printf("\nDigite 5 Valores:\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o Numero %d: ", i + 1); 
        scanf("%d", p + i); 
    }

    printf("\n------------------------------\n");

    printf("\nEnderecos dos Valores Pares:\n\n");
    for (int i = 0; i < 5; i++)
    {
        if (*(p + i) % 2 == 0)
        {
            printf("Valor: %d | Endereco: %p\n", *(p +i ), (void *)(p + i)); 
        }
    }
    return 0;
}
