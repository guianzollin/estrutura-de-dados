#include <stdio.h>

void main () {

    int n;

    printf("Informe um numero inteiro positivo: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%i ", fibonacci(i));
    }
}
