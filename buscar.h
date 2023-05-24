#define buscar_h
#ifdef  buscar_h
#include <stdio.h>
typedef struct No{
int chave;
struct No*esq;
struct No *dir;}no;

void buscar(int x,no ***pt,int *f){
  if((*(*pt))==NULL){
    (*f)=0;}
  else{
      if(x == (*(*pt))->chave){
        (*f)=1;}
      else{
          if(x < (*(*pt))->chave){
              if((*(*pt))->esq==NULL){
                (*f)=2;
              }else{ 
              (*pt)=&(*(*pt))->esq;
              buscar(x,pt,f);}
          }
          else{
              if((*(*pt))->dir==NULL){
                (*f)=3;
              }else{ 
              (*pt)=&(*(*pt))->dir;
              buscar(x,pt,f);}
            
          }
      }
    }
} 
#endif