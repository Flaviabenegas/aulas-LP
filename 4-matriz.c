#include <stdio.h>

int main(void) {
    int m, n;

    // Lendo dimensões da matriz
    printf("Quantas linhas da matriz? ");
    scanf("%d", &m);
    printf("Quantas colunas da matriz? ");
    scanf("%d", &n);

    int mat[m][n], matNova[m][n];

    // Lendo os elementos da matriz original
    printf("Agora digite os numeros da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            matNova[i][j] = mat[i][j];  // Copia os elementos para a matriz nova
        }
    }

    // Arrays auxiliares para marcar as linhas e colunas que devem ser zeradas
    int linhas[m], colunas[n];
    for (int i = 0; i < m; i++) linhas[i] = 0;
    for (int j = 0; j < n; j++) colunas[j] = 0;

    // Identificando quais linhas e colunas devem ser zeradas
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 0) {
                linhas[i] = 1; // Marca a linha
                colunas[j] = 1; // Marca a coluna
            }
        }
    }

    // Zerando as linhas e colunas na matriz nova
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (linhas[i] == 1 || colunas[j] == 1) {
                matNova[i][j] = 0;
            }
        }
    }

    // Exibindo a matriz original
    printf("\nMatriz original:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Exibindo a matriz modificada
    printf("\nMatriz modificada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matNova[i][j]);
        }
        printf("\n");
    }

    return 0;
}
