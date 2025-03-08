#include <stdio.h>
#include <stdlib.h>
#define LIMITE 1024

void preenche_matrz_aleatorio(int **matriz, int n,int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            matriz[i][j] = rand() % LIMITE;
        }
    }
}

int** aloca_matrix(int n, int m){
    int** matriz = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        matriz[i] = (int*) malloc(m * sizeof(int));
    }
    return matriz;
}

void libera_matriz(int** matriz, int n){
    for (int i = 0; i < n; i++){
        free(matriz[i]);
    }
}

void imprime_matriz(int** matriz, int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int ** mxm(int** A, int** B,int ai,int aj,int bi,int bj){
    if (aj != bi){
        printf("Não é possível realizar uma multiplicação de Matriz entre as matrizes informadas");
        return 0;
    }

    int** C = aloca_matrix(ai,bj);
    for (int i = 0; i < ai; i++){
        for(int j = 0; j < bj; j++){
            for (int k = 0; k < aj; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

int** trasmpor(int** A,int ai,int aj){
    int** At = aloca_matrix(aj,ai);

    for(int i = 0; i < ai; i++){
        for (int j = 0; j < aj; j++){
            At[j][i] = A[i][j];
        }
    }
    return At;
}

int** mxm_Epsilon(int** A,int** B, int ai,int aj,int bi,int bj){
    if (aj != bi){
        printf("Não é possível realizar uma multiplicação de Matriz entre as matrizes informadas");
        return 0;
    }
    int** C = aloca_matrix(ai,bj);
    int** Bt = trasmpor(B,bi,bj);

    for (int i = 0; i < ai; i++){
        for (int j = 0; j < bj; j++){
            for (int k = 0; k < aj; k++){
                C[i][j] += A[j][k] * Bt[i][k];
            }
        }
    }
    return trasmpor(C,ai,bj);
}

int** mxm_Zeta(int** A,int** B,int ai,int aj,int bi,int bj){
    if (aj != bi){
        printf("Não é possível realizar uma multiplicação de Matriz entre as matrizes informadas");
        return 0;
    }
    int** C = aloca_matrix(ai,bj);
    int** Bt = trasmpor(B,bi,bj);

    for (int i = 0; i < ai; i++){
        for (int j = 0; j < bj; j++){
            for (int k = 0; k < aj; k++){
                C[i][j] += A[i][k] * Bt[j][k];
            }
        }
    }
    return C;
}

int** mxm_Repo(int** A,int** B,int ai,int aj,int bi,int bj){
    
    if (aj != bi){
        printf("Não é possível realizar uma multiplicação de Matriz entre as matrizes informadas");
        return 0;
    }
    int** C = aloca_matrix(ai,bj);
    for (int i = 0; i < ai; i++) {
        for (int j = 0; j < bj; j++) {
          for (int p = 0; p < aj; p++) {
            C[i][j] += A[i][p] * B[p][j];
          }
        }
    }
    return C;
}