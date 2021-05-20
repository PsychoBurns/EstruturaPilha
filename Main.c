#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void) {
  Pilha *p = (Pilha*)malloc(sizeof(pilha));

  empilhar(p, 1);
  empilhar(p, 2);
  empilhar(p, 3);
  
  exibirPilha();

  printf("Desenfileirando:\n\n");
  printf("%i\n", desempilhar());
  printf("%i\n", desempilhar());
  printf("%i\n", desempilhar());

  printf("\n\n");



  esvaziarPilha();

  return 0;
}