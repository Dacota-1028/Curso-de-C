## Temario
1. [Introducción](#Introducción)
2. [Arrays en C](#Arrays-en-C)
3. [Recorridos de Arrays](#Recorridos-de-Arrays)
4. [Cadenas de Caracteres y Caracteres](#Cadenas-de-Caracteres-y-Caracteres)
5. [Arrays en Parámetros](#Arrays-en-Parámetros)
6. [Caracteres y cadenas de texto](#Caracteres-y-cadenas-de-texto)
8. [Arrays Bidimensionales](#Arrays-Bidimensionales)
9. [Algoritmo de Burbuja](#Algoritmo-de-Burbuja)
10. [Búsqueda en Listas](#Búsqueda-en-Listas)
11. [Resumen](#Resumen)

## Introducción

## Arrays en C

### Concepto de Array:

Un array en el lenguaje de programación C es una estructura de datos que permite almacenar múltiples elementos del mismo tipo bajo un solo nombre. Cada elemento en un array ocupa una posición única identificada por un índice. Los arrays proporcionan una forma eficiente de manejar conjuntos de datos homogéneos.

### Declaración de un Array:

La sintaxis básica para declarar un array en C es la siguiente:

```c
tipo_de_dato nombre_del_array[tamaño];
```

- **Ejemplo:**
  ```c
  int numeros[5]; // Declaración de un array de enteros con tamaño 5
  ```

### Subíndice de un Array:

El acceso a los elementos de un array se realiza mediante un subíndice (índice). El índice comienza en 0 y va hasta el tamaño del array menos 1. Por ejemplo, en un array de tamaño 5, los índices válidos son 0, 1, 2, 3 y 4.

- **Ejemplo:**
  ```c
  int numeros[5]; // Array de enteros con tamaño 5
  numeros[0] = 10; // Asignar el valor 10 al primer elemento (índice 0)
  int valor = numeros[2]; // Obtener el valor del tercer elemento (índice 2)
  ```

### Comportamiento en Memoria:

- **Almacenamiento Contiguo:**
  Los elementos de un array se almacenan de manera contigua en la memoria. Esto significa que ocupan ubicaciones adyacentes en la memoria, facilitando el acceso y la manipulación eficiente.

- **Dirección de Memoria:**
  La dirección de memoria del array es la dirección del primer elemento. Los demás elementos se encuentran en direcciones de memoria consecutivas.

- **Tamaño y Tipo de Dato:**
  El tamaño total de la memoria ocupada por un array se calcula multiplicando el tamaño del tipo de dato por el número de elementos en el array.

- **Índices y Desplazamiento:**
  El índice se utiliza para calcular el desplazamiento desde la dirección base del array. La dirección del elemento en la posición `i` se calcula como `direccion_base + i * tamaño_tipo_de_dato`.

### Almacenamiento en la Memoria:

En C, la declaración de un array reserva espacio en la memoria para almacenar sus elementos. El tamaño total del array en memoria se calcula multiplicando el tamaño del tipo de dato por el número de elementos en el array.

- **Ejemplo:**
  ```c
  int numeros[5]; // Array de enteros con tamaño 5
  ```

  Suponiendo que el tamaño de un entero (`int`) es 4 bytes, se reservarán 20 bytes en memoria para almacenar los 5 enteros (`5 * 4 = 20`). La dirección de memoria base será la dirección del primer elemento (`numeros[0]`), y los elementos subsiguientes estarán ubicados en direcciones consecutivas.

Los arrays en C proporcionan una forma eficiente de organizar y acceder a conjuntos de datos homogéneos. La declaración, manipulación y acceso a los elementos se realizan mediante un índice. La representación en memoria asegura que los elementos estén almacenados de manera contigua, facilitando operaciones eficientes. Comprender estos conceptos es esencial para trabajar con arrays de manera efectiva en programas en C.


## Recorridos de Arrays

Recorrer un array en C implica visitar cada uno de sus elementos en secuencia. Esto se puede realizar utilizando bucles, como el bucle `for` o el bucle `while`. Aquí hay una guía sobre cómo realizar recorridos de arrays en C:

### Uso del Bucle `for`:

El bucle `for` es una opción común para recorrer un array debido a su estructura concisa y expresiva. La sintaxis típica sería la siguiente:

```c
#include <stdio.h>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};

    // Recorrido utilizando un bucle for
    for (int i = 0; i < 5; ++i) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
```

En este ejemplo, el bucle `for` itera sobre los índices del array `numeros` (de 0 a 4) e imprime cada elemento.

### Uso del Bucle `while`:

El bucle `while` también se puede utilizar para recorrer un array. Se necesita una variable de control que se actualiza en cada iteración del bucle.

```c
#include <stdio.h>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    
    // Recorrido utilizando un bucle while
    int i = 0;
    while (i < 5) {
        printf("%d ", numeros[i]);
        ++i;
    }

    return 0;
}
```

En este caso, la variable `i` actúa como el índice del array, y el bucle `while` continúa hasta que `i` sea igual al tamaño del array.

### Recorrido Inverso:

Para recorrer un array en orden inverso, simplemente se ajustan las condiciones del bucle. Por ejemplo, utilizando un bucle `for`:

```c
#include <stdio.h>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};

    // Recorrido inverso utilizando un bucle for
    for (int i = 4; i >= 0; --i) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
```

### Consideraciones Importantes:

- Al recorrer un array, es fundamental asegurarse de no acceder a índices fuera del rango válido, ya que esto puede llevar a comportamientos indefinidos.
  
- Los recorridos con punteros ofrecen flexibilidad, pero se debe tener cuidado para no exceder los límites del array.

Recorrer arrays es una tarea común en programación, y elegir el método adecuado depende de la situación y de la preferencia del programador. Las estructuras de bucles y punteros proporcionan herramientas poderosas para trabajar con arrays de manera efectiva en C.

## Cadenas de Caracteres y Caracteres

En el lenguaje de programación C, las cadenas de caracteres y los caracteres individuales son fundamentales. Aquí tienes una explicación detallada sobre ambos conceptos, sus diferencias y cómo se comportan en la memoria.

### Caracteres en C:

En C, un carácter es una entidad que representa un símbolo individual, como una letra, un número o un carácter especial. Los caracteres en C se definen mediante el tipo de dato `char`. Por ejemplo:

```c
char miCaracter = 'A';
```

En este ejemplo, `miCaracter` almacena el carácter 'A'. Los caracteres se representan utilizando la codificación ASCII u otra codificación de caracteres, y ocupan 1 byte en memoria.

### Cadenas de Caracteres en C:

Una cadena de caracteres en C es una secuencia de caracteres terminada por el carácter nulo (`'\0'`). Se declara como un array de caracteres (`char[]`) o mediante el tipo de dato `char*`. Por ejemplo:

```c
char miString[] = "Hola";
```

o

```c
char *miString = "Hola";
```

Ambas formas son equivalentes y representan la cadena "Hola" seguida del carácter nulo para indicar el final de la cadena. Las cadenas de caracteres en C son arrays de caracteres y se almacenan en memoria de manera contigua.

### Diferencias y Comportamiento en la Memoria:

1. **Tamaño en Memoria:**
   - Un carácter (`char`) ocupa 1 byte en memoria.
   - Una cadena de caracteres (`char[]` o `char*`) ocupa tantos bytes como caracteres tenga más uno para el carácter nulo al final.

2. **Terminación:**
   - Los caracteres individuales no requieren un carácter nulo al final.
   - Las cadenas de caracteres siempre deben terminar con el carácter nulo (`'\0'`) para indicar el final de la cadena.

3. **Manipulación:**
   - Los caracteres individuales se manipulan directamente como variables de tipo `char`.
   - Las cadenas de caracteres se manipulan utilizando funciones de la biblioteca estándar de C, como `strcpy`, `strcat`, `strlen`, etc.

4. **Declaración:**
   - Un carácter se declara como `char`.
   - Una cadena de caracteres se declara como `char[]` o `char*`.

### Ejemplo de Manipulación de Cadenas de Caracteres:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char miString[] = "Hola";
    char otroString[10];

    // Copiar una cadena a otra
    strcpy(otroString, miString);

    // Concatenar una cadena al final de otra
    strcat(otroString, " Mundo");

    // Imprimir la cadena resultante
    printf("%s\n", otroString);

    return 0;
}
```

En este ejemplo, se utilizan las funciones `strcpy` y `strcat` para copiar y concatenar cadenas, respectivamente.

En resumen, los caracteres y las cadenas de caracteres en C son elementos fundamentales. Los caracteres individuales se representan con el tipo `char`, mientras que las cadenas de caracteres se pueden representar como arrays de caracteres (`char[]`) o punteros a caracteres (`char*`). La terminación con el carácter nulo es esencial en las cadenas para indicar su final. La manipulación de cadenas se realiza mediante funciones de la biblioteca estándar de C.

## Arrays en Parámetros

En C, los arrays pueden ser utilizados como parámetros en funciones, permitiendo así la manipulación de conjuntos de datos. Aquí tienes una explicación detallada sobre cómo trabajar con arrays en funciones, tanto como parámetros como en el propio cuerpo de la función.

### Arrays como Parámetros

Cuando pasas un array como parámetro a una función en C, estás pasando la dirección base del array, no una copia de los elementos. Esto significa que cualquier modificación realizada en el array dentro de la función afectará al array original. Aquí tienes un ejemplo:

```c
#include <stdio.h>

// Función que suma todos los elementos de un array
int sumarArray(int arr[], int longitud) {
    int suma = 0;
    for (int i = 0; i < longitud; i++) {
        suma += arr[i];
    }
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int total = sumarArray(numeros, 5);

    printf("La suma de los elementos es: %d\n", total);

    return 0;
}
```

En este ejemplo, la función `sumarArray` recibe un array `arr` y su longitud como parámetros. La función suma todos los elementos del array y devuelve el resultado.

### Arrays como Variables Locales en Funciones:

También puedes declarar arrays como variables locales dentro de una función. En este caso, la función trabajará con una copia del array y cualquier modificación no afectará al array original. Ejemplo:

```c
#include <stdio.h>

// Función que duplica cada elemento de un array
void duplicarArray(int arr[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};

    // Llamada a la función
    duplicarArray(numeros, 5);

    // Imprimir el array modificado
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
```

En este ejemplo, la función `duplicarArray` duplica cada elemento del array, pero como los cambios se realizan en una copia local, el array original en la función `main` no se ve afectado.

### Tamaño del Array como Parámetro:

En C, el tamaño de un array no es parte de la información que se pasa automáticamente a una función. Si necesitas conocer el tamaño del array dentro de la función, debes pasar el tamaño como un parámetro adicional o usar algún valor especial para indicar el final del array (por ejemplo, como en las cadenas de caracteres).

## Arrays Bidimensionales

En el lenguaje de programación C, los arrays bidimensionales, comúnmente conocidos como matrices, son estructuras de datos que almacenan elementos en filas y columnas. Aquí se presenta una explicación detallada sobre los arrays bidimensionales en C.

### Declaración de una Matriz:

La declaración de una matriz bidimensional en C sigue la siguiente sintaxis:

```c
tipo_dato nombre_matriz[numero_filas][numero_columnas];
```

Por ejemplo, una matriz de enteros de 3x3 se declararía así:

```c
int matriz_enteros[3][3];
```

### Inicialización de una Matriz:

La inicialización de una matriz se puede realizar al mismo tiempo que la declaración o posteriormente utilizando bucles. Aquí hay ejemplos de ambas formas:

```c
// Inicialización durante la declaración
int matriz_ejemplo1[2][2] = {{1, 2}, {3, 4}};

// Inicialización después de la declaración
int matriz_ejemplo2[2][2];
matriz_ejemplo2[0][0] = 1;
matriz_ejemplo2[0][1] = 2;
matriz_ejemplo2[1][0] = 3;
matriz_ejemplo2[1][1] = 4;
```

### Acceso a Elementos de una Matriz:

El acceso a los elementos de una matriz se realiza mediante índices de fila y columna. En C, los índices comienzan desde cero. Por ejemplo:

```c
int valor = matriz_enteros[1][2]; // Accede al elemento en la segunda fila y tercera columna
```

### Recorriendo una Matriz con Bucles:

Para recorrer eficientemente una matriz, se utilizan bucles anidados. Aquí hay un ejemplo que imprime todos los elementos de una matriz:

```c
#include <stdio.h>

void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz_ejemplo[2][3] = {{1, 2, 3}, {4, 5, 6}};

    imprimirMatriz(2, 3, matriz_ejemplo);

    return 0;
}
```

### Matrices como Parámetros de Funciones:

Cuando se pasa una matriz como parámetro a una función, se debe especificar la dimensión de al menos una de las dimensiones (columnas en el siguiente ejemplo) o se puede utilizar un puntero doble. Aquí un ejemplo utilizando la dimensión de columnas:

```c
#include <stdio.h>

void imprimirMatriz(int filas, int columnas, int matriz[][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz_ejemplo[2][3] = {{1, 2, 3}, {4, 5, 6}};

    imprimirMatriz(2, 3, matriz_ejemplo);

    return 0;
}
```

### Almacenamiento en la Memoria:

En la memoria, una matriz bidimensional se almacena de manera contigua, con cada fila almacenada una tras otra. Esto significa que los elementos de una fila están adyacentes en memoria.

### Consideraciones Importantes:

1. **Tamaño Fijo:**
   - Las matrices en C tienen un tamaño fijo, que se especifica durante la declaración.

2. **Índices Fuera de Límites:**
   - Es crucial evitar el acceso a índices fuera de los límites de la matriz para evitar comportamientos indefinidos.

3. **Paso como Parámetro:**
   - Cuando se pasa una matriz como parámetro, es necesario especificar al menos una de las dimensiones o utilizar un puntero doble.

4. **Uso de Punteros:**
   - Las matrices en C pueden estar relacionadas con punteros, y el acceso a los elementos puede realizarse mediante aritmética de punteros.

En resumen, las matrices bidimensionales en C son herramientas poderosas para trabajar con conjuntos de datos tabulares. Su declaración, inicialización y acceso a elementos son fundamentales, y su eficiente manipulación se logra mediante bucles anidados

. Al comprender cómo se almacenan en la memoria y cómo trabajar con ellas en funciones, puedes aprovechar al máximo las matrices en tus programas en C.

## Algoritmo de Burbuja

El algoritmo de burbuja es un sencillo método de ordenación que funciona comparando repetidamente pares de elementos adyacentes y permutándolos si están en el orden incorrecto. A continuación, se presenta una explicación detallada de la implementación del algoritmo de burbuja en el lenguaje de programación C.

### Pasos del Algoritmo de Burbuja:

1. **Comparación de Elementos Adyacentes:**
   - Compara cada par de elementos adyacentes en el arreglo.

2. **Intercambio si es Necesario:**
   - Si el par de elementos está en el orden incorrecto, intercámbialos.

3. **Repetir Hasta que no haya Intercambios:**
   - Repite los pasos 1 y 2 hasta que no haya más elementos por intercambiar.

### Implementación en C:

```c
#include <stdio.h>

void burbuja(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Comparación y intercambio si es necesario
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambio de elementos
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

void imprimirArreglo(int arreglo[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

int main() {
    int arreglo[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Arreglo original: ");
    imprimirArreglo(arreglo, n);

    // Aplicar el algoritmo de burbuja
    burbuja(arreglo, n);

    printf("Arreglo ordenado: ");
    imprimirArreglo(arreglo, n);

    return 0;
}
```

### Explicación de la Implementación:

- La función `burbuja` realiza el algoritmo de burbuja mediante dos bucles anidados.
  - El bucle externo (`for i`) controla el número de pasadas a través del arreglo.
  - El bucle interno (`for j`) compara y, si es necesario, intercambia elementos adyacentes.

- La función `imprimirArreglo` simplemente imprime los elementos de un arreglo.

- En la función `main`, se crea un arreglo de ejemplo y se muestra antes y después de aplicar el algoritmo de burbuja.

### Análisis de Complejidad:

- **Peor Caso:**
  - El peor caso ocurre cuando el arreglo está en orden inverso. La complejidad en este caso es \(O(n^2)\).

- **Mejor Caso:**
  - El mejor caso ocurre cuando el arreglo ya está ordenado. Aunque el algoritmo aún realiza comparaciones, no se realizan intercambios, y la complejidad es \(O(n)\).

- **Caso Promedio:**
  - El caso promedio también es \(O(n^2)\), ya que no hay garantía de que el arreglo esté parcialmente ordenado.

### Consideraciones Finales:

- Aunque el algoritmo de burbuja es simple y fácil de implementar, puede no ser eficiente para conjuntos de datos grandes.
  
- Otros algoritmos de ordenación, como el ordenamiento rápido (quicksort) o el ordenamiento de mezcla (merge sort), son más eficientes para conjuntos de datos grandes.

- El algoritmo de burbuja es útil para enseñar conceptos básicos de ordenación y cómo se pueden mejorar los algoritmos para casos específicos.


## Búsqueda en Listas

La búsqueda en listas es un proceso crucial en programación, especialmente cuando trabajas con conjuntos de datos. Aquí te proporcionaré una visión general de los conceptos y métodos de búsqueda en listas utilizando el lenguaje de programación C.

### Conceptos Básicos:

#### 1. **Lista:**
   - Una lista es una estructura de datos que almacena elementos de manera secuencial. En C, las listas pueden implementarse con arreglos o estructuras enlazadas.

#### 2. **Búsqueda:**
   - La búsqueda implica encontrar un elemento específico en una lista. Puede ser un valor, una clave u otro identificador único.

#### 3. **Métodos de Búsqueda:**
   - Hay varios métodos de búsqueda comunes, como la búsqueda lineal y la búsqueda binaria.

### Métodos de Búsqueda:

#### 1. **Búsqueda Lineal:**
   - **Descripción:**
     - La búsqueda lineal o secuencial examina cada elemento de la lista en orden hasta encontrar el elemento deseado.
   - **Implementación:**
     ```c
     int busquedaLineal(int lista[], int n, int elemento) {
         for (int i = 0; i < n; i++) {
             if (lista[i] == elemento) {
                 return i;  // Elemento encontrado, devuelve la posición
             }
         }
         return -1;  // Elemento no encontrado
     }
     ```
   - **Complejidad:**
     - En el peor caso, \(O(n)\) para una lista de \(n\) elementos.

#### 2. **Búsqueda Binaria (Solo para Listas Ordenadas):**
   - **Descripción:**
     - La búsqueda binaria divide repetidamente la lista a la mitad y compara el elemento con el valor medio.
   - **Implementación:**
     ```c
     int busquedaBinaria(int lista[], int inicio, int fin, int elemento) {
         while (inicio <= fin) {
             int medio = inicio + (fin - inicio) / 2;
             if (lista[medio] == elemento) {
                 return medio;  // Elemento encontrado, devuelve la posición
             } else if (lista[medio] < elemento) {
                 inicio = medio + 1;
             } else {
                 fin = medio - 1;
             }
         }
         return -1;  // Elemento no encontrado
     }
     ```
   - **Complejidad:**
     - En el peor caso, \(O(\log n)\) para una lista de \(n\) elementos.

### Consideraciones Finales:

- La elección del método de búsqueda depende del contexto y de si la lista está ordenada.

- La búsqueda lineal es simple pero puede volverse ineficiente para listas grandes.

- La búsqueda binaria es más eficiente pero requiere que la lista esté ordenada.

- Al diseñar algoritmos de búsqueda, es crucial considerar la complejidad temporal y la eficiencia en función del tamaño de la lista.

## Resumen