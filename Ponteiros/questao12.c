#include <stdio.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value; //Expressão válida
    scanf("%f", &aloha); //Expressão inválida
    aloha = value";  //Expressão inválida
    printf("%f", aloha); //Expressão inválida
    coisas[4][4] = aloha[3]; //Expressão válida
    coisas[5] = aloha; //Expressão inválida
    pf = value; // Expressão inválida
    pf = aloha; // Expressão válida
return 0;
}

