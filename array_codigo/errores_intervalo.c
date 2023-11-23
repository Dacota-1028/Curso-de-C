#include <stdio.h>

#define MAX 10

double suma(const double a[], const int n);

int main(){
    // Ejemplo de uso de la función suma
    double numeros[] = {1.5, 2.3, 3.7, 4.2};
    int longitud = sizeof(numeros) / sizeof(numeros[0]);

    double resultado = suma(numeros, longitud);
    // Imprime el resultado de la suma
    int dato1 = longitud * sizeof(double);
    int dato2 = sizeof(numeros);
    printf("%d", longitud);
    printf("\n");
    printf("%d", dato2);
    printf("\n\n\n");
    printf("La suma es: %d\n", sizeof(numeros[2]));

    if (40 > 40){
        printf("\nSaludo");
    }
    return 0;
}

double suma(const double a[], const int n){
    double s = 0.0;
    double tamanio = sizeof(a);
    if (n * sizeof(double) > tamanio){
        for (int i = 0; i < n; i++){
            s += a[i];
        }
        return s;
    }
    return 0;
}