#include <stdio.h>

typedef struct {
    float altura;
    float largura;
    float profundidade;
} REGISTRO;

void inserirOuAlterar(REGISTRO *p) {
    float altura, largura, profundidade;
    int indice;
    puts("informe a altura");
    scanf("%f", &altura);
    puts("informe a largura");
    scanf("%f", &largura);
    puts("informe a profundidade");
    scanf("%f", &profundidade);
    puts("informe o indice (0 a 9):");
    scanf("%i", &indice);
    (p+indice)->altura = altura;
    (p+indice)->largura = largura;
    (p+indice)->profundidade = profundidade;
}

void excluir(REGISTRO *p) {
    int indice;
    puts("informe o indice (0 a 9):");
    scanf("%i", &indice);
    (p+indice)->altura = 0;
    (p+indice)->largura = 0;
    (p+indice)->profundidade = 0;
}

void mostrar(REGISTRO *p) {
    int indice;
    puts("informe o indice (0 a 9):");
    scanf("%i", &indice);
    printf("Altura %.2f \n", (p+indice)->altura);
    printf("Largura %.2f \n", (p+indice)->largura);
    printf("Profundidade %.2f \n", (p+indice)->profundidade);
}

void main () {
    REGISTRO registros[10];
    int opcao;

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
            inserirOuAlterar(registros);
            break;
        case 2:
            inserirOuAlterar(registros);
            break;
        case 3:
            excluir(registros);
            break;
        case 4:
            mostrar(registros);
            break;
        }
    }
}