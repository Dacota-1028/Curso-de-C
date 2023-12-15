# Operadores

## Temario
1. [Introducción](#Introducción)
2. [O. Aritméticos](#O.-Aritméticos)
3. [O. de Asignación](#O.-de-Asignación)
4. [O. de Comparación](#O.-de-Comparación)
5. [O. Logicos](#O.-Logicos)
6. [Incremento y Decremento](#Incremento-y-Decremento)
7. [Prioridad de los Operadores](#Prioridad-de-los-Operadores)
8. [Conversión de Datos](#Conversión-de-Datos)
9. [Operador sizeof()](#Operador-sizeof())
10. [Resumen](#Resumen)

## Introducción

¡Bienvenidos al emocionante mundo de los operadores en el lenguaje de programación C! Este curso te sumergirá en el fascinante universo de las operaciones aritméticas, asignación, comparación y lógicas. Exploraremos el poder de los operadores de incremento y decremento, y desvelaremos la magia de la prioridad de operadores. Conquistaremos la conversión de datos y desentrañaremos el misterio detrás del operador `sizeof()`. Prepárate para una emocionante travesía donde aprenderás a dominar estas herramientas esenciales para esculpir programas eficientes y potentes. ¡Únete a nosotros y descubre cómo los operadores dan vida a tu código en el fascinante universo de C!

## O. Aritméticos

Los operadores aritméticos en el lenguaje de programación C se utilizan para realizar operaciones matemáticas en variables numéricas. Aquí tienes una descripción de los operadores aritméticos comunes en C, junto con sus conceptos y ejemplos:

### 1. **Operador de Suma `+`:**
- **Concepto:** Realiza la suma de dos operandos.
- **Ejemplo:**
  ```c
  int resultado = 5 + 3;  // resultado contendrá 8
  ```

### 2. **Operador de Resta `-`:**
- **Concepto:** Realiza la resta del segundo operando al primero.
- **Ejemplo:**
  ```c
  int resultado = 10 - 4;  // resultado contendrá 6
  ```

### 3. **Operador de Multiplicación `*`:**
- **Concepto:** Realiza la multiplicación de dos operandos.
- **Ejemplo:**
  ```c
  int resultado = 3 * 5;  // resultado contendrá 15
  ```

### 4. **Operador de División `/`:**
- **Concepto:** Realiza la división del primer operando por el segundo.
- **Ejemplo:**
  ```c
  float resultado = 15.0 / 3;  // resultado contendrá 5.0
  ```

### 5. **Operador de Módulo `%`:**
- **Concepto:** Devuelve el residuo de la división del primer operando por el segundo.
- **Ejemplo:**
  ```c
  int resultado = 17 % 5;  // resultado contendrá 2
  ```

### Ejemplo Completo:

```c
#include <stdio.h>

int main() {
    // Operadores aritméticos
    int a = 10, b = 3;
    int suma = a + b;       // 13
    int resta = a - b;      // 7
    int multiplicacion = a * b;  // 30
    float division = (float)a / b;  // 3.33333
    int modulo = a % b;     // 1

    // Operadores de incremento y decremento

    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicacion: %d\n", multiplicacion);
    printf("Division: %f\n", division);
    printf("Modulo: %d\n", modulo);
    printf("Numero: %d\n", numero);

    return 0;
}
```

Estos operadores son fundamentales para realizar operaciones matemáticas en programas en C y son ampliamente utilizados en algoritmos y cálculos en general.

La asociatividad y el uso de paréntesis en los operadores aritméticos en el lenguaje de programación C son importantes para determinar el orden en que se evalúan las expresiones. Las reglas establecen el comportamiento predeterminado, pero los paréntesis pueden anular esas reglas y cambiar el orden de evaluación. Aquí están las reglas y algunas explicaciones:

### 1. **Asociatividad:**
   - La asociatividad se refiere al orden en que se evalúan las operaciones con el mismo nivel de prioridad.
   - En C, los operadores aritméticos (`+`, `-`, `*`, `/`, `%`) son asociativos de izquierda a derecha, lo que significa que las operaciones se evalúan de izquierda a derecha si tienen la misma prioridad.

### 2. **Prioridad de Operadores Aritméticos:**
   - La prioridad determina el orden en que se evalúan las operaciones. Los operadores con mayor prioridad se evalúan antes.
   - La prioridad de los operadores aritméticos es: `*, /, %` tienen mayor prioridad que `+, -`.

### 3. **Uso de Paréntesis:**
   - Los paréntesis pueden anular la asociatividad y la prioridad, forzando a evaluar primero la expresión dentro de los paréntesis.
   - Los paréntesis también se utilizan para hacer que el código sea más legible y expresar con claridad la intención del programador.

### Ejemplos:

1. **Asociatividad sin Paréntesis:**
   ```c
   int resultado = 5 * 2 / 3;  // Multiplicación y división, asociatividad izquierda a derecha
   // Se evalúa como: ((5 * 2) / 3) = 10 / 3 = 3
   ```

2. **Uso de Paréntesis para Cambiar el Orden:**
   ```c
   int resultado = 5 * (2 / 3);  // Se evalúa como: 5 * (0) = 0
   ```

3. **Operadores con Distinta Prioridad:**
   ```c
   int resultado = 5 + 2 * 3;  // Se evalúa como: 5 + (2 * 3) = 11
   ```

4. **Uso de Paréntesis para Claridad:**
   ```c
   int resultado = (5 + 2) * 3;  // Se evalúa como: (5 + 2) * 3 = 21
   ```

### Reglas Generales:

- **Paréntesis Primero:** Los paréntesis siempre tienen la mayor prioridad, y cualquier expresión dentro de paréntesis se evalúa primero.

- **Asociatividad de Izquierda a Derecha:** Si no hay paréntesis, las operaciones se evalúan de izquierda a derecha.

- **Prioridad:** Las operaciones con mayor prioridad se evalúan antes. Si dos operadores tienen la misma prioridad, la asociatividad decide el orden.

El uso adecuado de paréntesis es fundamental para asegurar que las expresiones se evalúen de la manera esperada y para mejorar la legibilidad del código.

## O. de Asignación

Los operadores de asignación en el lenguaje de programación C se utilizan para asignar valores a variables. Aquí tienes una descripción de los operadores de asignación comunes en C, junto con sus conceptos y ejemplos:

### 1. **Operador de Asignación Simple `=`:**
- **Concepto:** Asigna el valor del lado derecho al operando del lado izquierdo.
- **Ejemplo:**
  ```c
  int x = 10;  // La variable x ahora contiene 10
  ```

### 2. **Operador de Asignación con Suma `+=`:**
- **Concepto:** Incrementa el operando del lado izquierdo por el valor del lado derecho y almacena el resultado en el operando del lado izquierdo.
- **Ejemplo:**
  ```c
  int y = 5;
  y += 3;  // La variable y ahora contiene 8 (5 + 3)
  ```

### 3. **Operador de Asignación con Resta `-=`:**
- **Concepto:** Decrementa el operando del lado izquierdo por el valor del lado derecho y almacena el resultado en el operando del lado izquierdo.
- **Ejemplo:**
  ```c
  int z = 7;
  z -= 4;  // La variable z ahora contiene 3 (7 - 4)
  ```

### 4. **Operador de Asignación con Multiplicación `*=`:**
- **Concepto:** Multiplica el operando del lado izquierdo por el valor del lado derecho y almacena el resultado en el operando del lado izquierdo.
- **Ejemplo:**
  ```c
  int a = 6;
  a *= 2;  // La variable a ahora contiene 12 (6 * 2)
  ```

### 5. **Operador de Asignación con División `/=`:**
- **Concepto:** Divide el operando del lado izquierdo por el valor del lado derecho y almacena el resultado en el operando del lado izquierdo.
- **Ejemplo:**
  ```c
  int b = 20;
  b /= 4;  // La variable b ahora contiene 5 (20 / 4)
  ```

### 6. **Operador de Asignación con Módulo `%=`:**
- **Concepto:** Calcula el módulo del operando del lado izquierdo por el valor del lado derecho y almacena el resultado en el operando del lado izquierdo.
- **Ejemplo:**
  ```c
  int c = 15;
  c %= 4;  // La variable c ahora contiene 3 (15 % 4)
  ```

### Ejemplo Completo:

```c
#include <stdio.h>

int main() {
    // Operadores de asignación
    int x = 10;
    x += 5;  // x ahora es 15
    x -= 3;  // x ahora es 12
    x *= 2;  // x ahora es 24
    x /= 4;  // x ahora es 6
    x %= 3;  // x ahora es 0

    printf("Resultado: %d\n", x);

    return 0;
}
```

Estos operadores de asignación son esenciales para actualizar el valor de las variables en función de operaciones aritméticas u otros cálculos. Permiten realizar operaciones y actualizar el valor de la variable en una única expresión.

## O. de Comparación

Los operadores de comparación en el lenguaje de programación C se utilizan para comparar dos valores y devolver un resultado booleano (`true` o `false`). Aquí tienes una descripción de los operadores de comparación comunes en C, junto con sus conceptos y ejemplos:

### 1. **Operador de Igualdad `==`:**
- **Concepto:** Compara si dos valores son iguales.
- **Ejemplo:**
  ```c
  int a = 5, b = 5;
  int resultado = (a == b);  // Devuelve true (1) si a es igual a b
  ```

### 2. **Operador de Desigualdad `!=`:**
- **Concepto:** Compara si dos valores no son iguales.
- **Ejemplo:**
  ```c
  int a = 5, b = 7;
  int resultado = (a != b);  // Devuelve true (1) si a no es igual a b
  ```

### 3. **Operador de Mayor que `>`:**
- **Concepto:** Compara si el valor de la izquierda es mayor que el valor de la derecha.
- **Ejemplo:**
  ```c
  int a = 8, b = 5;
  int resultado = (a > b);  // Devuelve true (1) si a es mayor que b
  ```

### 4. **Operador de Menor que `<`:**
- **Concepto:** Compara si el valor de la izquierda es menor que el valor de la derecha.
- **Ejemplo:**
  ```c
  int a = 3, b = 6;
  int resultado = (a < b);  // Devuelve true (1) si a es menor que b
  ```

### 5. **Operador de Mayor o Igual que `>=`:**
- **Concepto:** Compara si el valor de la izquierda es mayor o igual al valor de la derecha.
- **Ejemplo:**
  ```c
  int a = 5, b = 5;
  int resultado = (a >= b);  // Devuelve true (1) si a es mayor o igual a b
  ```

### 6. **Operador de Menor o Igual que `<=`:**
- **Concepto:** Compara si el valor de la izquierda es menor o igual al valor de la derecha.
- **Ejemplo:**
  ```c
  int a = 4, b = 6;
  int resultado = (a <= b);  // Devuelve true (1) si a es menor o igual a b
  ```

### Ejemplo Completo:

```c
#include <stdio.h>

int main() {
    // Operadores de comparación
    int x = 10, y = 20;
    
    // Ejemplos de comparación y resultados booleanos
    int igual = (x == y);      // Devuelve false (0) porque x no es igual a y
    int no_igual = (x != y);   // Devuelve true (1) porque x no es igual a y
    int mayor_que = (x > y);    // Devuelve false (0) porque x no es mayor que y
    int menor_que = (x < y);    // Devuelve true (1) porque x es menor que y
    int mayor_igual = (x >= y); // Devuelve false (0) porque x no es mayor o igual a y
    int menor_igual = (x <= y); // Devuelve true (1) porque x es menor o igual a y

    printf("Igual: %d\n", igual);
    printf("No igual: %d\n", no_igual);
    printf("Mayor que: %d\n", mayor_que);
    printf("Menor que: %d\n", menor_que);
    printf("Mayor o igual que: %d\n", mayor_igual);
    printf("Menor o igual que: %d\n", menor_igual);

    return 0;
}
```

Estos operadores de comparación son fundamentales para realizar decisiones en el flujo de un programa y para evaluar expresiones lógicas en general.

## O. Logicos

Los operadores lógicos en el lenguaje de programación C se utilizan para realizar operaciones lógicas en variables booleanas y expresiones condicionales. Aquí tienes una descripción de los operadores lógicos comunes en C, junto con sus conceptos y ejemplos, utilizando operadores de comparación para obtener resultados booleanos:

### 1. **Operador Lógico AND `&&`:**
- **Concepto:** Devuelve `true` (1) si ambas expresiones son `true`, de lo contrario, devuelve `false` (0).
- **Ejemplo:**
  ```c
  int a = 5, b = 10;
  int resultado = (a > 0) && (b < 20);  // Devuelve true (1) porque ambas condiciones son verdaderas
  ```

### 2. **Operador Lógico OR `||`:**
- **Concepto:** Devuelve `true` (1) si al menos una de las expresiones es `true`, de lo contrario, devuelve `false` (0).
- **Ejemplo:**
  ```c
  int x = 8, y = 3;
  int resultado = (x > 5) || (y == 2);  // Devuelve true (1) porque la primera condición es verdadera
  ```

### 3. **Operador Lógico NOT `!`:**
- **Concepto:** Devuelve `true` (1) si la expresión es `false` y viceversa.
- **Ejemplo:**
  ```c
  int z = 15;
  int resultado = !(z == 10);  // Devuelve true (1) porque la condición es falsa
  ```

### Ejemplo Completo:

```c
#include <stdio.h>

int main() {
    // Operadores lógicos con operadores de comparación
    int a = 5, b = 10;
    int resultado_and = (a > 0) && (b < 20);   // Devuelve true (1)
    int resultado_or = (a > 0) || (b == 5);    // Devuelve true (1)
    int resultado_not = !(a == b);             // Devuelve true (1)

    printf("AND: %d\n", resultado_and);
    printf("OR: %d\n", resultado_or);
    printf("NOT: %d\n", resultado_not);

    return 0;
}
```

Estos operadores lógicos son fundamentales para realizar evaluaciones condicionales y tomar decisiones basadas en múltiples condiciones. En este ejemplo, se utilizan operadores de comparación para construir expresiones lógicas y se obtienen resultados booleanos utilizando los operadores lógicos `&&`, `||`, y `!`.

## Incremento y Decremento

Los operadores de incremento y decremento en el lenguaje de programación C se utilizan para aumentar o disminuir el valor de una variable en 1, respectivamente. Estos operadores son convenientes y se utilizan con frecuencia en bucles y expresiones matemáticas. Aquí tienes una descripción de los operadores de incremento y decremento:

### 1. **Operador de Incremento `++`:**
- **Concepto:** Aumenta el valor de la variable en 1.
- **Sintaxis:**
  ```c
  variable++;
  ++variable;
  ```
- **Ejemplo:**
  ```c
  int x = 5;
  x++;  // Ahora, x es 6
  ```

### 2. **Operador de Decremento `--`:**
- **Concepto:** Disminuye el valor de la variable en 1.
- **Sintaxis:**
  ```c
  variable--;
  --variable;
  ```
- **Ejemplo:**
  ```c
  int y = 8;
  y--;  // Ahora, y es 7
  ```

### 3. **Preincremento y Predecremento:**
- Cuando el operador está antes de la variable, se llama preincremento o predecremento. En este caso, el valor se incrementa o decrementa antes de que se evalúe la expresión que contiene la variable.
  ```c
  int c = 10, d;
  d = ++c;  // c y d son ambos 11 después de esta operación
  ```

### 4. **Postincremento y Postdecremento:**
- Cuando el operador está después de la variable, se llama postincremento o postdecremento. En este caso, el valor se incrementa o decrementa después de que se evalúa la expresión que contiene la variable.
  ```c
  int e = 7, f;
  f = e++;  // f obtiene el valor de e antes de incrementarse, e después es 8
  ```

### Ejemplo Completo:

```c
#include <stdio.h>

int main() {
    int a = 5, b, c = 10, d, e = 7, f;

    // Operadores de incremento
    b = a++;  // b obtiene el valor de a antes de incrementarse, a después es 6
    d = ++c;  // c y d son ambos 11 después de esta operación
    f = e++;  // f obtiene el valor de e antes de incrementarse, e después es 8

    printf("Postincremento: a = %d, b = %d\n", a, b);
    printf("Preincremento: c = %d, d = %d\n", c, d);
    printf("Postincremento: e = %d, f = %d\n", e, f);

    return 0;
}
```

Estos operadores de incremento y decremento son especialmente útiles en bucles y operaciones matemáticas donde es necesario ajustar el valor de las variables de manera eficiente.

## Prioridad de los Operadores

En el lenguaje de programación C, los operadores de asignación tienen una prioridad más baja que la mayoría de los otros operadores. Además, tienen asociatividad de derecha a izquierda, lo que significa que las asignaciones se evalúan de derecha a izquierda en expresiones encadenadas.

La tabla a continuación muestra algunos operadores comunes en C, ordenados por prioridad de mayor a menor:

1. `()`: Paréntesis (mayor prioridad)
4. `++` y `--`: Incremento y decremento unario
5. `+`, `-`: Positivo y negativo unarios
6. `*`, `/`, `%`: Multiplicación, división y módulo
7. `+`, `-`: Suma y resta
9. `<`, `<=`, `>`, `>=`: Operadores de comparación
10. `==`, `!=`: Igualdad y desigualdad
14. `&&`: AND lógico
15. `||`: OR lógico
17. `=`: Operador de asignación (asociatividad de derecha a izquierda, baja prioridad)

Es importante tener en cuenta que, aunque la asignación (`=`) tiene una prioridad baja, su asociatividad de derecha a izquierda significa que las asignaciones se evalúan de derecha a izquierda en expresiones encadenadas. Esto puede tener un impacto en el resultado cuando se tienen múltiples asignaciones en una sola expresión.

Aquí tienes varios ejemplos de ecuaciones combinando las reglas de prioridad de operadores que proporcionaste:

1. **Ecuación Simple con Operadores Aritméticos:**
   ```c
   int resultado = (5 * 3 + 2) / (4 - 1);
   ```

2. **Uso de Operadores Relacionales:**
   ```c
   int x = 7, y = 10;
   int resultado = (x > 5) && (y <= 15);
   ```

3. **Combinación de Operadores Aritméticos y Lógicos:**
   ```c
   int a = 8, b = 4, c = 2;
   int resultado = (a / b) + (c % 2 == 0);
   ```

4. **Incremento y Decremento Unario:**
   ```c
   int i = 5, j = 3;
   int resultado = ++i * j--;
   ```

5. **Operadores Aritméticos con Asignación:**
   ```c
   int x = 10;
   x += 5 * 2;
   ```

6. **Operadores Lógicos con Paréntesis:**
   ```c
   int a = 3, b = 7, c = 12;
   int resultado = (a < b) || (c > b) && (a == c);
   ```

7. **Uso de Paréntesis para Controlar Prioridad:**
   ```c
   int resultado = (10 + 5) * 2 / (4 - 2);
   ```

8. **Combinación Compleja:**
   ```c
   int x = 5, y = 8, z = 3;
   int resultado = (x++ * 2 + y) / (z - 1) == (y % 3) && (z < x);
   ```

Estos ejemplos ilustran cómo puedes combinar diferentes operadores y reglas de prioridad para construir ecuaciones más complejas en C. Recuerda que los paréntesis te permiten controlar explícitamente el orden de evaluación.

## Conversión de Datos

La conversión de datos en el lenguaje de programación C se refiere al proceso de cambiar el tipo de datos de una variable a otro. Existen dos tipos principales de conversiones: la conversión implícita y la conversión explícita.

### Conversión Implícita:

La conversión implícita, también conocida como "coerción", ocurre automáticamente cuando se realiza una operación entre dos tipos de datos diferentes y el compilador convierte automáticamente uno de ellos al tipo del otro para que la operación tenga sentido.

**Ejemplo:**
```c
int entero = 5;
float flotante = 3.14;

float resultado = entero + flotante;  // La conversión implícita convierte 'entero' a float antes de la suma.
```

### Conversión Explícita:

La conversión explícita, también conocida como "casting", es cuando el programador indica explícitamente al compilador que realice la conversión de un tipo de dato a otro. Esto se hace mediante el uso de operadores de casting.

**Ejemplo:**
```c
double numero_double = 3.14;
int numero_entero = (int)numero_double;  // Conversión explícita de double a int.
```

La conversión de datos es una parte esencial de la programación para garantizar que los datos se utilicen de manera coherente y segura en una aplicación. Sin embargo, es fundamental entender las implicaciones de las conversiones y cómo se comportan en diferentes contextos.

## Operador sizeof()
El operador `sizeof()` en el lenguaje de programación C se utiliza para determinar el tamaño, en bytes, de un tipo de dato o de una expresión. Puede aplicarse a tipos de datos, variables o arreglos, y devuelve un valor de tipo `size_t`, que es un tipo entero sin signo que representa el tamaño en bytes. Aquí tienes información detallada sobre el operador `sizeof()`:

### Sintaxis:
```c
sizeof(expresion o tipo);
```

### Uso con Tipos de Datos:
```c
size_t tamano_int = sizeof(int);
size_t tamano_char = sizeof(char);
size_t tamano_float = sizeof(float);
// ...
```

### Uso con Variables o Arreglos:
```c
int arreglo[10];
size_t tamano_arreglo = sizeof(arreglo);

char caracter = 'A';
size_t tamano_caracter = sizeof(caracter);
```

### Características Importantes:

1. **Evaluación en Tiempo de Compilación:**
   - El operador `sizeof()` se evalúa en tiempo de compilación, lo que significa que el tamaño se conoce antes de que el programa se ejecute.

2. **Dependencia de la Arquitectura:**
   - El tamaño de los tipos de datos puede variar según la arquitectura del sistema. Por ejemplo, el tamaño de un `int` puede ser 4 bytes en sistemas de 32 bits y 8 bytes en sistemas de 64 bits.

3. **Uso en Asignaciones Dinámicas de Memoria:**
   - Se utiliza frecuentemente al asignar memoria dinámicamente para estructuras de datos, como al usar `malloc()` o `calloc()`.

   ```c
   int *puntero = (int*)malloc(sizeof(int) * 5);
   ```

4. **Operador Unario:**
   - `sizeof` es un operador unario y no una función, por lo que no es necesario utilizar paréntesis alrededor de la expresión si esta es un tipo de dato.

### Ejemplos Comunes:

1. **Determinar el Tamaño de un Tipo de Dato:**
   ```c
   size_t tamano_int = sizeof(int);
   ```

2. **Determinar el Tamaño de una Variable o Arreglo:**
   ```c
   int arreglo[10];
   size_t tamano_arreglo = sizeof(arreglo);
   ```

3. **Uso en Asignación Dinámica de Memoria:**
   ```c
   int *puntero = (int*)malloc(sizeof(int) * 5);
   ```

4. **Uso en Estructuras:**
   ```c
   struct Persona {
       char nombre[50];
       int edad;
   };
   size_t tamano_persona = sizeof(struct Persona);
   ```

### Notas Importantes:

- El resultado de `sizeof()` es del tipo `size_t`. Asegúrate de utilizar el formato correcto al imprimir el resultado, como `%zu` para imprimir un `size_t`.

```c
printf("El tamaño de un int es: %zu bytes\n", sizeof(int));
```

- No es necesario utilizar paréntesis alrededor de la expresión en el operador `sizeof` si esta es un tipo de dato.

El operador `sizeof()` es una herramienta valiosa para escribir código portátil y para gestionar la asignación dinámica de memoria de manera eficiente.

## Resumen

¡Felicidades por completar la sección de "Operadores en el lenguaje de programación C"! En este viaje, exploraste el fascinante mundo de los operadores, desde los aritméticos que te permiten realizar cálculos precisos hasta los de asignación que simplifican la manipulación de variables. Has dominado los operadores de comparación y lógicos, construyendo decisiones fundamentales en tu código. Además, te sumergiste en el intrigante universo del incremento y decremento. Comprendiste la importancia de la prioridad de los operadores y cómo controlarla con paréntesis. La capacidad de convertir datos y utilizar el operador `sizeof()` también se ha vuelto parte de tu caja de herramientas. ¡Excelente trabajo!