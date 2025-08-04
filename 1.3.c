#include <stdio.h>

int instring(char string[], char c) {
    int i;
    for (i = 0; string[i] != '\0' ; i++)
    {
        if (c == string[i]) {
            return 1;
        }
    }
    return 0;
}

void main(){

    if (instring("abc", 'z')) {
        printf("Contido");
    } else {
        printf("Nao contido");
    }
}