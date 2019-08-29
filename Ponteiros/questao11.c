#include <stdio.h>

int main(){
  char x1[4];
  int x2[4];
  float x3[4];
  double x4[4];

  //Para variável do tipo char

  printf("%d, %d, %d, %d \n", x1, x1+1, x1+2, x1+3);
  printf("\n");

  //Valores impressos: 6422044, 6422045, 6422046, 6422047. Como pode ser visto o char ocupou um 1 byte.


  //Para variável do tipo int
  printf("%d, %d, %d, %d \n", x2, x2+1, x2+2, x2+3);
  printf("\n");

  //Valores impressos: 6422016, 6422020, 6422024, 6422028. Como pode ser visto o int ocupou um 4 bytes.

  //Para variável do tipo float
  printf("%d, %d, %d, %d \n", x3, x3+1, x3+2, x3+3);
  printf("\n");

   //Valores impressos: 6422000, 6422004, 6422008, 6422012. Como pode ser visto o float ocupou um 4 bytes.

  //Para variável do tipo double
  printf("%d, %d, %d, %d \n", x4, x4+1, x4+2, x4+3);
  printf("\n");

   //Valores impressos: 6421968, 6421976, 6421984, 6421992. Como pode ser visto o double ocupou um 8 bytes.

return 0;
}

