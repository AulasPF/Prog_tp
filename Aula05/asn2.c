#include <stdio.h>

int main(void) {
    int numbers[3] = {10, 20, 30};
    int i;

    printf("Before overflow:\n");
    for (i = 0; i < 3; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Writing out of bounds (index 3 does not exist)
    numbers[3] = 9999;

    printf("\nAfter overflow attempt:\n");
    for (i = 0; i < 3; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    printf("\nThe program may crash or behave unpredictably now!\n");

    return 0;
}
