#include <stdio.h>

int main(void) {
    int n, igual;
    printf("Quantos numeros tera seu vetor? ");
    scanf("%d", &n);
    printf("vetor 1: ");
    int vetor1[n], vetor2[n];
    for (int i = 0; i < n; i++ ) {
        scanf("%d", &vetor1[i]);
    }
    printf("Vetor 2:  ");
    for (int i = 0; i < n; i++ ) {
        scanf("%d", &vetor2[i]);
    }

    int invert[n];
    for (int i = 0; i < n; i++) {
        invert[i] = vetor2[n - i - 1];
    }

    for (int i = 0; i < n; i++) {
        if (vetor1[i] != invert[i]) {
            igual = 0;
            break;
        }
    }

    if (igual) {
        printf("Vetores sao palindromos\n");
    } else {
        printf("Vetores sao diferentes\n");
    }

    return 0;
}