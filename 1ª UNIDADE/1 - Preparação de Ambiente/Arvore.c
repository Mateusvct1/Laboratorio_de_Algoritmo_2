#include <stdio.h>
#include <stdlib.h>

struct No
{
    int info;
    struct No *esq;
    struct No *dir;
};

int main(){
    struct No *raiz = (struct No *)malloc(sizeof(struct No));
    raiz->info = 10;
    raiz->esq = NULL;
    
    raiz->dir = (struct No *)malloc(sizeof(struct No));
    raiz->dir->info = 20;
    raiz->dir->esq = NULL;
    raiz->dir->dir = NULL;
}


#include <stdio.h>
#include <stdlib.h>

// 

struct No
{
    int info;
    struct No *esq;
    struct No *dir;
};

struct No *criarNo(int info){
    struct No* novo = (struct No *) malloc(sizeof(struct No));
    novo-> info =info;
    novo-> esq = NULL;
    novo-> dir = NULL; 
}

struct No *Inserir(struct No * raiz, int valor){
    if(raiz == NULL){
        return criarNo(valor);
    }else if (valor > raiz -> info){
        raiz->dir = Inseri(raiz->dir,valor);
    }else if ( valor < raiz -> info){
        raiz->esq  =Inserir(raiz->esq,valor);
    }
    return raiz;
}
int maior(int a, int b){
   return (a>b)? a:b;
}

int altura(struct No* raiz){
    if (raiz == NULL){
        return -1;
    }else{
        return maior(altura(raiz->dir), altura(raiz->esq))+1;
    }
}

int main(){
    struct No *raiz = (criarNo(10));
    //raiz->dir = criarNo(20);
    raiz = Inserir(raiz,20);
    raiz = Inserir(raiz,30);

    
}

