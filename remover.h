#define remover_h
#ifdef remover_h
#include "buscar.h"
#include <stdlib.h>

void remover(int chave , no **ptraiz){
   no **ponteiro_aux = ptraiz;
  int f;
  buscar(chave,&ponteiro_aux,&f);
    if(f!=1){printf("elemento não existe! ");}
    else{
        no *lixo_excluido = (*ponteiro_aux);
        if((*ponteiro_aux)->esq==NULL){ (*ponteiro_aux) = (*ponteiro_aux) -> dir;}
        else{ 
            if((*ponteiro_aux)->dir==NULL){ (*ponteiro_aux) = (*ponteiro_aux)->esq;}
            else{
                no *pt_secundario = (*ponteiro_aux)->dir;
                if(pt_secundario!= NULL){
                    no *Pai_pt_secundario;
                    while(pt_secundario!=NULL){
                       Pai_pt_secundario = pt_secundario;
                       pt_secundario = pt_secundario->esq;
                    }
                    Pai_pt_secundario->esq = pt_secundario->dir;
                    pt_secundario->dir = (*ponteiro_aux)->dir;
                }
                pt_secundario->esq=(*ponteiro_aux)->esq;
                (*ponteiro_aux) = pt_secundario ;

            }
        }
     free(lixo_excluido);
    }

}
#endif