#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) {
        return 0; 
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

void main () {

    int n;

    printf("Informe um numero inteiro positivo: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%i ", fibonacci(i));
    }
}
