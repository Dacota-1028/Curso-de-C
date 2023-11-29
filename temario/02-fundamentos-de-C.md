## Temario
1. [Introducción](#Introducción)
2. [Comentarios](#Comentarios)
3. [Tipos de datos](#Tipos-de-datos)
4. [Limites de rango](#Limites-de-rango)
5. [Variables](#Variables)
6. [Constantes](#Constantes)
7. [Salida de datos](#Salida-de-datos)
8. [Entrada de datos](#Entrada-de-datos)
9. [Resumen](#Resumen)

## Introducción

## Comentarios
<<<<<<< HEAD

El texto proporcionado está mayormente correcto, pero hay un pequeño error en la descripción de la sintaxis de los comentarios de una línea. La secuencia para comenzar un comentario de una línea en C es `//` (barra inclinada doble), no `//` (barra invertida). Aquí está la corrección:

En el lenguaje de programación C, los comentarios se utilizan para proporcionar información adicional dentro del código fuente. Los comentarios no afectan la ejecución del programa y son ignorados por el compilador. Sirven para documentar el código, hacer anotaciones, explicar la lógica detrás de ciertas secciones o para cualquier otro propósito de documentación.
=======
AL momento de escribir código, vamos a tener bloques de líneas de código complejo de entenderlo y para poder explicarlo y sea más facil de comprender o para poner una cita en el archivo fuente aclarando sobre algo. El lenguaje de programación nos da la facilidad de comentar el código sin poder afectar en si el código fuente. 
>>>>>>> 040670463e8cffcc25a335f8a9c3ba553cd3342d

Vamos a aclarar un poco más sobre los comentarios, su utilidad y su importancia.

Los comentarios son utilizados para proporcionar información adicional dentro del código fuente. Sirven para documentar el código, hacer anotaciones, explicar la lógica detrás de ciertos bloques de código o para cualquier otro propósito de documentación.

<<<<<<< HEAD
- **Comentarios de una línea:** Se crean utilizando la secuencia `//` (barra inclinada doble). Todo lo que sigue después de `//` en esa línea se trata como un comentario.
=======
Ya mensionado sobre que son los comentarios, para que sirven y su importanci. Ahora vamos ha ver de que formas se pueden comentar en el lenguaje de programación C.

El lenguaje de programación C nos facilata con dos formas de comentar un archivo de C.

La primera forma de comentar son:

- **Comentarios de una línea:** Se crean utilizando la secuencia de `doble barra invertida`  `//`. Todo lo que sigue después de los siguientes caracteres de (doble barra invertida)`//` en esa línea se trata como un comentario.
>>>>>>> 040670463e8cffcc25a335f8a9c3ba553cd3342d

  ```c
  // Esto es un comentario de una línea
  int x = 5; // Esto también es un comentario
  ```
Y la segunda forma de comentar seria los:
- **Comentarios de múltiples líneas o comentarios acotados:** Se crean entre barra invertida y asterisco `/*` y para finaliar, es con asterisco y barra invertida`*/`. Todo lo que está dentro de estos delimitadores se trata como un comentario y podemos añadir varias línes de comentarios, tambien si pones más un asterisco en medio de la inicialización barra invetida asterisco y asterisco barra invertida (finalización del comentario) y presionamos enter despues asterisco de en el medio del cual acabamos de crear y nueva mente otro enter automaticamente se crear el siguiente asterisco y se podra ver mejor los comentarios de multiple líne o acotado.

Los comentarios de multiples líneas no pueden anidarse, no pueden ir un comentario acotado dentro de otro comentario acotado o múltiple línea.

  ```c
  /* Esto es un comentario de
  múltiples líneas */
  ```

  También podemos desactivar el código que seria comentar temporalmente una sección de código para excluirlo de la ejecución sin eliminarlo. Esto es útil durante el desarrollo y las pruevas.

En el momento de la compilación, el compilador de C va a detectar los caracteres de doble barra invertida de comentarios en línea y doble barra invertida asterisco y la finalización de asterisco barra invertida que son los comentarios múltiples, tanto la línea(comentarios en línea) y el bloque (comentarios múltiples) van a ser ignorados al detectar los caracteres. Y por eso los comentarios no afectan en la ejecución del programa y son ignorados por el compilador. 

Y para poder finalizar con los comentarios y que al momento de escribir el código no olvides documentar el código que es la explicación de la funcionalidad de una sección de código para que otros programdores (o tu mismo en el futuro) puedan entenderlo con facilidad.

<<<<<<< HEAD
Los comentarios en C son una herramienta esencial para el desarrollo de software, facilitando la comprensión y el mantenimiento del código a lo largo del tiempo.

## Tipos de datos

En programación, un "tipo de dato" es una clasificación que especifica qué tipo de valores puede tomar una variable y qué operaciones se pueden realizar con esos valores. Los tipos de datos son esenciales para la declaración y manipulación de variables en un programa.
=======
Y en resumen los comentarios ficilitan la comprensión y mantenimiento del código a lo largo del tiempo.

## Tipos de datos

Ahora vamos ha hablar sobre los tipos de datos, que es el pilar del lenguaje de programación, los tipos de datos son la estructura del lenguaje de programación.


En programación, un "tipo de dato" es una clasificación que especifica qué tipo de valores puede tomar una variable aun no mensionamos sobre las variables por ahora vamos ha hablar solo sobre los tipos de datos y qué operaciones se pueden realizar con esos valores. Los tipos de datos son esenciales para la declaración y manipulación de variables en un programa.
>>>>>>> 040670463e8cffcc25a335f8a9c3ba553cd3342d

Los tipos de datos son fundamentales para cualquier programador, ya que definen el tipo de valores que pueden ser almacenados y manipulados en un programa. En C, existen varios tipos de datos, y vamos a explorar los más comunes.

Empecemos por los tipos de datos primitivos. Estos son los bloques de construcción básicos de cualquier programa en C. Los tipos primitivos incluyen enteros, números de punto flotante, caracteres y booleanos. Un tipo de dato tiene un conjunto de valores que una variable puede contener y las operaciones que se pueden realizar con esos valores.

### 1. Sintaxis:

- **Enteros (integers):** Representan números enteros decimales, como -5, 0, 42.

<<<<<<< HEAD
  | Tipo       | Tamaño de byte (64 bits) |
  |------------|---------------------------|
  | short      | 2 bytes                   |
  | int        | 4 bytes                   |
  | long       | 8 bytes                   |
  | long long  | 8 bytes                   |

  Estos tipos representan números enteros de diferentes tamaños. El short puede almacenar números pequeños, mientras que long long es perfecto para gigantescos valores.
=======
Un tipo de dato tiene un conjunto de valores y las operaciones que se pueden realizar con esos valores. 

- **Enteros(integers):** Estos tipos representan números enteros de diferentes tamaños.
>>>>>>> 040670463e8cffcc25a335f8a9c3ba553cd3342d

- **Punto flotante (floating-point):** Si necesitas trabajar con números decimales, entonces el tipo de dato punto flotante (float o double) es tu elección.

<<<<<<< HEAD
  | Tipo        | Tamaño de byte (64 bits) |
  |-------------|---------------------------|
  | float       | 4 bytes                   |
  | double      | 8 bytes                   |
  | long double | 16 bytes                  |

- **Caracteres (characters):** Ahora, hablemos del tipo de dato caracter (char). Este tipo se utiliza para almacenar un solo carácter.
=======
El short puede almacenar números pequeños, el int el el tipo estándar en el lenguaje de programación C mientras que long y  long long es perfecto para gigantescos valores.

- **Punto flotante(floating-point):** Y los de punto flotante son para números decimales, entonces el tipo de dato punto flotante (float, double, long double) es tu elección. Por ejemplo:
>>>>>>> 040670463e8cffcc25a335f8a9c3ba553cd3342d

  | Tipo | Tamaño de byte (64 bits) |
  |------|---------------------------|
  | char | 1 byte                    |

- **Cadena de caracteres (strings):** Representa secuencias de caracteres, como "Hola Mundo!".

  | Tipo | Tamaño de byte (64 bits) |
  |------|---------------------------|
  | char | 1 byte x carácter         |

<<<<<<< HEAD
- **Booleanos:** Representan valores de verdad o falsedad (true o false). C interpreta todo valor distinto de 0 como `Verdadero` y el valor 0 como `falso`.
=======
- **Booleanos:** Representan valores de verdad o falsedad (true o false). C interpreta todo valor 1 o distinto de 0 como `Verdadero` y el valor 0 como `falso`. De esta forma se pueden escribir expresiones lógica de igual forma que en otros lenguajes de programación. Una expresión lógica que se evalúa a `0` se considera falsa; una expresión lógica que se evalúa a 1 (O valor entero distinto de 0) se considera verdadera. Esto veremos más a mas detalle
>>>>>>> 040670463e8cffcc25a335f8a9c3ba553cd3342d

  | Tipo     | Valor |
  |----------|-------|
  | Booleano | true  |
  |          | false |

  Sin embargo, la biblioteca `stdbool.h` es comúnmente utilizada para proporcionar soporte para el tipo de datos booleano en C. Esta biblioteca introduce el tipo de datos bool, que puede tener los valores true o false.

  ```c
  #include <stdbool.h>
  bool esVerdadero = true;
  bool esFalso = false;
  ```

Los tipos de datos pueden ser clasificados como signados (signed) o no signados (unsigned). Estas categorías indican si el tipo de dato puede representar valores negativos o si está destinado exclusivamente a valores no negativos (cero y positivos).

### Tipos signados

| Tipo                          | Descripción                  |
|-------------------------------|------------------------------|
| signed char                   | Carácter signado             |
| signed int                    | Entero signado               |
| signed short int o signed short| Entero corto signado         |
| signed long int o signed long  | Entero largo signado         |
| signed long long int o signed long long | Entero largo largo signado |

### Tipos no signados

| Tipo                          | Descripción                  |
|-------------------------------|------------------------------|
| unsigned char                 | Carácter no signado          |
| unsigned int                  | Entero no signado            |
| unsigned short int o unsigned short | Entero corto no signado  |
| unsigned long int o unsigned long   | Entero largo no signado  |
| unsigned long long int o unsigned long long | Entero largo largo no signado |

En términos generales, los tipos de datos no signados pueden representar números mayores (sin signo) en comparación con sus contrapartes signadas ya que no tienen que reservar un bit para el signo. Sin embargo, esto también significa que no pueden representar números negativos.

La elección entre signado y no signado dependerá de los requisitos específicos del programa que estás escribiendo.

Los comentarios en C son una herramienta esencial para el desarrollo de software, facilitando la comprensión y el mantenimiento del código a lo largo del tiempo.

## Limites de rango

El siguiente texto se ha organizado y mejorado para mayor claridad y comprensión:

```c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Rangos y tamaños de tipos de datos:\n");

    // Tipos de datos enteros
    printf("short: %d bytes, [%d, %d]\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("int: %d bytes, [%d, %d]\n", sizeof(int), INT_MIN, INT_MAX);
    printf("long: %d bytes, [%ld, %ld]\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("long long: %d bytes, [%lld, %lld]\n", sizeof(long long), LLONG_MIN, LLONG_MAX);

    // Tipos de datos flotantes
    printf("float: %d bytes, [%e, %e]\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double: %d bytes, [%e, %e]\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("long double: %d bytes, [%Le, %Le]\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

    // Tipo de dato char
    printf("char: %d byte, [%d, %d]\n", sizeof(char), CHAR_MIN, CHAR_MAX);

    // Tipo de dato booleano (usando un enfoque convencional)
    printf("Booleano: %d byte, [%d, %d]\n", sizeof(_Bool), 0, 1);

    // Tipos de datos enteros signados
    printf("signed char: %d byte, [%d, %d]\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf("signed int: %d bytes, [%d, %d]\n", sizeof(signed int), INT_MIN, INT_MAX);
    printf("signed short int: %d bytes, [%d, %d]\n", sizeof(signed short int), SHRT_MIN, SHRT_MAX);
    printf("signed long int: %d bytes, [%ld, %ld]\n", sizeof(signed long int), LONG_MIN, LONG_MAX);
    printf("signed long long int: %d bytes, [%lld, %lld]\n", sizeof(signed long long int), LLONG_MIN, LLONG_MAX);

    // Tipos de datos enteros no signados
    printf("unsigned char: %d byte, [%d, %d]\n", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("unsigned int: %d bytes, [%u, %u]\n", sizeof(unsigned int), 0, UINT_MAX);
    printf("unsigned short int: %d bytes, [%d, %u]\n", sizeof(unsigned short int), 0, USHRT_MAX);
    printf("unsigned long int: %d bytes, [%d, %lu]\n", sizeof(unsigned long int), 0, ULONG_MAX);
    printf("unsigned long long int: %d bytes, [%d, %llu]\n", sizeof(unsigned long long int), 0, ULLONG_MAX);

    return 0;
}
```

Notas adicionales:

1. En C, `int` y `signed int` se consideran lo mismo. La palabra clave `signed` se puede omitir al declarar una variable de tipo `int` porque, por defecto, los tipos enteros se consideran signados.

   Por lo tanto, las siguientes declaraciones son equivalentes:

   ```c
   int variables1;
   signed int variable2;
   ```

2. La notación `1.175494e-38` representa un número en formato de punto flotante utilizando la notación científica o de punto flotante en base 10. En términos sencillos, este número es extremadamente pequeño y cercano al límite inferior de representación para números en punto flotante de precisión simple (float) en muchos sistemas.

Este programa utiliza las macros proporcionadas por `limits.h` y `float.h` para imprimir los tamaños y los rangos de los diferentes tipos de datos en tu sistema. Ten en cuenta que estos valores pueden variar dependiendo de la arquitectura y el compilador que estés utilizando.

## Variables

<<<<<<< HEAD
En programación, una variable es un espacio de almacenamiento con un nombre simbólico (un identificador) y un tipo de dato asociado. Puedes pensar en una variable como una caja etiquetada donde puedes almacenar información y luego referenciarla por su nombre.
=======
Ya mensionamos sobre los tipos de datos que son valores que podemos manipular para realizar operaciones pero para poder realizar operaciones necesitamos lamacenar los valor de los tipos de datos por ejemplo:


| tipo entero (numero entero)    |      Operador suma      |       tipo entero (número entero) |       suma     |
|--------------------------------|-------------------------|-----------------------------------|----------------|
|          4                     |          +              |                  8                |      12        |

Para poder almacenar los valores de tipo entero para poder manipular y realizar operaciones como la suma 
En programación, una variable es un espacio de almacenamiento con un nombre simbólico (un identificador) y un tipo de dato asociado. Puede pensar en una variable como una caja etiquetada donde puedes alamacenar información y luego referenciarla por su nombre.
>>>>>>> 040670463e8cffcc25a335f8a9c3ba553cd3342d

### Sintaxis

```c
tipo nombre_variable = expresión
```

### Declaración y Inicialización de Variables

La declaración de una variable reserva espacio en memoria para almacenar un valor de tipo de dato especificado. La inicialización es el proceso de asignar un valor inicial a la variable.

```c
// Declaración
int edad;

// Inicialización
edad = 25;
```

También puedes combinar la declaración y la inicialización:

```c
int edad = 25;
```

### Múltiples Variables

Puedes declarar e inicializar múltiples variables del mismo tipo en una sola línea:

```c
int a = 5, b = 10, c = 15;
```

### Cambio de Valor

Es común que el valor de una variable cambie durante la ejecución del programa. Puedes actualizar el valor de una variable de la siguiente manera:

```c
int contador = 0;
contador = contador + 1; // Incrementa el valor del contador
```

### Variables String

En C, no hay un tipo de dato específico llamado "string". En su lugar, las cadenas de caracteres se representan como arreglos de caracteres (char arrays). Por ejemplo:

```c
char nombre[] = "Juan";
```

En este caso, `nombre` es un arreglo de caracteres que contiene la palabra "Juan". Las cadenas de caracteres en C terminan con el carácter nulo (`\0`), que indica el final de la cadena.

### Inicialización de Variables con un Valor Nulo

En C, si no inicializas una variable al declararla, puede contener un valor no definido. Aquí hay ejemplos para diferentes tipos de datos:

- **Para Punteros**

```c
int *pEntero = NULL;
```

- **Números Enteros**

```c
int numeroEntero = 0;
```

- **Números de Punto Flotante**

```c
float numeroFlotante = 0.0f;
```

- **Para Caracteres**

```c
char caracter = '\0';
```

- **Para Arreglos de Caracteres (Cadena)**

```c
char cadena[100] = {'\0'};
```

- **Estructuras, Uniones**

```c
struct Persona {
    char nombre[50];
    int edad;
};

struct Persona persona1 = {"", 0};
```

### Reglas de los Identificadores de Variables

En C, los identificadores de variables son nombres que se utilizan para identificar y referenciar variables en el programa. Aquí hay algunas reglas importantes para definir identificadores en C:

1. **Formato del Identificador:**
   - Los identificadores deben comenzar con una letra (mayúscula o minúscula) o con un guion bajo `_`. Después de la primera letra, puedes usar letras, dígitos y guiones bajos.

2. **Longitud del Identificador:**
   - C no impone una longitud máxima específica para los identificadores, pero muchos compiladores tienen límites prácticos. Se recomienda mantener los identificadores cortos y descriptivos.

3. **Palabras Reservadas:**
   - No puedes utilizar palabras reservadas del lenguaje C como identificadores. Ejemplos incluyen `int`, `char`, `if`, `else`, entre otras.

4. **Distingue Mayúsculas de Minúsculas:**
   - C distingue entre mayúsculas y minúsculas. `variable` y `Variable` se consideran identificadores diferentes.

5. **Evitar Caracteres Especiales:**
   - Evita el uso de caracteres especiales (como `!`, `@`, `#`, `$`, `%`, `^`, `&`, `*`, etc.) en los identificadores, excepto el guion bajo `_`.

6. **Convenios de Nomenclatura:**
   - Se recomienda seguir ciertos convenios de nomenclatura para mejorar la legibilidad del código. Por ejemplo, camelCase o snake_case.

     - Camel Case: `nombreVariable`, `miVariableInterna`
     - Snake Case: `nombre_variable`, `mi_variable_interna`

7. **Evitar Números al Principio:**
   - No es recomendable comenzar un identificador con un número. Por ejemplo,

## Constantes

En programación, las constantes son valores que permanecen inalterados durante la ejecución de un programa. En el lenguaje C, existen varios tipos de constantes, y aquí se describen algunos de ellos:

1. **Constantes Definidas (con `#define`):**
   - Se definen mediante la directiva del preprocesador `#define`.
   - No ocupan espacio en memoria, ya que son reemplazadas por su valor en tiempo de compilación.
   - Ejemplo:
     ```c
     #define PI 3.14159
     ```

2. **Constantes Declaradas (con `const`):**
   - Se definen utilizando la palabra clave `const`.
   - Ocupan espacio en memoria, pero no pueden ser modificadas durante la ejecución.
   - Ejemplo:
     ```c
     const int MAXIMO = 100;
     ```

Estos son ejemplos básicos de cómo se utilizan diferentes tipos de constantes en C. Las constantes literales son valores que se utilizan directamente en el código, las constantes definidas son sustituidas en tiempo de compilación, las constantes enumeradas proporcionan nombres significativos para valores enteros, y las constantes declaradas con `const` son variables que no deben modificarse.

Es importante señalar que el uso de constantes mejora la legibilidad y mantenibilidad del código, ya que proporciona nombres significativos a valores utilizados en el programa y facilita la modificación de esos valores en un solo lugar.

Las diferencias entre `const` y `#define` en C están relacionadas con su manejo durante la compilación y ejecución del programa. Aquí hay algunas diferencias clave y ventajas asociadas con cada uno:

### `const`:

1. **Asociación a un Tipo:**
   - `const` se asocia a un tipo específico de dato, lo que proporciona información sobre el tipo de la constante.

2. **Ámbito:**
   - Las constantes declaradas con `const` tienen ámbito, lo que significa que su alcance está limitado al bloque en el que se declaran.

3. **Evaluación en Tiempo de Ejecución:**
   - `const` se evalúa en tiempo de ejecución. Se reserva memoria para la constante y se almacena en un lugar específico.

4. **Tipificación Fuerte:**
   - La tipificación fuerte de C se aplica a las constantes `const`, lo que significa que las conversiones de tipos están sujetas a las reglas de tipificación.

5. **Seguridad:**
   - Puede proporcionar mayor seguridad y claridad en el código, ya que el compilador puede realizar verificaciones de tipo.

6. **Alcance Limitado:**
   - Las constantes `const` tienen un alcance más limitado y respetan las reglas de ámbito, evitando posibles colisiones de nombres.

### `#define`:

1. **Sustitución de Texto:**
   - `#define` realiza sustituciones de texto antes de la compilación. No asigna memoria para la constante; simplemente reemplaza el nombre por el valor.

2. **No Asociado a un Tipo:**
   - No está asociado a un tipo específico. Puede definir cualquier secuencia de caracteres, no solo constantes.

3. **Evaluación en Tiempo de Compilación:**
   - `#define` se evalúa en tiempo de compilación. No se asigna memoria para la constante; las sustituciones se realizan directamente en el código.

4. **Flexibilidad:**
   - Proporciona una mayor flexibilidad, ya que puede utilizarse para definir constantes, funciones o cualquier secuencia de código.

5. **No Tipificado:**
   - No hay información de tipo asociada con `#define`. Puede dar lugar a errores si no se utiliza con precaución, ya que no hay garantías de que se utilice con un tipo específico.

6. **Alcance Global:**
   - Las sustituciones realizadas por `#define` son globales y no tienen ámbito. Esto puede dar lugar a posibles colisiones de nombres.

### Ventajas:

#### Ventajas de `const`:
   - **Tipificación y Seguridad:** Proporciona tipificación y seguridad adicionales, ya que el compilador realiza verificaciones de tipo.
   - **Ámbito Limitado:** Respetando el ámbito, evita colisiones de nombres en bloques específicos.

#### Ventajas de `#define`:
   - **Flexibilidad:** Puede ser utilizado para definir cualquier secuencia de código, no solo constantes.
   - **Evaluación en Tiempo de Compilación:** Puede ser beneficioso en términos de rendimiento, ya que las sustituciones se realizan en tiempo de compilación.

### Resumen:
- Usa `const` cuando quieras declarar una constante con un tipo específico y desees aprovechar las reglas de ámbito y seguridad del tipo.
- Usa `#define` cuando necesites realizar sustituciones de texto más generales o cuando la evaluación en tiempo de compilación sea crucial para el rendimiento.

En muchos casos, `const` es preferible debido a su asociación de tipo y su manejo más seguro en comparación con `#define`. Sin embargo, la elección entre ellos dependerá del contexto y de los requisitos específicos del programa.

## Salida de datos

### Salida de Datos con `printf()` y Formateo

En el lenguaje de programación C, la impresión de datos se realiza principalmente a través de la función `printf()` de la biblioteca estándar `stdio.h`. A continuación, se presenta una descripción general de cómo utilizar `printf()` y otros aspectos relacionados con la salida de datos en C.

### `printf()` para Salida Formateada

La función `printf()` se emplea para imprimir datos formateados en la consola. Su sintaxis básica es la siguiente:

```c
#include <stdio.h>

int main() {
    int numero = 42;
    printf("El valor de la variable es: %d\n", numero);
    return 0;
}
```

En este ejemplo, `%d` es un marcador de posición para un entero y se sustituirá por el valor de la variable `numero`.

### Marcadores de Posición Comunes en `printf()`:

| Caracter | Significado |
| --- | --- |
| %d | Entero decimal |
| %o | Entero octal |
| %x | Entero hexadecimal |
| %u | Entero sin signo |
| %c | Carácter |
| %e | Tipo `float` en notación científica |
| %f | Tipo `float` en notación decimal |
| %g | Tipo `float` en notación más corta entre `%e` y `%f` |
| %s | Cadena de caracteres |
| %lf | Tipo `double` |

### Secuencias de Escape:
Puedes usar secuencias de escape para representar caracteres especiales:

| Secuencia de Escape | Significado |
| --- | --- |
| \a | Alarma |
| \b | Retroceso de espacio |
| \f | Avance de página |
| \n | Retorno de carro y avance de línea |
| \r | Retorno de carro |
| \t | Tabulación |
| \v | Tabulación vertical |
| \\ | Barra inclinada |
| \? | Signo de interrogación |
| \" | Dobles comillas |
| \000 | Número octal |
| \xhh | Número hexadecimal |
| \0 | Cero, nulo (ASCII 0) |

### Ancho y Precisión de Campo

En C, al utilizar `printf()`, puedes controlar el formato de salida mediante especificadores de formato que incluyen información sobre el ancho y la precisión de campo. Esto es útil para alinear y formatear correctamente los datos a imprimir.

### 1. Ancho de Campo:

Puedes especificar el ancho total de un campo utilizando un número entero después del símbolo de porcentaje `%`. Por ejemplo, `%10d` indica que el entero debería ocupar al menos 10 espacios, y si es menor, se llenará con espacios en blanco a la izquierda.

```c
printf("%10d\n", 42);  // Imprime "        42"
```

Se puede utilizar un número negativo para alinear a la izquierda.

```c
printf("%-10d\n", 42);  // Imprime "42        "
```

### 2. Precisión de Campo para Números de Punto Flotante:

Para números de punto flotante, puedes especificar la precisión después de un punto (`.`). Esto controla la cantidad de dígitos después del punto decimal.

```c
printf("%.2f\n", 3.14159);  // Imprime "3.14"
```

La combinación de ancho y precisión puede utilizarse para controlar el formato.

```c
printf("%8.2f\n", 3.14159);  // Imprime "    3.14"
```

### 3. Ancho y Precisión para Cadenas de Caracteres:

Para cadenas de caracteres, el ancho especifica el número mínimo de caracteres que se imprimirán, y si la cadena es más corta, se llenará con espacios en blanco.

```c
printf("%10s\n", "Hola");  // Imprime "      Hola"
```

Puedes especificar la precisión para limitar el número de caracteres impresos.

```c
printf("%.3s\n", "Saludos");  // Imprime "Sal"
```

### 4. Combinación de Ancho y Precisión:

Puedes combinar ancho y precisión para controlar tanto el número mínimo de caracteres como la precisión de números de punto flotante o cadenas.

```c
printf("%10.3f\n", 3.14159);  // Imprime "     3.142"
```

### 5. Alineación a la Izquierda y Relleno con Ceros:

Puedes alinear a la izquierda utilizando el modificador `-` y rellenar con ceros utilizando `0`.

```c
printf("%-10d\n", 42);  // Imprime "42        "
printf("%08d\n", 42);   // Imprime "00000042"
```

Estos son solo ejemplos para ilustrar cómo puedes utilizar el ancho y la precisión de campo en la función `printf()`. La combinación de estos elementos te permite formatear la salida según tus necesidades específicas.

### `puts()` y `putchar()` para Salida sin Formateo:

Si solo necesitas imprimir una cadena o un carácter

 sin formato adicional, puedes utilizar `puts()` para cadenas y `putchar()` para caracteres:

```c
puts("Hola, mundo");
putchar('A');
```

## Entrada de datos

La entrada de datos en el lenguaje de programación C se realiza típicamente mediante funciones como `scanf` para leer datos desde la consola o desde otros flujos de entrada. Aquí hay una explicación detallada junto con los marcadores de formato comunes para diferentes tipos de datos:

### `scanf` y marcadores de formato:

La función `scanf` se utiliza para leer datos desde la entrada estándar (generalmente el teclado) en C. La función toma como argumentos una cadena de formato que contiene especificadores de formato, también conocidos como marcadores de formato, que indican el tipo de datos que se espera leer.

- `%d`: Entero. Se utiliza para leer un número entero.

  ```c
  int numero;
  scanf("%d", &numero);
  ```

- `%f`: Flotante. Se utiliza para leer un número de punto flotante.

  ```c
  float numeroDecimal;
  scanf("%f", &numeroDecimal);
  ```

- `%lf`: Doble. Se utiliza para leer un número de punto flotante de doble precisión.

  ```c
  double numeroDoble;
  scanf("%lf", &numeroDoble);
  ```

- `%c`: Carácter. Se utiliza para leer un único carácter.

  ```c
  char caracter;
  scanf(" %c", &caracter); // El espacio antes de %c ayuda a omitir espacios en blanco, saltos de línea, etc.
  ```

- `%s`: Cadena de caracteres. Se utiliza para leer una cadena de caracteres.

  ```c
  char cadena[50];
  scanf("%s", cadena); // No es necesario usar "&" con %s, ya que la cadena es un array y es una dirección de memoria.
  ```

### El operador `&` en `scanf`:

En `scanf`, el operador `&` se utiliza para obtener la dirección de memoria de la variable en la cual deseas almacenar el valor leído. Esto se debe a que `scanf` necesita conocer la dirección de memoria para almacenar el valor introducido por el usuario en la variable correspondiente.

Por ejemplo:

```c
int numero;
scanf("%d", &numero);
```

Aquí, `&numero` proporciona la dirección de memoria de la variable `numero`, permitiendo que `scanf` almacene el valor ingresado por el usuario en esa ubicación de memoria.

Es importante mencionar que no todos los tipos de datos en C requieren el uso del operador `&` con `scanf`. Por ejemplo, las cadenas de caracteres (`%s`) ya son direcciones de memoria (punteros), por lo que no necesitas el `&` con ellas.

Recuerda que la correcta gestión de errores y el manejo adecuado de los datos ingresados son importantes al trabajar con la entrada de datos en C para evitar comportamientos inesperados o vulnerabilidades de seguridad.

## Resumen