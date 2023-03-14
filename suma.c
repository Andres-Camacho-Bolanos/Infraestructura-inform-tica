#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char entrada[10];
    float numero1, numero2, resultado;

    printf("Bienvenido.\n");
    printf("Ingrese el primer número flotante:\n");

    if (fgets(entrada, sizeof(entrada), stdin) != NULL) {
        entrada[strcspn(entrada, "\n")] = 0;

        if (strcmp(entrada, "pi") == 0) {
            numero1 = M_PI;
        } else if (strcmp(entrada, "e") == 0) {
            numero1 = M_E;
        } else {
            numero1 = strtof(entrada, NULL);
        }

        printf("Ingrese el segundo número flotante:\n");
        if (fgets(entrada, sizeof(entrada), stdin) != NULL) {
            entrada[strcspn(entrada, "\n")] = 0;

            if (strcmp(entrada, "pi") == 0) {
                numero2 = M_PI;
            } else if (strcmp(entrada, "e") == 0) {
                numero2 = M_E;
            } else {
                numero2 = strtof(entrada, NULL);
            }

            resultado = numero1 + numero2;
            printf("El resultado de la suma es: %.2f\n", resultado);
            return 0;
        }
    }

    printf("Por favor, ingrese solo números flotantes.\n");
    return 1;
}
