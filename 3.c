#include <stdio.h>

typedef struct {
    float altura;
    float largura;
    float profundidade;
} REGISTRO;

void inserir(REGISTRO *p) {
    float altura, largura, profundidade;
    int indice;
    puts("informe a altura");
    scanf("%f", &altura);
    puts("informe a largura");
    scanf("%f", &largura);
    puts("informe a profundidade");
    scanf("%f", &profundidade);
    // solicitar ao user qual o indice (0 a 9)
    (p+indice)->altura = altura;
    (p+indice)->largura = largura;
    (p+indice)->profundidade = profundidade;
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
            inserir(registros);
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        }
    }
}