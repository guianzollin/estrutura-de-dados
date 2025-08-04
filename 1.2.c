#include <stdio.h>

int cmpvint(int a1[], int a2[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        if (a1[i] != a2[i]) {
            return 0;
        }
    }
    return 1;
}

void main(){

    int array1[] = {1, 2, 3},  array2[] = {1, 1, 3};;

    if (cmpvint(array1, array2, 3)) {
        printf("Iguais");
    } else {
        printf("Diferentes");
    }
    
}