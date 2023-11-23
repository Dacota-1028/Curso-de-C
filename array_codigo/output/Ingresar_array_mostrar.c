#include <stdio.h>

void ingresar_datos(int numeros1[], int *num);
void mostrar_datos(int numeros2[], int num);
int suma(int Snum[], int num);

int resul = 0;

int main(){
    int l = 0;
    int numero[l];

    ingresar_datos(numero, &l);
    mostrar_datos(numero, l);
    
    //int resultado = suma(numero, l);

    printf("\n La suma es: %d", resul);
    return 0;
}

void ingresar_datos(int numeros1[], int *num){
    int n;
    printf("Ingresar la cantidad de numeros: ");
    scanf("%d", &n);
    *num = n;
    
    for (int i = 0; i < n; i++) {
        printf("[%d] numero: ", i + 1);
        scanf("%d", &numeros1[i]);
    }
}

void mostrar_datos(int numeros2[], int num){
    
    printf("\n\n == Datos ingresados == \n\n");
    for (int i = 0; i < num; i++){
        printf("Dato [%d]: %d\n", i + 1, numeros2[i]);
        resul += numeros2[i];
    }
}
/*
int suma(int Snum[], int num){
    int resul = 0;
    for(int i = 0; i < num; i++){
        resul += Snum[i];
    }
    return resul;
}*/