#include <stdio.h>

int main()
{
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    // o primeiro valor a ser exibido será a posição da memoria em que p aponta, sendo apresentada em Hexadecimal, em função do %x, no contexto da questão será o valor 4094.
    // o segundo valor a ser exibido será o conteudo da memoria em que p aponta + 2, no caso 5+2=7.
    // o terceiro valor a ser exibido será o conteudo do conteudo do endereço de p, que no caso será o próprio i.
    // o quarto valor a ser exibido será o conteudo da memoria em que p aponta multiplicado por 3, no caso 5*3=15.
    // o quinto valor a ser exibido será o conteudo do conteudo do endereço de p somado a 4, com isso será 5+4=9.

    return 0;

}
