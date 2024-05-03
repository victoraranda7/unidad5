#include <stdio.h>
//Algoritmo para obtener una sucesión numércia//

int calcularSucesion(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;      //Formula base//
}

int main() {
    int n;

    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &n);

    printf("Salida = ");     //Mostrar la suceción//
    for (int i = 1; i <= n; i++)
    {
        printf("%d", calcularSucesion(i));
        if (i != n) {
            printf(", ");    //Separadas por comas//
        }
    }

    return 0;
}

