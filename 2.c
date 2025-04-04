#include <stdio.h>

int main() {
    int frequencia[101] = {0};
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o numero para a posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < n; i++) {
        int num = vetor[i];
        frequencia[num]++;
    }

    int maisRepetido = 0;
    int maiorQuant = 0;
    int menosRepetido = 101;
    int menorQuant = 101;
    for (int i = 1; i <= 100; i++) {
        if (frequencia[i] > maiorQuant) {
            maiorQuant = frequencia[i];
            maisRepetido = i;
        }
    }
    for (int i = 1; i <= 100; i++) {
        if (frequencia[i] > 0 && frequencia[i] < menorQuant) {
            menorQuant = frequencia[i];
            menosRepetido = i;
        }
    }

    printf("Mais repetido: %d (ocorrencias: %d)\n", maisRepetido, maiorQuant);
    printf("Menos repetido: %d (ocorrencias: %d)\n", menosRepetido, menorQuant);

    return 0;
}