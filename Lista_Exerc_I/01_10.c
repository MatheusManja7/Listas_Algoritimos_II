#include <stdio.h>

float calc(int n1, int n2, char s) {
    if (s == '+')
    {
        return n1 + n2;
    }

    else if (s == '-')
    {
        if (n1 > n2)
        {
            return n1 - n2;
        } else {
            return n2 - n1;
        }
    }

    else if (s == '*')
    {
        return n1 * n2;
    }

    else if (s == '/')
    {
        return (float) n1 / n2;
    }

    return 0;
}

int main() {
    int num1, num2;
    char simbulo;
    float resultado;

    printf("\n--- Operacoes ---\n\n");

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("\n--- Tabela de Simbolos ---\n\n");

    printf("| [+] - Soma          |\n");
    printf("| [-] - Subtracao     |\n");
    printf("| [*] - Multiplicacao |\n");
    printf("| [/] - Divisao       |\n\n");

    printf("Digite um simbulo (Operacao): ");
    scanf(" %c", &simbulo);

    resultado = calc(num1, num2, simbulo);

    printf("\nResultado: %.2f\n", resultado);

    return 0;
}