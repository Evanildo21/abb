#include <stdio.h>
#include "inserir.h"


void pos_ordem(no *aux){

      printf(" %d ", aux->chave);

    if(aux->esq != NULL){
        pos_ordem(aux->esq);
    }
    if(aux->dir != NULL){
        pos_ordem(aux->dir);
    }
  
}



int main(void) {
no *raiz=NULL;
 inserir(30,&raiz);
 inserir(10,&raiz);
 inserir(90,&raiz);
 inserir(50,&raiz);
pos_ordem(raiz);

  return 0;
}