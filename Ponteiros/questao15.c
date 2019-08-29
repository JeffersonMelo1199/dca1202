#include <stdio.h>
#include <stdlib.h>

// definicção da função de comparação, função essa que define como será o ordenamento (crescente, decrescente, etc).
int comparador(const void *a, const void *b){
    if(*(int*)a == *(int*)b) //quando o contéudo do ponteiro de duas variáveis forem iguais, retorna zero.
        return 0;
    else if (*(int*)a <*(int*)b) //quando o contúdo do ponteiro da variável 'a' for menor que 'b', retorna -1.
        return -1;
    else
        return 1; //Quando o conteúdo do ponteiro da variável 'a' for menor que 'b', retorna 1.
}

// definição da função de impressão do array.
void print_array(int tam, int *x){
    //funcao para imprimir o array ordenado
    printf("\nArray ordenado:");
    for(int i=0; i<tam; i++){
        printf("%d ",x[i]);
    }
    printf("\n");

}

int main(){
    int tam, *x, aux;
    // Solicitando ao usuário a quantidade de elementos do array
    printf("Informe a quantidade de elementos do array: ");
    scanf("%d", &tam);

    // alocação do array
    x = (int*) malloc(tam*sizeof(int));
    for (int i=0; i<tam; i++){
        printf("Informe o elemento %d: ", i);
        scanf("%d", &x[i]);
    }

    printf("\nArray nao ordenado: ");

    for(int i=0; i<tam; i++){
        printf("%d ",x[i]);
    }
    // chamada da função qsort passando como paramentros o ponteiro que aponta para o primeiro valor do array, a quantidade de elementos
    // do array, o tamanho em bytes de cada elemento do array e a função de comparação que define como será o ordenamento.
    qsort(x, tam, sizeof (int), comparador);

    // chamada da função de impressão do array.
    print_array(tam, x);

    // liberação da memoria alocada para o array
    free(x);

    return 0;
}
