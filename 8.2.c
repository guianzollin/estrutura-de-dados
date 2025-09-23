#include <stdio.h>
#include <stdlib.h>

typedef struct sRegistro {
    int valor;
    struct sRegistro *prox;
} REGISTRO;

typedef struct {
    REGISTRO *inicio;
    REGISTRO *fim;
} FILA;

void inicializar(FILA *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

void enfileirar(FILA *f, int valor) {
    REGISTRO *novo = (REGISTRO *) malloc(sizeof(REGISTRO));
    novo->valor = valor;
    novo->prox = NULL;

    if (f->fim == NULL) {
        // fila estava vazia
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }
}

void desenfileirar(FILA *f) {
    if (f->inicio == NULL) {
        return; // fila vazia
    }
    REGISTRO *p = f->inicio;
    f->inicio = f->inicio->prox;

    if (f->inicio == NULL) {
        // se removeu o último elemento
        f->fim = NULL;
    }

    free(p);
}

void imprimir(FILA *f) {
    printf("\nFila atual:\n\n");
    REGISTRO *p = f->inicio;
    while (p != NULL) {
        printf("| %d | -> ", p->valor);
        p = p->prox;
    }
    printf("NULL\n");
}

int main() {
    FILA fila;
    inicializar(&fila);

    enfileirar(&fila, 10);
    enfileirar(&fila, 20);
    enfileirar(&fila, 30);
    imprimir(&fila);

    desenfileirar(&fila);
    imprimir(&fila);

    return 0;
}
