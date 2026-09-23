    #include <stdio.h>

    void numPerfeito(int n) {
        if (n <= 1)
        {
            printf("Numero Invalido");
        }

        int soma_div = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                soma_div += i;
            }
        }
        
        if (soma_div == n)
        {
            printf("1");
        } else {
            printf("0");
        }
    }

    int main() {
        int num;

        printf(" \n--- Numero Perfeito ---\n\n ");

        printf("Digite um Numero: ");
        scanf("%d", &num);

        numPerfeito(num);

        return 0;
    }