#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define maxtam 3

typedef struct
{
  int vetor[maxtam];
  int topo;
} Pilha;

void iniciaPilha(Pilha *p)
{
  p->topo = -1;
}

int pilhaVazia(Pilha *p)
{
  if (p->topo == -1)
  {
    return 1;
  }
  else
    return 0;
}

int pilhaCheia(Pilha *p)
{
  if (p->topo == maxtam - 1)
  {
    return 1;
  }
  else
    return 0;
}

void empilhar(Pilha *p, int x)
{
  if (pilhaCheia(p) == 1)
  {
    printf("Pilha Cheia \n");
  }
  else
    p->topo++;
  p->vetor[p->topo] = x;
}

void desempilhar(Pilha *p)
{
  int aux;
  if (pilhaVazia(p) == 1)
  {
    printf("Pilha Vazia");
  }
  else
    aux = p->vetor[p->topo];
  p->topo--;
  return aux;
}

void exibirPilha(){
 
}


esvaziarPilha()
{

  while (!pilhaVazia())
  {
    desempilhar();
  }
}