#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float altura;
    float largura;
    float profundidade;
} REGISTRO;

void inserir(REGISTRO **p, int *pQuantidade) {
    float altura, largura, profundidade;
    puts("informe a altura");
    scanf("%f", &altura);
    puts("informe a largura");
    scanf("%f", &largura);
    puts("informe a profundidade");
    scanf("%f", &profundidade);

    *p = (REGISTRO *) realloc(*p, ((*pQuantidade) + 1) * sizeof(REGISTRO));

    ((*p)+(*pQuantidade))->altura = altura;
    ((*p)+(*pQuantidade))->largura = largura;
    ((*p)+(*pQuantidade))->profundidade = profundidade;
    *pQuantidade = *pQuantidade + 1;
}

void alterar(REGISTRO *p, int quantidade) {
    float altura, largura, profundidade;
    int indice;
    puts("informe a altura");
    scanf("%f", &altura);
    puts("informe a largura");
    scanf("%f", &largura);
    puts("informe a profundidade");
    scanf("%f", &profundidade);
    printf("informe o indice (0 a %i):", quantidade-1);
    scanf("%i", &indice);
    (p+indice)->altura = altura;
    (p+indice)->largura = largura;
    (p+indice)->profundidade = profundidade;
}

void excluir(REGISTRO **p, int *pQuantidade) {
    *p = (REGISTRO *) realloc(*p, ((*pQuantidade) - 1) * sizeof(REGISTRO));
    *pQuantidade = *pQuantidade - 1;
}

void mostrar(REGISTRO *p, int quantidade) {
    int indice;
    printf("informe o indice (0 a %i):", quantidade-1);
    scanf("%i", &indice);
    printf("Altura %.2f \n", (p+indice)->altura);
    printf("Largura %.2f \n", (p+indice)->largura);
    printf("Profundidade %.2f \n", (p+indice)->profundidade);
}

void main () {
    REGISTRO *registros = NULL;
    int quantidade = 0, opcao;

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
            inserir(&registros, &quantidade);
            break;
        case 2:
            alterar(registros, quantidade);
            break;
        case 3:
            excluir(&registros, &quantidade);
            break;
        case 4:
            mostrar(registros, quantidade);
            break;
        }
    }
}