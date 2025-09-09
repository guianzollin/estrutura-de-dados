#include <stdio.h>
#include <stdlib.h>

typedef struct sRegistro{
    int valor;
    struct sRegistro *prox;
} REGISTRO;

void inserir(REGISTRO **ref, int valor){
    REGISTRO *p ;
    p = (REGISTRO *) malloc(sizeof(REGISTRO));
    p->valor = valor;
    p->prox = *ref;
    *ref = p;
}

void imprimir(REGISTRO *p){
    while(p != NULL){
        printf("%i -> ", p->valor);
        p = p->prox;
    }
    printf("NULL\n");
}

void excluir(REGISTRO **ref, int valor){

    REGISTRO *atual = *ref;
    REGISTRO *anterior = NULL;

    while(atual != NULL && atual->valor != valor){
        anterior = atual;
        atual = atual->prox;
    }

    if(atual == NULL) {
        printf("Valor %d nao encontrado.\n", valor);
        return;
    }

    if(anterior == NULL){
        *ref = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);
    printf("Valor %d excluido.\n", valor);
}

void main () {

    REGISTRO *inicio = NULL;

    inserir(&inicio, 10);
    inserir(&inicio, 20);
    inserir(&inicio, 30);
    imprimir(inicio);
    excluir(&inicio, 20);
    imprimir(inicio);
}