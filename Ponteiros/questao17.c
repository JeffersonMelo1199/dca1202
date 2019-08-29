#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

// definicção da função de comparação do qsort, função essa que define como será o ordenamento (crescente, decrescente, etc).
int comparador(const void *a, const void *b){
    if(*(int*)a == *(int*)b) //quando o contéudo do ponteiro de duas variáveis forem iguais, retorna zero.
        return 0;
    else if (*(int*)a <*(int*)b) //quando o contúdo do ponteiro da variável 'a' for menor que 'b', retorna -1.
        return -1;
    else
        return 1; //Quando o conteúdo do ponteiro da variável 'a' for menor que 'b', retorna 1.
}

int main(){
    clock_t cmc_t, fim_t;
    int tam=100000, *x, *y; // vetor com muito elementos para dar um tempo consideravel.
    //declaração do ponteiro para função
    int (*ptrfunc)(int,int);
    ptrfunc = &compare;

    // alocação de memória para os vetores.
    x=(int*)malloc(tam * sizeof(int));
    y=(int*)malloc(tam * sizeof(int));

    //Preenche os vetores aleatoriamente
    for (int i=0; i<tam; i++){
        x[i]= rand() % 100;
    }
    for (int i=0; i<tam; i++){
        y[i]= rand() % 100;
    }

    //inicia a contagem de tempo da função jmsort
    cmc_t = clock();
    // chamada da função jmsort
    jmsort(x, tam, ptrfunc); // chamada da funcao jmsort
    //finaliza a contagem de tempo de execucao da função jmsort
    fim_t = clock();
    printf("tempo do jmsort: %fseg\n", (double)(fim_t - cmc_t / CLOCKS_PER_SEC));

    //inicia a contagem de tempo da função qsort
    cmc_t = clock();
    qsort(y, tam, sizeof (int), comparador); // chamada da funcao qsort
    //finaliza a contagem de tempo de execucao da função qssort
    fim_t = clock();

    printf("tempo do qsort: %fseg\n", (double)(fim_t - cmc_t / CLOCKS_PER_SEC));


    // libera a memoria alocada
    free(x);
    free(y);
    return 0;
}
