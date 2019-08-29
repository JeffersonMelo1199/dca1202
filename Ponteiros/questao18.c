#include <stdio.h>
#include <stdlib.h>

void soma_vetorial(int *v1, int *v2 , int *v3, int n){

    for(int i=0; i<n; i++){
        v3[i]=v1[i]+v2[i];
    }

    for(int i=0; i<n; i++){
        printf("%d ",v3[i]);
    }
}

int main(){
    int *v1, *v2, *v3, n;
       printf("Informe a quantidade de elementos dos vetores: ");
       scanf("%d", &n);
       v1 = malloc(n*sizeof(int));
       v2 = malloc(n*sizeof(int));
       v3 = malloc(n*sizeof(int));
       printf("\nInforme os valores do vetor 1 \n");
       for(int i=0; i<n; i++){
           printf("Informe o valor %d: ", i);
           scanf("%d", &v1[i]);
       }
       printf("\nInforme os valores do vetor 2 \n");
       for(int i=0; i<n; i++){
           printf("Informe o valor %d: ", i);
           scanf("%d", &v2[i]);
       }
       soma_vetorial(v1, v2, v3, n);

       free(v1);
       free(v2);
       free(v3);
       return 0;
}
