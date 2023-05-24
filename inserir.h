#define inserir_h
#ifdef  inserir_h
#include <stdlib.h>
#include "buscar.h"


void inserir(int x,no **ptraiz){
  no **pt=ptraiz;
  int f;
  buscar(x,&pt,&f);
  if(f==1){
    printf("elemento existe");
  }else{
    no *novo = (no*)malloc(sizeof(no));
    novo->chave=x;
    novo->dir=novo->esq=NULL;
    if(f==0){
      (*ptraiz)=novo;}
    if(f==2){
      (*pt)->esq=novo;}
     if(f==3){
      (*pt)->dir=novo;
    }
  }
}
#endif