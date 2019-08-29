#include <stdio.h>
#include <stdlib.h>

// definição da função de multiplicação das matrizes, recebe como parametros os ponteiros que apontam pro endereço
// dos primeiros elementos das 3 matrizes alocadas, o numero de linha e colunas da matriz "a" e o numero de colunas da matriz "b".
void matriz_mult(int **a, int **b, int **c, int nla, int nca, int ncb) {

    int aux=0;
    for(int i=0; i<nla; i++)
    {
        for(int j=0; j<ncb; j++)
        {
            c[i][j]=0;
            for(int k=0; k<nca; k++)
            {
                aux += a[i][k] * b[k][j];
            }
            c[i][j]=aux;
            aux=0;
        }
    }
}

// definição da função de impressão de matrizes, recebe como paramentro o ponteiro que aponta para o endereço do
// primeiro elemento desta matriz e o numero de linhas e colunas desta matriz.
void print_matriz(int **matriz, int nl, int nc) {

    printf("\n");
    for(int i=0; i < nl; i++) {
        printf("  [");
        for(int j=0; j < nc; j++) {
            printf(" %4d ", matriz[i][j]);
        }
        printf("]\n");
    }
    printf("\n");
}

// definição da função que aloca matrizes, recebe como parametro o numero de linhas e colunas da matriz.
int** alloc_matriz(int nl, int nc) {
    int **matriz = (int **)malloc(nl * sizeof(int *));
    for(int i=0; i < nl; i++) {
        matriz[i] = (int *)malloc(nc * sizeof(int));
    }

    return matriz;
}

// definição de uma função auxiliar para preencher matrizes, recebe como parametro o ponteiro que aponta para o endereço do primeiro elemento desta matriz e
// o numero de linhas e colunas desta matriz
void preencher_matriz(int **matriz, int nl, int nc) {
    for(int i = 0; i < nl; i++) {
        for(int j = 0; j < nc; j++){
            matriz[i][j] = i+j;
        }
    }
}

int main() {

    int nla, nca, nlb, ncb;

    printf("insira o numero de linhas da matriz 1: ");
    scanf("%d", &nla);

    printf("insira o numero de colunas da matriz 1: ");
    scanf("%d", &nca);

    printf("insira o numero de linhas da matriz 2: ");
    scanf("%d", &nlb);

    printf("insira o numero de colunas da matriz 2: ");
    scanf("%d", &ncb);

    // chamada da função de alocação das matrizes.
    int **a = alloc_matriz(nla, nca);
    int **b = alloc_matriz(nlb, ncb);
    int **c = alloc_matriz(nla, ncb);

    // chamada da função de preencher as matrizes.
    preencher_matriz(a, nla, nca);
    preencher_matriz(b, nlb, ncb);

    // chamada da função de multiplicação matricial
    matriz_mult(a, b, c, nla, nca, ncb);

    // chamada da função de impressão de matrizes
    printf("\nMatriz A: ");
    print_matriz(a, nla, nca);
    printf("Matriz B: ");
    print_matriz(b, nlb, ncb);
    printf("Matriz C: ");
    print_matriz(c, nla, ncb);

    //liberação das memorias alocadas para as matrizes
    free(a);
    free(b);
    free(c);

    return 0;
}
