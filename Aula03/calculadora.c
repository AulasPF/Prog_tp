#include <stdio.h>

int main() {
    double val1, val2, resultado;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%lf", &val1);

    printf("Digite o operador (+, -): ");
    scanf(" %c", &operador);

    printf("Digite o segundo número: ");
    scanf("%lf", &val2);

    switch (operador) {
        case '+':
            resultado = val1 + val2;
            printf("%.2lf + %.2lf = %.2lf\n", val1, val2, resultado);
            break;
        case '-':
            resultado = val1 - val2;
            printf("%.2lf - %.2lf = %.2lf\n", val1, val2, resultado);
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}