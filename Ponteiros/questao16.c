#include <stdio.h>
#include <stdlib.h>

// definição da função compare, que será chamada pela função de ordenação através do ponteiro para função
int compare(int a, int b) {
    return (a - b);
}
// definição da função de ordenação que tem como parâmetros um ponteiro que aponta a posição da memoria do primeiro elemento do vetor
// a ser ordenado, o tamanho do vetor e um ponteiro para a função compare.
void jmsort(int *x, int tam, int (*ptrfunc)(int,int)) {
    int aux;
    //ordenador
    for(int j=tam-1;j>=1;j--){
        for(int i=0; i<j; i++){
            if(x[i]>x[i+1]){
                aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux;
            }
        }
    }
}
int main()
{
    int tam, *x;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    //declaração do ponteiro para função
    int (*ptrfunc)(int,int);
    ptrfunc = &compare;

    // alocação de memória para o vetor.
    x= (int*)malloc(tam*sizeof(int));

    // Insere os elementos do vetor
    for (int i=0; i<tam; i++){
        printf("Informe o elemento %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("Vetor nao ordenado:\n");
    for (int i=0; i<tam; i++) {
        printf("%d ", x[i]);
    }
    // chamada da função jmsort
    jmsort(x, tam, ptrfunc);
    printf("\nVetor ordenado:\n");
    for (int i=0; i<tam; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    // libera a memoria alocada
    free(x);
    return 0;
}
