## Temario
1. [Array (Lista, Tabla)](#IArray-(Lista,-Tabla)ntroducción)
2. [Declarción de un array](#Declarción-de-un-array)
3. [Subíndices de un array](#Subíndices-de-un-array)
4. [Almacenamiento en memoria](#Almacenamiento-en-memoria)
5. [Tamaño de los arrays](#Tamaño-de-los-arrays)
6. [Caracteres y cadenas de texto](#Caracteres-y-cadenas-de-texto)
7. [Arrays Multidimensionales](#Arrays-Multidimensionales)
7. [Inicialización de arrays bidimensional](#Inicialización-de-arrays-bidimensional)
7. [Acceso a los elementos de los arrays bidimensionales](#Acceso-a-los-elementos-de-los-arrays-bidimensionales)
7. [Uso de arrays bidimensionales en bucles](#Uso-de-arrays-bidimensionales-en-bucles)
7. [Array en parámetros](#Array-en-parámetros)
7. [Paso de cadenas como parámetros](#Paso-de-cadenas-como-parámetros)
7. [Algoritmo de la burbuja](#Algoritmo-de-la-burbuja)
7. [Búsqueda de listas](#Búsqueda-de-listas)

### Arrays (Arreglos):

En programación, un array (o arreglo) es una estructura de datos que almacena elementos del mismo tipo en posiciones consecutivas de memoria. Los elementos del array se acceden mediante un índice o posición. El índice generalmente comienza en 0. Por ejemplo, en un array de números enteros `int numeros[5]`, los elementos son `numeros[0]`, `numeros[1]`, ..., `numeros[4]`.

**Características de los Arrays:**
- **Tamaño Fijo:** Los arrays tienen un tamaño fijo una vez que se han declarado, y no pueden cambiar de tamaño durante la ejecución del programa.
- **Acceso Rápido:** Los elementos se acceden directamente mediante un índice, lo que permite un acceso rápido y eficiente.
- **Elementos del Mismo Tipo:** Todos los elementos del array deben ser del mismo tipo.

### Listas:

En contraste, las listas son estructuras de datos más dinámicas y flexibles. En lugar de un tamaño fijo, las listas pueden crecer o reducirse dinámicamente durante la ejecución del programa. En la mayoría de los lenguajes de programación, las listas se implementan como listas enlazadas o listas dinámicas.

**Características de las Listas:**
- **Tamaño Dinámico:** Las listas pueden cambiar de tamaño durante la ejecución del programa.
- **Inserción y Eliminación Eficientes:** Las operaciones de inserción y eliminación son eficientes en listas, ya que no requieren cambios en el tamaño del array.
- **Elementos de Distintos Tipos:** Pueden contener elementos de diferentes tipos.

### Tablas:

En el contexto de bases de datos y hojas de cálculo, el término "tabla" se refiere a una estructura de dos dimensiones que organiza datos en filas y columnas. Cada fila representa un conjunto de datos relacionados, y cada columna representa un atributo específico. Las tablas pueden ser vistas como matrices bidimensionales, donde las filas son los registros y las columnas son los campos.

**Características de las Tablas:**
- **Estructura Bidimensional:** Organiza datos en filas y columnas.
- **Relaciones Explícitas:** Cada fila tiene una relación con las demás, y cada columna representa un atributo específico.
- **Utilización en Bases de Datos:** Ampliamente utilizado en el diseño de bases de datos relacionales y en hojas de cálculo.

### Ejemplo de la Vida Real:

**Arrays:**
Supongamos que tienes un programa que almacena las calificaciones de los estudiantes en un array. Cada elemento del array representa la calificación de un estudiante específico.

```c
int calificaciones[10];  // Array de calificaciones para 10 estudiantes
```

**Listas:**
Imagina una lista de reproducción en una aplicación de música. Puedes agregar o eliminar canciones fácilmente, y la lista puede crecer o reducirse según tus preferencias.

```python
playlist = ["Canción1", "Canción2", "Canción3"]
playlist.append("Canción4")  # Agregar una nueva canción
playlist.remove("Canción2")  # Eliminar una canción
```

**Tablas:**
En una hoja de cálculo, podrías tener una tabla que organiza los gastos mensuales de tu hogar. Cada fila representa un mes y cada columna representa una categoría de gasto.

| Mes       | Alquiler | Comida | Transporte |
| --------- | -------- | ------ | ---------- |
| Enero     | 1000     | 300    | 150        |
| Febrero   | 1000     | 350    | 120        |
| Marzo     | 1000     | 320    | 130        |

En resumen, los arrays, listas y tablas son estructuras de datos comunes, cada una con sus propias características y aplicaciones. Los arrays son estáticos y de tamaño fijo, las listas son dinámicas y pueden cambiar de tamaño, y las tablas son estructuras bidimensionales utilizadas para organizar datos en filas y columnas.

## Declarción de un array

En C, los arrays se declaran y se inicializan de diversas formas. Aquí tienes ejemplos de las diferentes maneras de declarar y inicializar arrays:

### Declaración y Dimensionamiento Básico:

```c
int numeros[5];  // Declaración de un array de enteros con tamaño 5
```

En este ejemplo, `numeros` es un array de enteros con espacio para almacenar 5 elementos. Los índices van desde 0 hasta 4.

### Inicialización con Valores:

```c
int primos[] = {2, 3, 5, 7, 11};  // Inicialización con valores
```

En este caso, el tamaño del array se infiere automáticamente por la cantidad de valores proporcionados entre llaves.

### Declaración e Inicialización Separadas:

```c
int pares[4];  // Declaración
pares[0] = 2;   // Inicialización individual
pares[1] = 4;
pares[2] = 6;
pares[3] = 8;
```

Puedes declarar un array primero y luego asignar valores individualmente.

### Inicialización con Cero:

```c
int edades[3] = {0};  // Todos los elementos inicializados a 0
```

En este caso, todos los elementos del array `edades` se inicializan a 0.

### Inicialización Parcial:

```c
int datos[5] = {1, 2};  // Solo los primeros dos elementos se inicializan
```

Si proporcionas menos valores que el tamaño del array, los elementos restantes se inicializan a 0 (en el caso de enteros).

### Inicialización de Cadenas de Caracteres:

```c
char saludo[] = "Hola";  // Inicialización de una cadena de caracteres
```

En este ejemplo, `saludo` es un array de caracteres que contiene la cadena "Hola". La longitud del array se ajusta automáticamente para acomodar la cadena y el carácter nulo `\0` al final.

### Uso de Constantes y Expresiones:

```c
#define TAMANO 3
int numeros[TAMANO] = {1, 2, 3};  // Declaración con un tamaño definido por una constante
```

Puedes usar constantes o expresiones para definir el tamaño del array.

Recuerda que en C, los arrays tienen un tamaño fijo y la memoria para ellos se asigna en tiempo de compilación. Para tamaños de array variables o dinámicos, se pueden utilizar técnicas como la asignación dinámica de memoria.

## Subíndices de un array

En programación, un subíndice (o índice) de un array es un número entero utilizado para acceder a un elemento específico en el array. Los subíndices comienzan generalmente desde cero y se incrementan en uno para cada elemento subsiguiente. Aquí tienes información detallada sobre los subíndices de un array:

### Características Clave:

1. **Inicio en Cero:**
   - En la mayoría de los lenguajes de programación, incluido C, los subíndices de arrays comienzan en cero. Por ejemplo, el primer elemento de un array tiene un subíndice de 0, el segundo tiene un subíndice de 1, y así sucesivamente.

2. **Acceso a Elementos:**
   - Los subíndices se utilizan para acceder a elementos individuales del array. La notación es `nombreArray[subíndice]`.

3. **Operaciones Aritméticas:**
   - Puedes realizar operaciones aritméticas con los subíndices para acceder a elementos específicos o para realizar iteraciones sobre el array.

### Ejemplos Prácticos:

#### Acceso a Elementos:

```c
int numeros[5] = {10, 20, 30, 40, 50};

// Acceso a elementos individuales
int primerElemento = numeros[0];   // 10
int segundoElemento = numeros[1];  // 20
```

#### Modificación de Elementos:

```c
int numeros[5] = {10, 20, 30, 40, 50};

// Modificación de elementos
numeros[2] = 35;  // Cambia el tercer elemento a 35
```

### Límites y Errores Comunes:

1. **Fuera de Límites (Buffer Overflow):**
   - Acceder a un índice fuera de los límites del array puede resultar en comportamientos indefinidos y errores en tiempo de ejecución. Es crucial asegurarse de que los índices estén dentro de los límites del array.

   ```c
   int numeros[5] = {10, 20, 30, 40, 50};
   int valor = numeros[10];  // Acceso fuera de los límites
   ```

2. **Tamaño del Array:**
   - El tamaño del array determina la cantidad de elementos accesibles. Acceder a elementos más allá del tamaño declarado resultará en errores.

   ```c
   int numeros[5] = {10, 20, 30, 40, 50};
   int valor = numeros[5];  // Acceso fuera de los límites
   ```

3. **Índices Negativos:**
   - En C, los índices negativos no están permitidos y pueden llevar a comportamientos indefinidos o errores.

   ```c
   int numeros[5] = {10, 20, 30, 40, 50};
   int valor = numeros[-1];  // Acceso con índice negativo
   ```

### Usos Comunes:

1. **Acceso Secuencial:**
   - Los subíndices son fundamentales para acceder a elementos de un array de manera secuencial o mediante iteración.

2. **Manipulación de Datos:**
   - Los subíndices se utilizan para leer o modificar datos almacenados en posiciones específicas del array.

3. **Cálculos con Arrays:**
   - Operaciones aritméticas con subíndices pueden utilizarse para realizar cálculos específicos en conjuntos de datos.

4. **Recorrido Bidimensional:**
   - En arrays bidimensionales, se utilizan dos subíndices para acceder a elementos en filas y columnas.

```c
int matriz[3][4];  // Array bidimensional
int valor = matriz[1][2];  // Acceso a un elemento específico
```

En resumen, los subíndices son esenciales para acceder y manipular datos en arrays. Es importante entender las reglas y límites asociados con los subíndices para evitar errores y comportamientos indefinidos en el código.

## Almacenamiento en memoria

El almacenamiento en memoria de los arrays en lenguajes de programación, como C, es fundamental para entender cómo se organizan y acceden a los elementos de un array. Aquí tienes una explicación detallada sobre cómo se almacenan en memoria los arrays:

### Organización en Memoria:

1. **Contigüidad:**
   - Los elementos de un array se almacenan de manera contigua en la memoria. Esto significa que cada elemento está ubicado justo después del anterior.

2. **Tamaño del Elemento:**
   - El tamaño de cada elemento del array (en bytes) depende del tipo de datos. Por ejemplo, un array de enteros (`int`) tendrá elementos de 4 bytes en sistemas de 32 bits y de 8 bytes en sistemas de 64 bits.

### Dirección Base y Desplazamiento:

1. **Dirección Base:**
   - La dirección base es la dirección de memoria del primer elemento del array. Se refiere a la posición de memoria donde comienza el array.

2. **Desplazamiento:**
   - El desplazamiento es la diferencia entre la dirección base y la dirección de un elemento específico. Se calcula multiplicando el índice del elemento por el tamaño del elemento.

   ```c
   int numeros[5];         // Dirección base de 'numeros'
   int direccionElemento2 = (int)&numeros[2];  // Dirección de 'numeros[2]'
   int desplazamiento = direccionElemento2 - (int)&numeros[0];
   ```

### Acceso a Elementos:

1. **Notación de Subíndice:**
   - La notación de subíndice (`array[indice]`) se traduce a una operación de acceso a memoria que involucra la dirección base, el tamaño del elemento y el índice.

   ```c
   int numeros[5] = {10, 20, 30, 40, 50};
   int valor = numeros[2];
   ```

   En este ejemplo, `numeros[2]` se traduce en la dirección base de `numeros` más el desplazamiento equivalente al índice 2 multiplicado por el tamaño de un entero.

2. **Aritmética de Punteros:**
   - La aritmética de punteros permite realizar operaciones directamente sobre direcciones de memoria. Es útil para acceder y recorrer arrays.

   ```c
   int numeros[5] = {10, 20, 30, 40, 50};
   int *ptr = numeros;    // 'ptr' apunta al primer elemento
   int tercerElemento = *(ptr + 2);  // Acceso al tercer elemento usando aritmética de punteros
   ```

### Tamaño Total del Array:

1. **Tamaño en Bytes:**
   - El tamaño total del array se calcula multiplicando el número de elementos por el tamaño del elemento.

   ```c
   int numeros[5];    // Tamaño total: 5 * sizeof(int) bytes
   ```

### Ejemplo Práctico:

```c
#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    
    // Acceso a elementos usando subíndices
    printf("Elemento 2: %d\n", numeros[2]);
    
    // Acceso a elementos usando aritmética de punteros
    int *ptr = numeros;
    printf("Elemento 3: %d\n", *(ptr + 3));

    return 0;
}
```

En este ejemplo, se ilustra cómo se accede a elementos de un array tanto mediante subíndices como mediante aritmética de punteros.

### Consideraciones Importantes:

- **Fuera de Límites:**
  - Acceder a elementos fuera de los límites del array puede llevar a comportamientos indefinidos y errores en tiempo de ejecución.

- **Tamaño Estático:**
  - En C, el tamaño del array suele ser estático y debe conocerse en tiempo de compilación.

- **Apuntadores y Direcciones:**
  - Los apuntadores y las direcciones de memoria son conceptos clave en la manipulación y acceso a arrays.

Comprender el almacenamiento en memoria de los arrays es esencial para escribir código eficiente y evitar errores relacionados con el acceso a la memoria. La organización contigua de los elementos y la aritmética de punteros son conceptos fundamentales en este aspecto.

## Tamaño de los arrays

La función `sizeof()` en C se utiliza para determinar el tamaño en bytes de un tipo de datos o de una variable específica. Cuando se aplica a un array, `sizeof()` devuelve el tamaño total en bytes del array. Aquí tienes una explicación detallada sobre cómo utilizar `sizeof()` para obtener el tamaño de los arrays:

### Sintaxis Básica de `sizeof()`:

```c
size_t sizeof(tipo);
```

- `sizeof`: Es el operador que devuelve el tamaño en bytes del tipo de datos o de la variable.
- `tipo`: Es el tipo de datos o la variable cuyo tamaño se desea conocer.

### Uso de `sizeof()` con Arrays:

```c
int numeros[5];
size_t tamanoArray = sizeof(numeros);
```

En este ejemplo, `sizeof(numeros)` devolverá el tamaño total en bytes del array `numeros`. El resultado se almacena en la variable `tamanoArray` de tipo `size_t`.

### Ejemplo Práctico:

```c
#include <stdio.h>

int main() {
    int numeros[5];
    char caracteres[10];

    size_t tamanoNumeros = sizeof(numeros);
    size_t tamanoCaracteres = sizeof(caracteres);

    printf("Tamaño de numeros: %zu bytes\n", tamanoNumeros);
    printf("Tamaño de caracteres: %zu bytes\n", tamanoCaracteres);

    return 0;
}
```

Este programa muestra cómo utilizar `sizeof()` para obtener el tamaño en bytes de dos arrays diferentes (`numeros` y `caracteres`). Ten en cuenta que se utiliza `%zu` como formato de impresión para el tipo `size_t`.

### Aspectos Importantes:

1. **Tamaño del Elemento:**
   - El resultado de `sizeof()` representa el tamaño total en bytes del array, considerando el tamaño de cada elemento. Por lo tanto, el tamaño del array es el producto del número de elementos por el tamaño de cada elemento.

2. **Tipos de Datos:**
   - `sizeof()` se puede aplicar a cualquier tipo de datos en C, ya sea un tipo primitivo, una estructura o un array.

   ```c
   size_t tamanoEntero = sizeof(int);
   size_t tamanoEstructura = sizeof(struct MiEstructura);
   ```

3. **Variables Dinámicas y Punteros:**
   - Cuando se utiliza `sizeof()` con variables dinámicas o punteros, el tamaño que se obtiene es el tamaño del tipo de datos al que apunta el puntero, no el tamaño de la memoria que el puntero podría estar apuntando.

   ```c
   int *ptr = malloc(5 * sizeof(int));
   size_t tamanoPuntero = sizeof(ptr);  // Tamaño del puntero, no del bloque de memoria
   ```

4. **Uso en Funciones:**
   - Puedes utilizar `sizeof()` dentro de funciones para determinar el tamaño de los parámetros o variables locales.

   ```c
   void imprimirTamano(int array[]) {
       size_t tamano = sizeof(array);
       printf("Tamaño del array en la función: %zu bytes\n", tamano);
   }
   ```

   Ten en cuenta que en el contexto de funciones, `sizeof(array)` devolverá el tamaño de un puntero, no el tamaño del array completo.

### Conclusiones:

- `sizeof()` es una herramienta útil para determinar el tamaño en bytes de tipos de datos y variables en C.
- Cuando se aplica a un array, devuelve el tamaño total del array en bytes.
- Ten en cuenta que el tamaño del array incluye todos sus elementos multiplicados por el tamaño de cada elemento.
- Es importante considerar el tipo de datos y entender cómo `sizeof()` se comporta con punteros y variables dinámicas.

## Caracteres y cadenas de texto

En C, un array de caracteres y una cadena de caracteres son conceptos relacionados, pero tienen diferencias importantes en su comportamiento y uso. Aquí tienes una explicación detallada sobre ambos:

### Array de Caracteres:

1. **Definición y Declaración:**
   - Un array de caracteres es simplemente un array que contiene elementos de tipo `char`. Puedes definir y declarar un array de caracteres de la siguiente manera:

     ```c
     char miArray[5];  // Declaración de un array de caracteres con tamaño 5
     ```

2. **Almacenamiento en Memoria:**
   - Los elementos de un array de caracteres se almacenan de manera contigua en la memoria. Cada elemento ocupa un byte, ya que el tipo de datos `char` tiene un tamaño de 1 byte.

     ```c
     char miArray[] = {'H', 'o', 'l', 'a', '\0'};  // El '\0' indica el final de la cadena
     ```

3. **Acceso a Elementos:**
   - Puedes acceder a cada carácter del array mediante su índice, similar a cualquier otro tipo de array.

     ```c
     char primerCaracter = miArray[0];  // 'H'
     ```

4. **Cadena de Terminación Nula:**
   - Es común finalizar un array de caracteres con el carácter nulo `'\0'` para indicar el final de la cadena. Esto es fundamental para que las funciones de manipulación de cadenas en C sepan dónde termina la cadena.

     ```c
     char saludo[] = "Hola";  // '\0' se añade automáticamente al final
     ```

### Cadena de Caracteres:

1. **Definición y Declaración:**
   - En C, una cadena de caracteres es simplemente un array de caracteres que termina con el carácter nulo (`'\0'`). La cadena de caracteres se representa mediante un puntero al primer carácter del array.

     ```c
     char saludo[] = "Hola";  // Es una cadena de caracteres
     ```

2. **Funciones de Cadena de C:**
   - Las funciones de manipulación de cadenas en C (por ejemplo, `strlen`, `strcpy`, `strcat`, `strcmp`) operan en cadenas de caracteres. Estas funciones utilizan el carácter nulo para determinar el final de la cadena.

3. **Almacenamiento en Memoria:**
   - La cadena de caracteres se almacena de manera similar a un array de caracteres, con la diferencia clave de que se espera que termine con el carácter nulo `'\0'`.

     ```c
     char saludo[] = "Hola";  // '\0' se añade automáticamente al final
     ```

### Diferencias Clave:

1. **Tamaño Dinámico:**
   - Un array de caracteres tiene un tamaño fijo, mientras que una cadena de caracteres puede tener un tamaño dinámico según la longitud de la cadena.

     ```c
     char arrayFijo[10];        // Tamaño fijo
     char cadenaDinamica[20];   // Tamaño dinámico
     ```

2. **Carácter Nulo:**
   - Un array de caracteres no siempre necesita contener el carácter nulo `'\0'`. En cambio, una cadena de caracteres se espera que termine con `'\0'` para indicar su final.

3. **Uso en Funciones:**
   - Las funciones de manipulación de cadenas en C están diseñadas para trabajar con cadenas de caracteres y requieren que la cadena termine con `'\0'`. Por lo tanto, aunque un array de caracteres puede ser tratado como una cadena, es importante tener en cuenta la terminación nula al trabajar con funciones de cadenas.

### Ejemplo de Comportamiento en Memoria:

```c
#include <stdio.h>

int main() {
    char array[] = {'H', 'o', 'l', 'a'};  // Array de caracteres sin terminación nula
    char cadena[] = "Hola";  // Cadena de caracteres con terminación nula

    printf("Array: %s\n", array);   // Imprimir array como cadena (puede ser impredecible)
    printf("Cadena: %s\n", cadena); // Imprimir cadena correctamente

    return 0;
}
```

En este ejemplo, el array de caracteres `array` no tiene terminación nula, por lo que imprimirlo como una cadena con `%s` puede dar lugar a un comportamiento impredecible o incorrecto. En cambio, la cadena de caracteres `cadena` se imprime correctamente porque tiene terminación nula.

En resumen, un array de caracteres es una secuencia de elementos `char` sin garantía de terminación nula, mientras que una cadena de caracteres es un array de caracteres que termina con el carácter nulo `'\0'`. Al trabajar con funciones de manipulación de cadenas en C, es crucial tener en cuenta la terminación nula para evitar errores y comportamientos inesperados.

## Arrays Multidimensionales

**Concepto de un Array Bidimensional en C:**

Un array bidimensional en C es una estructura de datos que organiza la información en dos dimensiones, similar a una cuadrícula o una matriz. Se compone de filas y columnas, y cada elemento en el array puede ser identificado por dos índices: uno para la fila y otro para la columna. Visualmente, se asemeja a una tabla con filas y columnas, donde cada celda contiene un valor específico.

**Ejemplos de la Vida Real:**

1. **Matrices Matemáticas:**
   - Un array bidimensional se puede usar para representar matrices matemáticas, donde las filas y columnas representan elementos y operaciones matriciales.

2. **Tablas de Datos:**
   - En una base de datos, una tabla puede ser representada como un array bidimensional. Las filas pueden representar registros y las columnas los diferentes campos de datos.

3. **Mapas y Gráficos:**
   - En aplicaciones de gráficos y cartografía, un array bidimensional puede representar un mapa, donde cada posición contiene información sobre un punto específico.

4. **Juegos de Tablero:**
   - Los tableros de juegos como el ajedrez o el gato pueden modelarse como arrays bidimensionales, donde cada celda representa una posición en el tablero.

**Comportamiento en la Memoria:**

- En términos de almacenamiento en memoria, los elementos de un array bidimensional se organizan de manera contigua. Pueden almacenarse por filas o por columnas, dependiendo de la implementación del compilador. Cada fila es un bloque contiguo de memoria, y el conjunto de filas conforma la estructura bidimensional.
  
- Visualmente, el array se asemeja a una cuadrícula, pero en la memoria, los elementos están dispuestos de manera lineal. El acceso a un elemento específico implica el cálculo de la dirección de memoria basado en los índices de fila y columna.

En resumen, un array bidimensional en C es una representación eficiente para organizar datos en dos dimensiones. Su uso es común en situaciones donde la información se estructura en filas y columnas, como en matemáticas, bases de datos, juegos de tablero y gráficos. La organización en la memoria facilita el acceso y manipulación de elementos, proporcionando una estructura versátil para modelar datos del mundo real.

## Inicialización de arrays bidimensional

Los arrays multidimensionales se pueden inicializar, al igual que los de una dimensión, cuando se declaran. La inicialización consta de una lista de constantes separadas por comas y encerradas entre llaves, como en los ejemplos siguientes:

1. `int tabla[2][3] = {5, 6, 7, 8, 9, 10};`
   o bien en los formatos más amigables:
2. `int tabla[2][3] = {{5, 6, 7}, {8, 9, 10}};`
3. `int tabla[2][3] = { {5, 6, 7}, {8, 9, 10} };`

En C, hay varias formas de inicializar arrays bidimensionales, y la elección de la forma dependerá de la preferencia del programador y del contexto en el que se esté utilizando el array. Aquí están algunas de las formas comunes de inicializar arrays bidimensionales:

### Forma 1: Inicialización en la Declaración

Puedes inicializar un array bidimensional directamente en el momento de la declaración. En este enfoque, se proporcionan los valores de los elementos dentro de llaves y se utilizan corchetes anidados para representar las filas y columnas.

```c
int matriz1[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

### Forma 2: Inicialización por Filas

Cuando inicializas un array bidimensional por filas, solo proporcionas los valores de los elementos de cada fila en un conjunto de llaves. El compilador infiere el tamaño de la columna basándose en la cantidad de elementos en la primera fila.

```c
int matriz2[][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

### Forma 3: Inicialización Individual de Elementos

Puedes inicializar un array bidimensional proporcionando valores individuales de cada elemento, utilizando corchetes anidados para representar filas y columnas.

```c
int matriz3[2][2] = {
    {1, 2},
    {3, 4}
};
```

### Forma 4: Uso de Inicializadores de Cadenas

Puedes usar inicializadores de cadenas para inicializar arrays bidimensionales. En este caso, cada cadena representa una fila de la matriz.

```c
int matriz4[][5] = {
    [0] = {1, 2, 3, 4, 5},
    [1] = {6, 7, 8, 9, 10}
};
```

### Forma 5: Inicialización por Defecto

Si no proporcionas ningún valor al inicializar un array bidimensional, todos los elementos se inicializarán a cero (o a un valor nulo, en el caso de punteros).

```c
int matriz5[2][3];  // Todos los elementos se inicializan a 0
```

### Explicación:

- En todas las formas, los corchetes exteriores representan las filas y los corchetes interiores representan las columnas.
  
- La primera dimensión del array bidimensional puede omitirse cuando se utiliza inicialización por filas; el compilador infiere el tamaño basándose en el número de elementos en la primera fila.

- Si el tamaño de la segunda dimensión se omite, el compilador lo infiere automáticamente.

- Puedes utilizar índices específicos para inicializar filas, lo que puede hacer que el código sea más legible.

```c
int matriz6[][4] = {
    [2] = {1, 2, 3, 4},
    [0] = {5, 6, 7, 8},
    [1] = {9, 10, 11, 12}
};
```

La elección entre estas formas depende del contexto y de las preferencias personales del programador. Las formas más explícitas pueden hacer que el código sea más fácil de leer y entender, mientras que las formas abreviadas pueden ser útiles para inicializaciones más simples y concisas.

## Acceso a los elementos de los arrays bidimensionales

El acceso a los elementos de un array bidimensional en C implica el uso de dos índices, uno para la fila y otro para la columna. Aquí está la sintaxis para acceder a los elementos:

```c
tipo_dato valor = array_bidimensional[fila][columna];
```

- `array_bidimensional`: Es el nombre del array bidimensional.
- `fila`: Representa el índice de la fila del elemento al que se desea acceder.
- `columna`: Representa el índice de la columna del elemento al que se desea acceder.
- `tipo_dato`: Es el tipo de dato de los elementos en el array bidimensional.

Ejemplo práctico con una matriz de 3x4:

```c
int matriz[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

int valor = matriz[1][2];  // Accede al elemento en la segunda fila y tercera columna (7)
```

En este ejemplo, `matriz[1][2]` accede al valor 7, que está en la segunda fila y tercera columna de la matriz.

Es importante recordar que los índices de los arrays en C comienzan desde 0, por lo que el índice de la primera fila es 0, el índice de la segunda fila es 1, y así sucesivamente. Lo mismo se aplica a las columnas. Acceder a elementos fuera de los límites del array puede provocar comportamientos indefinidos o errores en tiempo de ejecución.

## Uso de arrays bidimensionales en bucles

La lectura y escritura de elementos en arrays bidimensionales en C se realiza mediante el uso de bucles anidados. Aquí te proporciono ejemplos prácticos para ilustrar estos procesos:

### Escritura de Elementos:

Supongamos que tienes una matriz de 3x4:

```c
int matriz[3][4];
```

Para escribir valores en la matriz, puedes utilizar bucles anidados. Por ejemplo, puedes llenar la matriz con valores consecutivos:

```c
#include <stdio.h>

int main() {
    int matriz[3][4];
    int contador = 1;

    // Escribir valores en la matriz
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            matriz[i][j] = contador++;
        }
    }

    // Imprimir la matriz
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

En este ejemplo, se utiliza un contador para asignar valores consecutivos a cada elemento de la matriz.

### Lectura de Elementos:

La lectura de elementos de un array bidimensional también implica el uso de bucles anidados. Aquí hay un ejemplo:

```c
#include <stdio.h>

int main() {
    int matriz[3][4];

    // Leer valores en la matriz
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("Ingrese un valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir la matriz
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

En este ejemplo, se utiliza la función `scanf` para leer valores desde la entrada estándar y asignarlos a cada elemento de la matriz.

Estos ejemplos ilustran cómo puedes utilizar bucles anidados para escribir y leer elementos en un array bidimensional. Puedes adaptar estos conceptos según tus necesidades específicas.

## Array en parámetros

En C, los arrays pueden ser utilizados como parámetros en funciones de varias formas. A continuación, se proporciona una explicación detallada sobre la utilización de arrays como parámetros, incluyendo los diferentes enfoques y consideraciones clave.

### Paso de Arrays como Parámetros:

1. **Paso por Referencia:**
   - En C, los arrays se pasan a funciones por referencia, lo que significa que la función recibe una referencia a la memoria donde se almacena el array. La función puede modificar directamente los valores del array original.

     ```c
     void modificarArray(int arr[], int tamano) {
         for (int i = 0; i < tamano; ++i) {
             arr[i] *= 2;  // Modificación directa de los elementos del array
         }
     }
     ```

     ```c
     int main() {
         int datos[] = {1, 2, 3, 4, 5};
         modificarArray(datos, 5);
         // En este punto, los elementos de 'datos' han sido modificados
         return 0;
     }
     ```

2. **Especificación del Tamaño del Array:**
   - Al pasar un array como parámetro, es común especificar el tamaño del array como otro parámetro. Esto permite que la función sepa cuántos elementos hay en el array.

     ```c
     void imprimirArray(int arr[], int tamano) {
         for (int i = 0; i < tamano; ++i) {
             printf("%d ", arr[i]);
         }
     }
     ```

3. **Uso de Punteros:**
   - Los arrays se pueden representar como punteros en C. Por lo tanto, en lugar de pasar el array directamente, también puedes pasar un puntero al primer elemento del array.

     ```c
     void imprimirArray(int *arr, int tamano) {
         for (int i = 0; i < tamano; ++i) {
             printf("%d ", arr[i]);
         }
     }
     ```

     ```c
     int main() {
         int datos[] = {1, 2, 3, 4, 5};
         imprimirArray(datos, 5);
         return 0;
     }
     ```

### Consideraciones Importantes:

1. **Sin Información sobre el Tamaño:**
   - C no proporciona una forma intrínseca de obtener el tamaño de un array dentro de una función. Por lo tanto, debes pasar el tamaño como un parámetro adicional o utilizar un valor especial para indicar el final del array (por ejemplo, un carácter nulo para arrays de caracteres).

2. **Efectos de Cambio Permanente:**
   - Al pasar un array a una función y modificarlo, los cambios son permanentes y afectan al array original. Esto se debe a que se está trabajando con la referencia a la misma memoria.

3. **Punteros Constantes:**
   - Puedes utilizar `const` para indicar que la función no modificará el contenido del array.

     ```c
     void imprimirArray(const int *arr, int tamano) {
         // No se pueden modificar los elementos de 'arr' aquí
         for (int i = 0; i < tamano; ++i) {
             printf("%d ", arr[i]);
         }
     }
     ```

4. **Arrays Multidimensionales:**
   - Para pasar arrays multidimensionales, se deben especificar las dimensiones adicionales.

     ```c
     void imprimirMatriz(int matriz[][3], int filas) {
         for (int i = 0; i < filas; ++i) {
             for (int j = 0; j < 3; ++j) {
                 printf("%d ", matriz[i][j]);
             }
             printf("\n");
         }
     }
     ```

### Ejemplo Práctico:

```c
#include <stdio.h>

void modificarArray(int arr[], int tamano) {
    for (int i = 0; i < tamano; ++i) {
        arr[i] *= 2;
    }
}

void imprimirArray(const int arr[], int tamano) {
    for (int i = 0; i < tamano; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int datos[] = {1, 2, 3, 4, 5};

    printf("Array original: ");
    imprimirArray(datos, 5);

    modificarArray(datos, 5);

    printf("Array modificado: ");
    imprimirArray(datos, 5);

    return 0;
}
```

Este ejemplo demuestra la modificación de un array dentro de una función y su impresión antes y después de la modificación.

## Paso de cadenas como parámetros

En C, las cadenas de caracteres se representan como arrays de caracteres terminados por un carácter nulo (`'\0'`). Al pasar cadenas como parámetros a funciones, es fundamental entender cómo funcionan estos arrays de caracteres y cómo se manejan en el contexto de funciones. Aquí tienes una explicación detallada del paso de cadenas como parámetros en C:

### Representación de Cadenas en C:

Las cadenas de caracteres en C se representan como arrays de caracteres. Cada carácter individual en la cadena ocupa una posición en el array, y la cadena se termina con el carácter nulo (`'\0'`). El carácter nulo indica el final de la cadena y es esencial para las funciones que manipulan cadenas.

Ejemplo de cadena en C:

```c
char miCadena[] = "Hola";
```

### Paso de Cadenas a Funciones:

Cuando pasas una cadena como parámetro a una función, estás pasando la dirección de memoria del primer carácter en el array. Es decir, estás pasando un puntero al primer elemento de la cadena.

```c
void imprimirCadena(char *cadena) {
    printf("%s\n", cadena);
}
```

### Especificación del Tamaño de la Cadena:

Es común especificar el tamaño de la cadena como un parámetro adicional para que la función sepa la longitud de la cadena. Esto puede ser útil si la función necesita recorrer la cadena o manipularla de alguna manera.

```c
void imprimirCadenaConLongitud(char *cadena, int longitud) {
    for (int i = 0; i < longitud; ++i) {
        printf("%c", cadena[i]);
    }
    printf("\n");
}
```

### Uso de `const` con Cadenas:

Puedes usar la palabra clave `const` para indicar que la función no modificará la cadena. Esto es útil para funciones que solo leen la cadena sin realizar modificaciones.

```c
void imprimirCadenaConst(const char *cadena) {
    printf("%s\n", cadena);
}
```

### Ejemplo Práctico:

```c
#include <stdio.h>

// Función que imprime una cadena sin conocer su longitud
void imprimirCadena(char *cadena) {
    printf("Cadena: %s\n", cadena);
}

// Función que imprime una cadena conocida su longitud
void imprimirCadenaConLongitud(char *cadena, int longitud) {
    printf("Cadena con longitud: ");
    for (int i = 0; i < longitud; ++i) {
        printf("%c", cadena[i]);
    }
    printf("\n");
}

int main() {
    char mensaje[] = "Hola, Mundo";

    imprimirCadena(mensaje);

    // Determinar la longitud de la cadena usando sizeof
    int longitud = sizeof(mensaje) / sizeof(mensaje[0]) - 1;

    imprimirCadenaConLongitud(mensaje, longitud);

    return 0;
}
```

Este ejemplo ilustra cómo pasar y trabajar con cadenas como parámetros en funciones. La función `imprimirCadena` demuestra cómo imprimir una cadena sin conocer su longitud, mientras que la función `imprimirCadenaConLongitud` muestra cómo trabajar con una cadena conocida su longitud.

## Algoritmo de la burbuja

La ordenación de burbuja es un algoritmo simple de ordenación que compara repetidamente pares de elementos adyacentes y los intercambia si están en el orden incorrecto. Este proceso continúa hasta que no se requieren más intercambios, lo que indica que la lista está ordenada.

**Concepto:**
1. Se compara el primer elemento con el segundo.
2. Si el primer elemento es mayor que el segundo, se intercambian.
3. Se pasa al siguiente par de elementos adyacentes y se repite el proceso.
4. Este proceso se repite para cada par de elementos en la lista, avanzando a través de la lista varias veces hasta que no se necesiten más intercambios.

**Ejemplo de Vida Real:**

Imagina que tienes un estante con libros desordenados. Para organizarlos, decides utilizar el método de ordenación de burbuja. Comienzas desde la izquierda del estante y comparas cada par de libros adyacentes. Si el libro de la izquierda es más grande (por ejemplo, tiene más páginas) que el de la derecha, los intercambias. Luego, te mueves al siguiente par de libros y repites el proceso. Haces esto varias veces, pasando por todos los libros en el estante. Cada vez que realizas una pasada completa, el libro más grande "burbujea" hacia la derecha hasta su posición correcta. Repites este proceso hasta que todos los libros estén ordenados en el estante.

En este ejemplo, la acción de comparar y reorganizar los libros es similar a la comparación y el intercambio de elementos en el algoritmo de ordenación de burbuja. La repetición del proceso simboliza las múltiples pasadas a través de la lista que realiza el algoritmo hasta que no se necesitan más intercambios, es decir, hasta que la lista esté ordenada.

Claro, desglosemos el código paso a paso:

```c
#include <stdio.h>

// Función para intercambiar dos elementos
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

Esta parte del código define una función llamada `swap` que toma dos punteros a enteros y realiza un intercambio de valores entre las ubicaciones de memoria a las que apuntan.

```c
// Función de ordenación de burbuja
void ordenarBurbuja(int libros[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Comparar libros adyacentes y intercambiar si están en el orden incorrecto
            if (libros[j] > libros[j + 1]) {
                swap(&libros[j], &libros[j + 1]);
            }
        }
    }
}
```

La función `ordenarBurbuja` implementa el algoritmo de ordenación de burbuja. Utiliza dos bucles anidados para comparar y, si es necesario, intercambiar elementos adyacentes en el arreglo `libros`. La función `swap` se llama para realizar el intercambio.

```c
// Función para imprimir la lista de libros
void imprimirLibros(int libros[], int n) {
    printf("Lista de libros ordenados:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", libros[i]);
    }
    printf("\n");
}
```

La función `imprimirLibros` simplemente imprime en la consola la lista ordenada de libros.

```c
int main() {
    // Ejemplo de libros desordenados
    int estante[] = {5, 2, 8, 1, 4};

    // Obtener el número de libros en el estante
    int numLibros = sizeof(estante) / sizeof(estante[0]);

    // Aplicar el método de ordenación de burbuja
    ordenarBurbuja(estante, numLibros);

    // Imprimir la lista ordenada de libros
    imprimirLibros(estante, numLibros);

    return 0;
}
```

En la función `main`, se crea un arreglo llamado `estante` que representa la lista de libros desordenados. Se obtiene el número de libros en el estante (`numLibros`) dividiendo el tamaño del arreglo entre el tamaño de un elemento del arreglo.

Luego, se llama a `ordenarBurbuja` para ordenar el arreglo `estante` utilizando el método de ordenación de burbuja.

Finalmente, se llama a `imprimirLibros` para mostrar en la consola la lista ordenada de libros. El programa termina con `return 0;`.

En resumen, el código organiza una lista de libros en un estante utilizando el algoritmo de ordenación de burbuja y luego imprime la lista ordenada. La función `swap` facilita el intercambio de elementos, mientras que las funciones `ordenarBurbuja` e `imprimirLibros` se encargan de la ordenación y visualización, respectivamente.

~~~c
#include <stdio.h>

// Función para intercambiar dos elementos
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función de ordenación de burbuja
void ordenarBurbuja(int libros[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Comparar libros adyacentes y intercambiar si están en el orden incorrecto
            if (libros[j] > libros[j + 1]) {
                swap(&libros[j], &libros[j + 1]);
            }
        }
    }
}

// Función para imprimir la lista de libros
void imprimirLibros(int libros[], int n) {
    printf("Lista de libros ordenados:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", libros[i]);
    }
    printf("\n");
}

int main() {
    // Ejemplo de libros desordenados
    int estante[] = {5, 2, 8, 1, 4};

    // Obtener el número de libros en el estante
    int numLibros = sizeof(estante) / sizeof(estante[0]);

    // Aplicar el método de ordenación de burbuja
    ordenarBurbuja(estante, numLibros);

    // Imprimir la lista ordenada de libros
    imprimirLibros(estante, numLibros);

    return 0;
}
~~~

## Búsqueda de listas

Los arrays (listas y tablas) son uno de los medios principales por los cuales se almacenan los datos en programas C. Debido a esta razón, existen operaciones fundamentales cuyo tratamiento es imprescindible conocer. Estas operaciones esenciales son: la búsqueda de elementos y la ordenación o clasificación de las listas.

La búsqueda de un elemento dado en un array (lista o tabla) es una aplicación muy común en el desarrollo de programas en C. Dos algoritmos típicos que realizan esta tarea son la búsqueda secuencial y la búsqueda binaria o dicotómica. La búsqueda secuencial es el método utilizado para listas no ordenadas, mientras que la búsqueda binaria se utiliza en arrays que ya están ordenados.

**8.7.1. Búsqueda secuencial**

La búsqueda secuencial es un método simple y directo para encontrar un elemento específico en un array. Aquí hay una explicación detallada de cómo se realiza la búsqueda secuencial y un ejemplo sin código:

### Búsqueda Secuencial:

1. **Inicio:**
   - La búsqueda comienza desde el primer elemento del array.

2. **Comparación:**
   - Se compara el elemento actual con el elemento buscado.

3. **Coincidencia:**
   - Si el elemento actual coincide con el elemento buscado, se ha encontrado el elemento y la búsqueda se detiene.

4. **No Coincidencia:**
   - Si no hay coincidencia, se pasa al siguiente elemento en el array.

5. **Fin o Elemento Encontrado:**
   - Este proceso se repite hasta que se encuentra el elemento buscado o se llega al final del array.

### Ejemplo de Búsqueda Secuencial (sin código):

Imagina que tienes una lista de nombres en un array y deseas encontrar la posición de un nombre específico en la lista utilizando la búsqueda secuencial.

1. **Inicio:**
   - Comienzas desde el primer nombre en la lista.

2. **Comparación:**
   - Comparas el primer nombre con el nombre que estás buscando.

3. **Coincidencia:**
   - Si el primer nombre coincide con el nombre buscado, has encontrado el nombre y obtienes su posición en el array.

4. **No Coincidencia:**
   - Si no hay coincidencia, te mueves al siguiente nombre en la lista.

5. **Repetición:**
   - Repites este proceso hasta que encuentras el nombre buscado o llegas al final de la lista.

Este método de búsqueda es efectivo, pero puede ser ineficiente en grandes conjuntos de datos, ya que requiere examinar cada elemento uno por uno hasta encontrar una coincidencia.

Por ejemplo, si estás buscando el nombre "Juan" en una lista de nombres, la búsqueda secuencial revisaría cada nombre en orden hasta encontrar "Juan" o llegar al final de la lista.

Vamos a desglosar el código paso a paso:

```c
#include <stdio.h>
#include <string.h>
```

En esta parte, se incluyen las librerías necesarias, en este caso, `<stdio.h>` para funciones de entrada y salida estándar y `<string.h>` para operaciones con cadenas de caracteres.

```c
// Función de búsqueda secuencial
int busquedaSecuencial(char *nombres[], int numNombres, char *nombreBuscado) {
    for (int i = 0; i < numNombres; ++i) {
        if (strcmp(nombres[i], nombreBuscado) == 0) {
            // Coincidencia encontrada, devuelve la posición
            return i;
        }
    }

    // Si no se encuentra el nombre, devuelve -1
    return -1;
}
```

En esta sección, se define la función `busquedaSecuencial`, que toma un array de nombres, el número de nombres en el array y el nombre que se está buscando. Utiliza un bucle `for` para recorrer cada nombre en el array y compara cada nombre con el nombre buscado utilizando `strcmp` (una función que compara dos cadenas de caracteres). Si se encuentra una coincidencia, la función devuelve la posición del nombre en el array. Si no se encuentra, devuelve -1.

```c
int main() {
    // Array de nombres
    char *listaNombres[] = {"Juan", "María", "Carlos", "Ana", "Pedro"};

    // Número de nombres en el array
    int numNombres = sizeof(listaNombres) / sizeof(listaNombres[0]);

    // Nombre a buscar
    char nombreBuscado[] = "Ana";

    // Realizar búsqueda secuencial
    int posicion = busquedaSecuencial(listaNombres, numNombres, nombreBuscado);

    // Verificar el resultado
    if (posicion != -1) {
        printf("El nombre '%s' se encontró en la posición %d.\n", nombreBuscado, posicion);
    } else {
        printf("El nombre '%s' no se encontró en la lista.\n", nombreBuscado);
    }

    return 0;
}
```

En la función `main`, se define un array de nombres (`listaNombres`), se calcula el número de nombres en el array (`numNombres`), y se especifica el nombre que se quiere buscar (`nombreBuscado`). Luego, se llama a la función `busquedaSecuencial` para realizar la búsqueda y se almacena el resultado en la variable `posicion`. Finalmente, se imprime un mensaje en función del resultado: si `posicion` es diferente de -1, se imprime la posición donde se encontró el nombre; de lo contrario, se indica que el nombre no se encontró en la lista.

~~~c
#include <stdio.h>
#include <string.h>

// Función de búsqueda secuencial
int busquedaSecuencial(char *nombres[], int numNombres, char *nombreBuscado) {
    for (int i = 0; i < numNombres; ++i) {
        if (strcmp(nombres[i], nombreBuscado) == 0) {
            // Coincidencia encontrada, devuelve la posición
            return i;
        }
    }

    // Si no se encuentra el nombre, devuelve -1
    return -1;
}

int main() {
    // Array de nombres
    char *listaNombres[] = {"Juan", "María", "Carlos", "Ana", "Pedro"};

    // Número de nombres en el array
    int numNombres = sizeof(listaNombres) / sizeof(listaNombres[0]);

    // Nombre a buscar
    char nombreBuscado[] = "Ana";

    // Realizar búsqueda secuencial
    int posicion = busquedaSecuencial(listaNombres, numNombres, nombreBuscado);

    // Verificar el resultado
    if (posicion != -1) {
        printf("El nombre '%s' se encontró en la posición %d.\n", nombreBuscado, posicion);
    } else {
        printf("El nombre '%s' no se encontró en la lista.\n", nombreBuscado);
    }

    return 0;
}
~~~

### Algoritmo BusquedaSec

Vamos a analizar el código paso a paso:

```c
#include <stdio.h>
```

Aquí se incluye la librería estándar de entrada y salida (`<stdio.h>`) necesaria para utilizar funciones como `printf`.

```c
// Función de búsqueda secuencial para enteros
int busquedaSecuencial(int numeros[], int numElementos, int numeroBuscado) {
    for (int i = 0; i < numElementos; ++i) {
        if (numeros[i] == numeroBuscado) {
            // Número encontrado, devuelve la posición
            return i;
        }
    }

    // Si no se encuentra el número, devuelve -1
    return -1;
}
```

Se define una función llamada `busquedaSecuencial` que toma tres argumentos: un array de enteros (`numeros`), el número de elementos en el array (`numElementos`), y el número que se está buscando (`numeroBuscado`). La función utiliza un bucle `for` para recorrer el array y compara cada elemento con el número buscado. Si encuentra una coincidencia, devuelve la posición del número en el array. Si no encuentra el número, devuelve -1.

```c
int main() {
    // Array de números
    int listaNumeros[] = {10, 5, 8, 20, 15};

    // Número de elementos en el array
    int numElementos = sizeof(listaNumeros) / sizeof(listaNumeros[0]);

    // Número a buscar
    int numeroBuscado = 20;

    // Realizar búsqueda secuencial
    int posicion = busquedaSecuencial(listaNumeros, numElementos, numeroBuscado);

    // Verificar el resultado
    if (posicion != -1) {
        printf("El número %d se encontró en la posición %d.\n", numeroBuscado, posicion);
    } else {
        printf("El número %d no se encontró en la lista.\n", numeroBuscado);
    }

    return 0;
}
```

En la función `main`, se crea un array de números (`listaNumeros`). Luego, se calcula el número de elementos en el array (`numElementos`) dividiendo el tamaño del array por el tamaño de un elemento del array.

Se especifica el número que se desea buscar (`numeroBuscado`). A continuación, se llama a la función `busquedaSecuencial` para realizar la búsqueda y se almacena el resultado en la variable `posicion`.

Finalmente, se verifica el resultado: si `posicion` es diferente de -1, se imprime un mensaje indicando la posición donde se encontró el número. Si `posicion` es -1, se imprime un mensaje indicando que el número no se encontró en la lista.

Este programa busca el número `20` en el array de enteros y muestra la posición si se encuentra, o indica que el número no está en la lista.