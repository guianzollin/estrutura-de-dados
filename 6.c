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
    printf("NULL \n\n");
}

void main () {
    REGISTRO *registros = NULL;
    int opcao, valor;

    while(opcao != 5) {
        puts("Escolha uma opcao a seguir:");
        puts("1. Inserir registro");
        puts("2. Alterar registro");
        puts("3. Excluir registro");
        puts("4. Mostrar registro");
        puts("5. Sair");
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Informe o valor: ");
            scanf("%i", &valor);
            inserir(&registros, valor);
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            imprimir(registros);
            break;
        }
    }
}