#include <stdio.h>

int main() {
    int nota;

    printf("Nota: ");
    scanf("%d",&nota); 

    switch (nota) {
        case 20:
        case 19:
        case 18:
            printf("Excelente!\n");
            break;

        case 17:
        case 16:
        case 15:
            printf("Muito Bom!\n");
            break;

        case 14:
        case 13:
        case 12:
            printf("Bom.\n");
            break;

        case 11:
        case 10:
            printf("Suficiente.\n");
            break;

        default:
            printf("Insuficiente.\n");
    }

    return 0;
}
