#include <stdio.h>
int main()
{
  int x;
  int *ptr;
  x = 5;
  ptr = &x;
  printf("O valor da vari�vel X �: %d\n", *ptr);  // derreferenciando um ponteiro
  *ptr = 10;  // usando derreferencia no "lado esquerdo" de uma atribui��o
  printf("Agora, X vale: %d\n", x);
}
