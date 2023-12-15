# Estructura de control

## Temario
1. [Introducción](#Introducción)
2. [While](#While)
3. [Do-while](#Do-while)
4. [For](#For)
5. [Bucles anidados](#Bucles-anidados)
5. [Sangria en control de flujo](#Sangria-en-control-de-flujo)
6. [Break](#Break)
7. [Continue](#Continue)
8. [Resumen](#Resumen)

## Introducción

¡Bienvenido al curso de Estructuras de Control en C! En este fascinante viaje de programación, exploraremos cómo dirigir el flujo de ejecución en C. Desde el versátil `while` hasta el persistente `do-while`, el eficiente `for` y bucles anidados que dan forma a algoritmos complejos. Aprenderemos sobre la importancia de la sangría en la legibilidad del código y cómo las declaraciones `break` y `continue` pueden modificar el comportamiento del bucle. ¡Sumérgete en el fascinante mundo de las estructuras de control en C y descubre cómo transformar tus ideas en ejecuciones precisas y controladas!

## While

El bucle `while` en C se utiliza para repetir un bloque de código mientras una condición dada sea verdadera. Aquí está la explicación clara, la sintaxis y cómo poner condiciones en el bucle:

### Sintaxis de `while`:

```c
while (condicion) {
    // Código a ejecutar mientras la condición sea verdadera
}
```

- La `condicion` es una expresión booleana que se evalúa antes de cada iteración del bucle.
- Si la condición es verdadera, el bloque de código dentro del `while` se ejecuta.
- Si la condición es falsa, el bucle se detiene y la ejecución continúa después del bucle.

### Ejemplo Simple:

Supongamos que queremos imprimir los números del 1 al 5 usando un bucle `while`:

```c
#include <stdio.h>

int main() {
    int i = 1;  // Inicializamos la variable de control

    while (i <= 5) {  // Condición del bucle
        printf("%d\n", i);  // Código a ejecutar en cada iteración
        i++;  // Actualizamos la variable de control
    }

    return 0;
}
```

Este programa imprimirá los números del 1 al 5, ya que la condición `i <= 5` es verdadera en cada iteración, y `i` se incrementa en cada iteración con `i++`.

### Condiciones en el Bucle:

- La `condicion` en el `while` puede ser cualquier expresión booleana.
- La condición se evalúa antes de cada iteración. Si es verdadera, se ejecuta el bloque de código dentro del `while`.
- Si la condición es falsa desde el principio, el bloque de código dentro del bucle nunca se ejecutará.

### Nota Importante:

- Si la condición es falsa desde el principio, el bloque de código dentro del bucle no se ejecutará.

El bucle `while` es útil cuando no conoces de antemano cuántas veces se repetirá el bucle, ya que la condición se evalúa antes de cada iteración. Es esencial tener cuidado con la inicialización y actualización de la variable de control para evitar bucles infinitos.

## Do-while

El bucle `do-while` en C es una estructura de control de repetición que ejecuta un bloque de código al menos una vez, y luego repite la ejecución del bloque mientras una condición dada sea verdadera. Aquí tienes una explicación clara, la sintaxis y un ejemplo de la vida real:

### Sintaxis de `do-while`:

```c
do {
    // Código a ejecutar al menos una vez
} while (condicion);
```

- El bloque de código entre las llaves `{}` se ejecuta al menos una vez, independientemente de la condición.
- Después de ejecutar el bloque, la `condicion` se evalúa.
- Si la condición es verdadera, el bucle se repite; si es falsa, el bucle se detiene.

### Ejemplo de la Vida Real:

Supongamos que queremos solicitar al usuario que ingrese un número positivo y repetir la solicitud hasta que realmente ingrese un número positivo:

```c
#include <stdio.h>

int main() {
    int numero;

    do {
        // Solicitar al usuario que ingrese un número
        printf("Ingrese un número positivo: ");
        scanf("%d", &numero);

        // Verificar si el número es positivo
        if (numero <= 0) {
            printf("Número no válido. Por favor, ingrese un número positivo.\n");
        }
    } while (numero <= 0);

    // El bucle se ejecutará al menos una vez hasta que el usuario ingrese un número positivo.

    printf("Número válido: %d\n", numero);

    return 0;
}
```

En este ejemplo:

- El bucle `do-while` se utiliza para solicitar al usuario que ingrese un número positivo al menos una vez.
- Después de solicitar el número, se verifica si es positivo. Si no lo es, se muestra un mensaje y se repite el bucle.

Este tipo de bucle es útil cuando deseas garantizar que cierto código se ejecute al menos una vez antes de verificar la condición. A diferencia del bucle `while`, que podría no ejecutar el código si la condición inicialmente es falsa, el bucle `do-while` garantiza que el código se ejecute al menos una vez.

## For

El bucle `for` en C es una estructura de control de repetición que permite ejecutar un bloque de código de manera iterativa. Este bucle es especialmente útil cuando se conoce de antemano el número exacto de iteraciones que se deben realizar. A continuación, proporciono una explicación clara, la sintaxis y un ejemplo de la vida real:

### Sintaxis de `for`:

```c
for (inicialización; condición; actualización) {
    // Código a ejecutar en cada iteración
}
```

- `inicialización`: Se ejecuta una vez al principio del bucle. Se utiliza para inicializar la variable de control.
- `condición`: Se evalúa antes de cada iteración. Si es verdadera, el bucle continúa; si es falsa, el bucle se detiene.
- `actualización`: Se ejecuta al final de cada iteración. Se utiliza para modificar la variable de control.

### Ejemplo de la Vida Real:

Supongamos que queremos calcular la suma de los primeros 10 números naturales:

```c
#include <stdio.h>

int main() {
    int suma = 0;  // Inicializamos la variable de suma

    // Utilizamos un bucle for para sumar los primeros 10 números naturales
    for (int i = 1; i <= 10; i++) {
        suma += i;  // Actualizamos la variable de suma en cada iteración
    }

    // Mostramos el resultado
    printf("La suma de los primeros 10 números naturales es: %d\n", suma);

    return 0;
}
```

En este ejemplo:

- La variable de control `i` se inicializa en 1.
- La condición `i <= 10` se evalúa antes de cada iteración.
- La variable de control `i` se incrementa en 1 al final de cada iteración (`i++`).
- La variable de suma se actualiza en cada iteración, acumulando la suma de los primeros 10 números naturales.

Este bucle es eficiente cuando se conoce el número exacto de iteraciones y permite expresar de manera concisa el proceso de iteración. La estructura `for` es comúnmente utilizada en situaciones donde se tiene un control preciso sobre el número de repeticiones necesarias.

## Sangria en control de flujo

El uso sin llaves (`{}`) se refiere a escribir una sola instrucción en el cuerpo de una estructura de control de flujo (`if`, `else`, `else-if`, `while`, `for`, `do-while`). Aquí hay ejemplos de cómo se puede utilizar en una sola instrucción y en qué casos es aplicable:

### Uso sin llaves en una sola instrucción:

1. **if:**
   ```c
   if (condicion)
       printf("Una sola instrucción en if\n");
   ```

2. **if-else:**
   ```c
   if (condicion)
       printf("Una sola instrucción en if\n");
   else
       printf("Una sola instrucción en else\n");
   ```

3. **if-else-if:**
   ```c
   if (condicion1)
       printf("Instrucción para condición 1\n");
   else if (condicion2)
       printf("Instrucción para condición 2\n");
   ```

4. **while:**
   ```c
   while (condicion)
       printf("Una sola instrucción en while\n");
   ```

5. **for:**
   ```c
   for (int i = 0; i < 5; ++i)
       printf("Una sola instrucción en for\n");
   ```

6. **do-while:**
   ```c
   do
       printf("Una sola instrucción en do-while\n");
   while (condicion);
   ```

### Uso en una sola instrucción:

1. **do-while:**
   ```c
   do printf("Una sola instrucción en do-while\n"); while (condicion);
   ```

2. **for:**
   ```c
   for (int i = 0; i < 5; ++i) printf("Una sola instrucción en for\n");
   ```

3. **while:**
   ```c
   while (condicion) printf("Una sola instrucción en while\n");
   ```

Es importante tener en cuenta que el uso sin llaves está permitido solo cuando hay una instrucción. Si necesitas ejecutar más de una instrucción, entonces se deben utilizar llaves para delimitar el bloque de código. El uso sin llaves puede ser propenso a errores si no se maneja cuidadosamente.

En estos ejemplos, la sangría se utiliza para indicar la relación de la instrucción con la estructura de control de flujo. Sin embargo, ten en cuenta que esta práctica puede llevar a errores sutiles si no se maneja cuidadosamente, especialmente cuando se agregan más líneas de código. Es altamente recomendable utilizar llaves `{}` para delimitar bloques de código, incluso si solo contienen una única instrucción, para evitar posibles problemas de lectura y mantenimiento del código.

## Bucles anidados

Los bucles anidados son aquellos en los que un bucle está contenido dentro de otro bucle. Estos son útiles cuando necesitas realizar operaciones repetitivas en varias dimensiones o para procesar estructuras de datos más complejas. Aquí tienes ejemplos de bucles anidados utilizando `while`, `do-while` y `for`.

### Bucles Anidados con `while`:

```c
#include <stdio.h>

int main() {
    int i = 1;

    // Bucle externo con while
    while (i <= 3) {
        int j = 1;

        // Bucle interno con while
        while (j <= 3) {
            printf("(%d, %d) ", i, j);
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
```

Este ejemplo imprimirá:

```
(1, 1) (1, 2) (1, 3) 
(2, 1) (2, 2) (2, 3) 
(3, 1) (3, 2) (3, 3) 
```

### Bucles Anidados con `do-while`:

```c
#include <stdio.h>

int main() {
    int i = 1;

    // Bucle externo con do-while
    do {
        int j = 1;

        // Bucle interno con do-while
        do {
            printf("(%d, %d) ", i, j);
            j++;
        } while (j <= 3);

        printf("\n");
        i++;
    } while (i <= 3);

    return 0;
}
```

Este ejemplo también imprimirá:

```
(1, 1) (1, 2) (1, 3) 
(2, 1) (2, 2) (2, 3) 
(3, 1) (3, 2) (3, 3) 
```

### Bucles Anidados con `for`:

```c
#include <stdio.h>

int main() {
    // Bucle externo con for
    for (int i = 1; i <= 3; i++) {
        // Bucle interno con for
        for (int j = 1; j <= 3; j++) {
            printf("(%d, %d) ", i, j);
        }

        printf("\n");
    }

    return 0;
}
```

Este ejemplo también imprimirá:

```
(1, 1) (1, 2) (1, 3) 
(2, 1) (2, 2) (2, 3) 
(3, 1) (3, 2) (3, 3) 
```

En estos ejemplos, se utilizan bucles anidados para imprimir combinaciones de números. Puedes adaptar la lógica según tus necesidades y trabajar con estructuras de datos más complejas. Es importante tener en cuenta que los bucles anidados pueden aumentar la complejidad del código, así que úsalos con cuidado para mantener la legibilidad.

## Break

La palabra clave `break` en C se utiliza para salir de un bucle o de un bloque de código antes de que se complete su ejecución normal. Su uso suele estar condicionado a alguna condición específica que, cuando se cumple, provoca la salida prematura del bucle o bloque. Aquí tienes una explicación clara y un ejemplo de la vida real:

### Uso de `break` en Bucle `while`:

```c
#include <stdio.h>

int main() {
    int numero;

    // Bucle para encontrar el primer número divisible por 5 y 7
    while (1) {
        printf("Ingrese un número: ");
        scanf("%d", &numero);

        if (numero % 5 == 0 && numero % 7 == 0) {
            printf("¡Número encontrado: %d!\n", numero);
            break;  // Salir del bucle si se cumple la condición
        } else {
            printf("No es el número buscado. Inténtelo de nuevo.\n");
        }
    }

    return 0;
}
```

En este ejemplo, el bucle `while` se ejecuta continuamente hasta que se ingresa un número que es divisible por 5 y 7. Tan pronto como se cumple esta condición, se imprime el mensaje y se utiliza `break` para salir del bucle.

### Uso de `break` en Bucle `for`:

```c
#include <stdio.h>

int main() {
    // Bucle para encontrar el primer número divisible por 3
    for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            printf("¡Número encontrado: %d!\n", i);
            break;  // Salir del bucle si se cumple la condición
        }
    }

    return 0;
}
```

En este ejemplo, el bucle `for` se ejecuta para los valores de `i` de 1 a 10. Tan pronto como se encuentra el primer número divisible por 3, se imprime el mensaje y se utiliza `break` para salir del bucle.

### Explicación:

- `break` se coloca dentro de una estructura de control de flujo (como un bucle o un `switch`).
- Cuando se ejecuta `break`, el control del programa sale inmediatamente de la estructura de control de flujo en la que se encuentra.
- Es importante usar `break` con moderación y tener en cuenta que su uso excesivo puede hacer que el código sea menos legible.

El uso de `break` es útil para salir de un bucle tan pronto como se cumple una condición deseada, evitando así que el bucle continúe ejecutándose innecesariamente.

## Continue

La palabra clave `continue` en C se utiliza para omitir el resto del código dentro de un bucle en una iteración específica y pasar directamente a la siguiente iteración. A continuación, te proporciono una explicación clara y un ejemplo de la vida real:

### Uso de `continue` en Bucle `while`:

```c
#include <stdio.h>

int main() {
    int numero;

    // Bucle para imprimir solo números pares
    while (1) {
        printf("Ingrese un número (o 0 para salir): ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Saliendo del programa.\n");
            break;
        }

        if (numero % 2 != 0) {
            printf("Número impar. Solo se permiten números pares.\n");
            continue;  // Omitir el resto del código y continuar con la siguiente iteración
        }

        printf("Número par ingresado: %d\n", numero);
    }

    return 0;
}
```

En este ejemplo, el bucle `while` se utiliza para solicitar al usuario que ingrese números. Si el número ingresado es impar, se imprime un mensaje y se utiliza `continue` para omitir el resto del código dentro del bucle y pasar directamente a la siguiente iteración.

### Uso de `continue` en Bucle `for`:

```c
#include <stdio.h>

int main() {
    // Bucle para imprimir solo números impares del 1 al 10
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // Omitir el resto del código y continuar con la siguiente iteración
        }

        printf("Número impar: %d\n", i);
    }

    return 0;
}
```

En este ejemplo, el bucle `for` se utiliza para imprimir solo los números impares del 1 al 10. Cuando se encuentra un número par, se utiliza `continue` para omitir el resto del código dentro del bucle y pasar directamente a la siguiente iteración.

### Explicación:

- `continue` se coloca dentro de una estructura de control de flujo (como un bucle).
- Cuando se ejecuta `continue`, el control del programa salta directamente al final del bucle y comienza la siguiente iteración.
- Es útil para omitir ciertas operaciones o bloques de código en casos específicos dentro de un bucle.

El uso de `continue` permite un control más preciso del flujo dentro de bucles, omitiendo secciones específicas de código en función de condiciones particulares. Es importante usar `continue` con cuidado para evitar la creación de lógica de código confusa o difícil de entender.

## Resumen

En esta fascinante sección sobre estructuras de control en C, exploramos diversas herramientas para dirigir el flujo de ejecución. Desde los versátiles bucles como el "while", "do-while" y "for", hasta la elegante lógica de los bucles anidados. Descubrimos cómo la sangría en el control de flujo mejora la legibilidad del código, facilitando la comprensión. Celebramos tus logros al entender conceptos clave como "break" y "continue", permitiéndote dominar el arte de dirigir el programa según tus necesidades. ¡Felicitaciones por completar esta sección! Has construido una base sólida para el control de flujo en C. ¡Bien hecho!