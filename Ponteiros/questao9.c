#include <stdio.h>


int main(){


    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
        printf("%d ",*(vet+i));
    }
    //Este trecho imprime os elementos do vetor.



    for(i=0;i<3;i++){
        printf("%X ",vet+i);
    }
    //Este trecho imprime o valor do endereço de memória de cada elemento do vetor.



}


