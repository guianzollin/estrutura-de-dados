#include <stdio.h>

void printvint(int a[], int n) {
    int i;
    for(i = 0 ; i < n ; i++) {
        printf("%i ", a[i]);
    }
}

void main(){

    int inteiros[] = {1, 2, 3, 4, 5};

    printvint(inteiros, 3);
}