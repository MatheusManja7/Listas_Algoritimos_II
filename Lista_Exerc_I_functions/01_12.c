#include <stdio.h>

void tabuada(int n) {

    for (int i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }

}

int main() {
    int num;

    printf("\n--- Tabuada ---\n\n");

    printf("Digite um numero: ");
    scanf("%d", &num);

    tabuada(num);

    return 0;
}