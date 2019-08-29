#include <stdio.h>


/*Um ponteiro para função, como o nome sugere, é um ponteiro que aponta para o endereço de memória de uma função.
  Um ponteiro pra função é declarado da seguinte forma: [Tipo da variável que a função retorna] (*nome do ponteiro) (Lista com os tipos de dados de entrada da função).*/


//exemplo
// definição da função multiplicação.
int mult(int a, int b){
    int ret;
    ret = a*b;
    return ret;
}


int main(){
    int a=30, b=3, x;

    int(*ptrfuncmult)(int, int); //declaração da variável do tipo inteiro para função mult

    ptrfuncmult = &mult; //inicialização da variável do tipo ponteiro para função mult

    x=(*ptrfuncmult)(a, b); // chamada da função mult através do ponteiro pra funcão salvando o valor retornado na variavel x

    printf("\n%d",x);

    return 0;

}
