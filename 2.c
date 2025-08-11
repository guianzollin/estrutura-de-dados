#include <stdio.h>

char * minha_funcao(char *pos_inicial, char caractere){
    int i;
    for (i = 0; *(pos_inicial+i)!='\0'; i++)
    {
        if (*(pos_inicial+i) == caractere)
        {
            return pos_inicial+i;
        }
    }
    return NULL;
}

void main () {
    char x[10], c;
    char *ptr;
    int i;

    printf("Entre com uma string: ");
    scanf("%s", x);
    getchar();
    printf("Entre com um caractere: ");
    scanf("%c", &c);

    ptr = minha_funcao(x, c);

    if (ptr != NULL)
    {
        for (i = 0; *(ptr+i) != '\0'; i++)
        {
            printf("%c", *(ptr+i));
        }
    }
}