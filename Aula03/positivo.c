#include <stdio.h>

int main() {
    int n;
    printf("Introduzir um valor inteiro positivo: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("O valor introduzido é positivo.\n");
    } 
    else {
        printf("O valor introduzido não é positivo.\n");
    }
    return 0;
}