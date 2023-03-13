#include <stdio.h>

int main() {
    float numero1, numero2, resultado;
    printf("Bienvenido.\n");
    printf("Ingrese el primer número flotante:\n ");
    if (scanf("%f", &numero1) == 1) { 
        printf("Ingrese el segundo número flotante:\n ");
        if (scanf("%f", &numero2) == 1) { 
            resultado = numero1 + numero2;
            printf("El resultado de la suma es: %.2f\n", resultado);
            return 0;
        }
    }
    printf("Por favor, ingrese solo números flotantes.\n");
    return 1;
}
