#include <stdio.h>

int main()
{
    int i,j;
    int *p, *q;

    p = i;
    // ilegal pois p recebe somente endereços
    q = &j;
    // legal, q recebe o endereço de memoria da variaval j.
    p = &*&i;
    // legal
    i = (*&)j;
    // ilegal
    i = *&j;
    // legal, será apresentado o conteudo de j.
    i = *&*&j;
    //legal, será apresentado o conteudo de j.
    q = *p;
    // ilegal, pois q é um ponteiro, e por isso ele recebe apenas endereços e *p retorna o conteudo da memoria em que p aponta.
    i = (*p)++ + *q;
    //legal, o i receberá o conteudo de memoria o qual p aponta, esse valor será incrementado em 1, e apos isso somado ao conteudo de memoria o qual q aponta.

    return 0;
}
