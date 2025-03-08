#include "mxm.c"
#define Linhas_MAX 100
#define Colunas_Max 100

int main(){
    int** A = aloca_matrix(Linhas_MAX,Colunas_Max);
    int** B = aloca_matrix(Linhas_MAX,Colunas_Max);

    preenche_matrz_aleatorio(A,Linhas_MAX,Colunas_Max);
    fflush(stdin);
    preenche_matrz_aleatorio(B,Linhas_MAX,Colunas_Max);
    fflush(stdin);
    printf("Matriz A\n");
    imprime_matriz(A,Linhas_MAX,Colunas_Max);
    printf("\nMatriz B\n");
    imprime_matriz(B,Linhas_MAX,Colunas_Max);

    int escolha;
    printf("\nEscolha o método de multiplicação\n");
    printf("1 - Convencional\n");
    printf("2 - Epsilon\n");
    printf("3 - Zeta\n");
    printf("4 - Repo\n");
    
    scanf("%d",&escolha);
    switch (escolha){
    case 1:
        int** C = mxm(A,B,Linhas_MAX,Colunas_Max,Linhas_MAX,Colunas_Max);
        printf("\nMatriz Resultante da Multiplicação(Convencional)\n");
        imprime_matriz(C,Linhas_MAX,Colunas_Max);
        libera_matriz(C,Linhas_MAX);
        break;
    
    case 2:
        int** C2 = mxm_Epsilon(A,B,Linhas_MAX,Colunas_Max,Linhas_MAX,Colunas_Max);
        printf("\nMatriz Resultante da Multiplicação(Epsilon)\n");
        imprime_matriz(C2,Linhas_MAX,Colunas_Max);
        libera_matriz(C2,Linhas_MAX);
        break;
    
    case 3:
        int** C3 = mxm_Zeta(A,B,Linhas_MAX,Colunas_Max,Linhas_MAX,Colunas_Max);
        printf("\nMatriz Resultante da Multiplicação(Zeta)\n");
        imprime_matriz(C3,Linhas_MAX,Colunas_Max);
        libera_matriz(C3,Linhas_MAX);
        break;

    case 4:
        int** C4 = mxm_Repo(A,B,Linhas_MAX,Colunas_Max,Linhas_MAX,Colunas_Max);
        printf("\nMatriz Resultante da Multiplicação(Repo)\n");
        imprime_matriz(C4,Linhas_MAX,Colunas_Max);
        libera_matriz(C4,Linhas_MAX);
        break;

    default:
        break;
    }

    libera_matriz(A,Linhas_MAX);
    libera_matriz(B,Linhas_MAX);

}
