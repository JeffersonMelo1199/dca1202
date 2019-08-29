#include <stdio.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("%d\n",  p == &i);
    //vai mostar 1 (true) pois o ponteiro p aponta para o endereço de memoria de i.

    printf("%d\n", *p - *q);
    // o resultado será a subtração do conteúdo de p e q = -2.


    printf("%d\n", **&p);
    // o resultado será o valor que está no endereço que p aponta, será igual a 3.


    printf("%d\n", 3 - *p/(*q) + 7);
    //vai mostrar (3 - (o valor que está no endereço que p aponta dividido pelo valor que está no
    //endereço que q aponta)+ 7).
    //3 - 3/5 + 7 -- como 3/5 não é inteiro 3/5=0, com isso 3-0+7 = 10.

    return 0;
}
