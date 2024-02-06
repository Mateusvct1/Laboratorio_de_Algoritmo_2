    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

    struct Dado{
        char nome[50];
        char tel[15];
        char email[30];
    };
    
    struct No{
        struct Dado info;
        struct No* esq;
        struct No* dir;
    };

    struct No* criarNo(struct Dado info){
        struct No* novo = (struct No*)malloc(sizeof(struct No));
        novo->info = info;
        novo->esq = 0;
        novo->dir = 0; 
        return novo;
    }

    struct No* inserir(struct No* raiz, struct Dado info){
        if(raiz == 0){
            return criarNo(info);
        }
        int comparacao = strcmp(info.nome, raiz->info.nome);
        if(comparacao > 0){
            raiz->dir = inserir(raiz->dir, info);
        }else if(comparacao < 0){
            raiz->esq = inserir(raiz->esq, info);
        }
        return raiz;
    }

    int maior(int a, int b){
        return a>b ? a : b;
    }

    int h(struct No* raiz){
        if(raiz == 0){
            return -1;
        }else{
            return maior(h(raiz->esq), h(raiz->dir)) + 1;
        }
    }

    struct Dado criarInfo(char *nome, char* tel, char* email){
        struct Dado p1;
        strcpy(p1.nome, nome);
        strcpy(p1.tel, tel);
        strcpy(p1.email,email);
        return p1;

    }

    int main(){
        struct No *raiz = 0;
        struct Dado p[7];
        p[0] = criarInfo("Joao", "84999999", "joao.lopes@ufersa.edu.br");
        p[1] = criarInfo("Diego", "8482192819", "diego.pereira@ufersa.edu.br");
        p[2] = criarInfo("Paula", "84999999", "paula.lopes@ufersa.edu.br");
        p[3] = criarInfo("Andre", "8482192819", "abdre.pereira@ufersa.edu.br");
        p[4] = criarInfo("Flavia", "84999999", "flavia.lopes@ufersa.edu.br");
        p[5] = criarInfo("Maria", "8482192819", "maria.pereira@ufersa.edu.br");
        p[6] = criarInfo("Renata", "8482192819", "renata.pereira@ufersa.edu.br");
        p[7] = criarInfo("Noemia", "8482192819", "diego.pereira@ufersa.edu.br");
        for (int i = 0; i < 8; i++){
            raiz = inserir(raiz, p[i]);
        }
    }




