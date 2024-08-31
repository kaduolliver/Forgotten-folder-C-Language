#include <stdio.h>

int main() {
    printf("Números pares de 0 até 100:\n");

    for (int i = 0; i <= 100; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
