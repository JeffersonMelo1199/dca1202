#include <stdio.h>
#include <stdlib.h>

// definição da função de ordenação, recebendo como parametros a quantidade de elementos do array e o ponteiro que aponta para
// a posição do primeiro termo do array.
void jmsort(int tam, int *x){
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

// definição da função de impressão do array
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
    // Chamada da função de ordenação, passando como parametros a quantidade de elementos do array e o ponteiro que aponta para
    // a posição do primeiro termo do array.
    jmsort(tam, x);
     
    // chamada da função de impressão do array.
    print_array(tam, x);

    // liberação da memoria alocada para o array
    free(x);

    return 0;
}
