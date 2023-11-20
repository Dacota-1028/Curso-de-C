## Comentarios
En el lenguaje de programación C, los comentarios son utilizados para proporcionar información adicional dentro del código fuente. Los comentarios no afectan la ejecución del programa y son ignorados por el compilador. Sirven para documentar el código, hacer anotaciones, explicar la lógica detrás de ciertas secciones o para cualquier otro propósito de documentación.

Aquí hay algunas características clave sobre los comentarios en el lenguaje de programación C:

### 1. Sintaxis:

- **Comentarios de una línea:** Se crean utilizando la secuencia `//` `(barra invertida)`. Todo lo que sigue después de `//` en esa línea se trata como un comentario.

  ```c
  // Esto es un comentario de una línea
  int x = 5; // Esto también es un comentario
  ```

- **Comentarios de múltiples líneas:** Se crean entre `/*` y `*/`. Todo lo que está dentro de estos delimitadores se trata como un comentario.

  ```c
  /* Esto es un comentario de
  múltiples líneas */
  ```

### 2. Propósitos de los Comentarios:

- **Documentación del Código:** Explicar la funcionalidad de una sección de código para que otros programadores (o incluso el mismo en el futuro) puedan entenderlo fácilmente.

- **Desactivar Código:** Comentar temporalmente una sección de código para excluirlo de la ejecución sin eliminarlo. Esto es útil durante el desarrollo y las pruebas.

Los comentarios en C son una herramienta esencial para el desarrollo de software, facilitando la comprensión y mantenimiento del código a lo largo del tiempo.

## Tipos de datos

En programación, un "tipo de dato" es una clasificación que especifica qué tipo de valores puede tomar una variable y qué operaciones se pueden realizar con esos valores. Los tipos de datos son esenciales para la declaración y manipulación de variables en un programa. 

Un tipo de dato tiene un conjunto de valores que una variable puede contener y las operaciones que se pueden realizar con esos valores. 

- **Enteros(integers):** Representan números enteros decimales, como -5, 0, 42.

|   Tipo       |    Tamaño de byte(64 bits)    |
|--------------|-------------------------------|
|   short      |      2 bytes                  |
|   int        |      4 bytes                  |
|   long       |      8 bytes                  |
|   long long  |      8 bytes                  |

- **Punto flotante(floating-point):** Representa números con decimales, como 3.14, -0.001.

|     Tipo     |   Tamaño de byte (64 bits)   |
|--------------|------------------------------|
|     float    |             4 bytes          |
|     double   |             8 bytes          |
|  long double |            16 bytes          |

- **Caracteres (characters):** Representa un solo carácter como 'a', '9'.

|    Tipo    |    Tamaño de byte (64 bits)    |
|------------|--------------------------------|
|     char   |           1 byte               |

- **Cadena de caracteres (strings):** Representa secuencias de caracteres, como "Hola Mundo!".

|    Tipo    |    Tamaño de byte (64 bits)    |
|------------|--------------------------------|
|     char   |           1 byte x carácter    |

- **Booleanos:** Representan valores de verdad o falsedad (true o false). C interpreta todo valor distinto de 0 como `Verdadero` y el valor 0 como `falso`. De esta forma se pueden escribir expresiones lógica de igual forma que en otros lenguajes de programación se utiliza `true` y `false`. Una expresión lógica que se evalúa a `0` se considera falsa; una expresión lógica que se evalúa a 1 (O valor entero distinto de 0) se considera verdadera.

|    Tipo    |    Valor           |
|------------|--------------------|
| Boolean    | true(1)  false(0)  |

Sin embargo, la biblioteca stdbool.h es comúnmente utilizada para proporcionar soporte para el tipo de datos booleano en C.  Esta biblioteca introduce el tipo de datos bool, que puede tener los valores true o false.

~~~c
bool esVerdadero = true;
bool EsFalso = false;
~~~

Los tipos de datos pueden ser clasificados como signados (signed) o no signados (unsigned). Estas categorías indican si el tipo de dato puede representar valores negativos o si está destinado exclusivamente a valores no negativos (cero y positivos). 

|     Tipos signados                             |     Descripción            |
|------------------------------------------------|----------------------------|
|   **signed char**                              | Carácter signado           |
|   **signed int**                               | Entero signado             |
|   **signed short int** o **signed short**      | Entero corto signado       |
|   **signed long int** o **signed long**        | Entero largo signado       |
| **signed long long int** o **signed long long**| Entero largo largo signado |
|   **unsigned char**                              | Carácter no signado      |
|   **unsigned int**                               | Entero no signado        |
|   **unsigned short int** o **unsigned short**      | Entero corto no signado|
|   **unsigned long int** o **unsigned long**        | Entero largo no signado|
| **unsigned long long int** o **unsigned long long**| Entero largo largo no signado|

En términos generales, los tipso de datos no signados pueden representar números mayores (sin signo) en comparación con sus contrapartes signadas ya que no tienen que reservar un bit para el signo. Sin embargo, esto también significa que no pueden representar números negativos.

La elección entre signado y no signado dependerá de los requisitos especificos del programa que estás escribiendo.

## Limites de rango de los tipos de datos y bytes

Para determinar el rango de los tipos de datos y la cantidad de bytes que ocupan en un sistema en particular, puedes utilizar la biblioteca `limits.h` y `float.h` en C. Aquí hay un ejemplo de cómo podrías hacerlo:

```c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Rangos y tamanios de tipos de datos:\n");

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
    printf("Boolean: %d byte, [%d, %d]\n", sizeof(_Bool), 0, 1);

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

- En C, `int` y `signed int` se consideran lo mismo. La palabra clave `signed` se puede omitir cuando se declara una variable de tipo `int` porque, por defecto, los tipos enteros se consideran signados. Es decir, si no se especifica `signed` o `Unsigned` al declara un entero se asume que es `signed`.

    Por lo tanto, las siguientes declaraciones son equivalesntes:

    ~~~c
    int variables1;
    signed int variable2;
    ~~~

- La notación `1.175494e-38` representa un número en formato de punto flotante utilizando la notación científica o de punto flotante en base 10. Esta notación es comúnmente utilizada para representar números extremadamente pequeños o grandes de manera más compacta.

    En este caso específico:

- El número base (1.175494) se multiplica por 10 elevado a la potencia -38.
- La notación `e-38` indica que el exponente es -38, lo que significa que debes mover el punto decimal 38 lugares hacia la izquierda.

Por lo tanto, `1.175494e-38` es equivalente a \(1.175494 \times 10^{-38}\).

    En términos sencillos, este número es extremadamente pequeño y cercano al límite inferior de representación para números en punto flotante de precisión simple (float) en muchos sistemas, donde el rango típico para este tipo de dato es de aproximadamente \(1.175494 \times 10^{-38}\) a \(3.402823 \times 10^{38}\). Esto significa que valores más pequeños que \(1.175494 \times 10^{-38}\) no se pueden representar con precisión en un tipo de dato float estándar.

Este programa utiliza las macros proporcionadas por `limits.h` y `float.h` para imprimir los tamaños y los rangos de los diferentes tipos de datos en tu sistema. Ten en cuenta que estos valores pueden variar dependiendo de la arquitectura y el compilador que estés utilizando.


## Variables

En programación, una variable es un espacio de almacenamiento con un nombre simbólico (un identificador) y un tipo de dato asociado. Puede pensar en una variable como una caja etiquetada donde puedes alamacenar información y luego referenciarla por su nombre.

**Sintaxis**
~~~c
tipo nombre-variable = expresión
~~~

**Declaración y Inicialización de Variables**
La declaración de una variable reserva espacio en memoria para almacenar un valor de tipo de dato especificado.

La inicialización es el proceso de asignar un valor inicial a la variable. De la siguiente manera:

~~~c
// Declaración
int edad

// Inicialización
edad = 25;
~~~

También puedes combinar la declaración y la inicialización:

~~~c
int edad = 25;
~~~

**Múltiples variables**
Puedes declarar e inicializar múltiples variables del mismo tipo de una sola línea:

~~~c
int a = 5, b = 10, c = 15;
~~~

**Cambio de valor**
En programación, es común que el valor de una variable cambie durante la ejecución del programa. Puedes actualizar el valor de una variable de la siguiente manera:

~~~c
int contador = 0;
contador = contador + 1; // Incrementa el valor del contador
~~~

**Variables String**
En C, no hay un tipo de dato específico llamado "string". En cambio, las cadenas de caracteres se representan como arreglos de caracteres (char arrays). Por ejemplo:

~~~c
char nombre[] = "Juan";
~~~

En este caso, `nombre` es un arreglo de caracteres que contienen la palabra "Juan". Las cadenas de caracteres en C terminan con el carácter nulo (`\0`), que indica el final de la cadena.

**Inicialización de variables con un valor Nulo**

En C, si no inicializas una variable al declararla, puede contener un valor no definido. 

- **Para Punteros**
    ~~~c
    int *pEntero = NULL;
    ~~~

- **Números Enteros**
    ~~~c
    int numeroEntero = 0;
    ~~~

- **Números de punto flotante**
    ~~~c
    float numeroFlotante = 0.0f;
    ~~~

- **Para Caracteres**
    ~~~c
    char caracter = '\0';
    ~~~

- **Para arreglos de caracteres (cadena)**
    ~~~c
    char cadena[100] = {'\0'};
    ~~~

- **estructuras, uniones**
    ~~~c
    struct Persona {
        char nombre[50];
        int edad;
    };

    struct Persona persona1 = {"", 0};
    ~~~
### Reglas de los indentificadores de variables

En C, los identificadores de variables son nombres que se utilizan para identificar y referenciar variables en el programa. Aquí hay algunas reglas importantes para la definición de identificadores en C:

1. **Formato del Identificador:**
   - Los identificadores deben comenzar con una letra (mayúscula o minúscula) o con un guion bajo `_`.
   - Después de la primera letra, puedes usar letras, dígitos y guiones bajos.

2. **Longitud del Identificador:**
   - C no impone una longitud máxima específica para los identificadores, pero muchos compiladores tienen límites prácticos.
   - Es recomendable mantener los identificadores cortos y descriptivos.

3. **Palabras Reservadas:**
   - No puedes utilizar palabras reservadas del lenguaje C como identificadores. Estas palabras tienen un significado específico en el lenguaje y no pueden ser redefinidas. Ejemplos de palabras reservadas incluyen `int`, `char`, `if`, `else`, entre otras.

4. **Distingue Mayúsculas de Minúsculas:**
   - C es un lenguaje de programación que distingue entre mayúsculas y minúsculas. Por lo tanto, `variable` y `Variable` se consideran identificadores diferentes.

5. **Evitar Caracteres Especiales:**
   - Evita el uso de caracteres especiales (como `!`, `@`, `#`, `$`, `%`, `^`, `&`, `*`, etc.) en los identificadores, a excepción del guion bajo `_`.

6. **Convenios de Nomenclatura:**
   - Se recomienda seguir ciertos convenios de nomenclatura para mejorar la legibilidad del código. Por ejemplo, camelCase o snake_case son estilos comunes.
     - Camel Case: `nombreVariable`, `miVariableInterna`
     - Snake Case: `nombre_variable`, `mi_variable_interna`

7. **Evitar Números al Principio:**
   - No es recomendable comenzar un identificador con un número. Por ejemplo, `2variable` no es un identificador válido.

8. **Contexto Significativo:**
   - Elije nombres de identificadores que sean descriptivos y proporcionen información sobre el propósito o contenido de la variable.
   - Por ejemplo, `edad` es más descriptivo que `x`.

Siguiendo estas reglas, puedes crear identificadores de variables que sean válidos y comprensibles en tus programas escritos en C. Estas prácticas contribuyen a la legibilidad y mantenibilidad del código.

~~~c
#include <stdio.h>  // Incluir la biblioteca estándar de entrada/salida para poder utilizar printf

int main() {
    // Tipos de Datos Enteros
    int entero;                   // Entero
    short int enteroCorto;        // Entero corto
    long int enteroLargo;         // Entero largo
    long long int enteroLargoLargo; // Entero largo largo

    // Tipos de Datos Enteros No Signados
    unsigned int enteroNoSignado;        // Entero no signado
    unsigned short int enteroCortoNoSignado;  // Entero corto no signado
    unsigned long int enteroLargoNoSignado;   // Entero largo no signado
    unsigned long long int enteroLargoLargoNoSignado; // Entero largo largo no signado

    // Tipos de Datos de Punto Flotante
    float flotante;          // Punto flotante de precisión simple
    double doble;            // Punto flotante de doble precisión
    long double dobleLargo;  // Punto flotante de larga doble precisión

    // Tipos de Datos Caracter
    char caracter;           // Carácter
    unsigned char caracterNoSignado;  // Carácter no signado

    // Tipos de Datos Puntero
    int *punteroEntero;      // Puntero a un entero
    char *punteroCaracter;   // Puntero a un carácter

    // Tipos de Datos String (Arreglo de Caracteres)
    char cadena[] = "Hola, mundo";  // Arreglo de caracteres (cadena)

    // Tipos de Datos Definidos por el Usuario (Estructuras)
    struct Persona {
        char nombre[50];
        int edad;
    };

    struct Persona persona1;  // Declaración de una variable de tipo struct Persona

    // Variable Void (Sin Tipo Específico)
    void *variableVoid;  // Variable de tipo void (sin tipo específico)

    // Mostrar mensajes para demostrar que las variables han sido declaradas
    printf("Variables declaradas con éxito.\n");

    return 0;  // Indica que el programa finalizó correctamente
}

~~~

## Constantes

Las constantes en programación son valores que no cambian durante la ejecución de un programa. En C, hay diferentes tipos de constantes, y aquí se describen varios tipos:

1. **Constantes Literales:**
   - Son valores fijos escritos directamente en el código fuente.
   - Ejemplos:
     ```c
     int numero = 42;           // Constante literal entera
     float pi = 3.14159;        // Constante literal de punto flotante
     char letra = 'A';          // Constante literal de carácter
     const char* texto = "Hola"; // Constante literal de cadena de caracteres
     ```

2. **Constantes Definidas (con `#define`):**
   - Se definen mediante la directiva del preprocesador `#define`.
   - No ocupan espacio en memoria, ya que son reemplazadas por su valor en tiempo de compilación.
   - Ejemplo:
     ```c
     #define PI 3.14159
     ```

3. **Constantes Enumeradas:**
   - Se crean mediante la palabra clave `enum`.
   - Asocian nombres a valores enteros constantes.
   - Ejemplo:
     ```c
     enum Meses {ENERO = 1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};
     enum Meses mesActual = ABRIL;

     enum Boolean { False = 0, True = 1 };
     enum Boolean = True;
     ```

4. **Constantes Declaradas (con `const`):**
   - Se definen utilizando la palabra clave `const`.
   - Ocupan espacio en memoria, pero no pueden ser modificadas durante la ejecución.
   - Ejemplo:
     ```c
     const int MAXIMO = 100;
     ```

Estos son ejemplos básicos de cómo se utilizan diferentes tipos de constantes en C. Las constantes literales son valores que se utilizan directamente en el código, las constantes definidas son sustituidas en tiempo de compilación, las constantes enumeradas proporcionan nombres significativos para valores enteros y las constantes declaradas con `const` son variables que no deben modificarse.

Es importante notar que el uso de constantes ayuda a hacer que el código sea más legible y mantenible, ya que proporciona nombres significativos a valores que se utilizan en el programa y facilita la modificación de esos valores en un solo lugar.

Las diferencias entre `const` y `#define` en C están relacionadas con cómo se manejan durante la compilación y ejecución del programa. Aquí hay algunas diferencias clave y ventajas asociadas con cada uno:

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

La salida de datos en el lenguaje de programación C se realiza principalmente utilizando la función `printf()` de la biblioteca estándar `stdio.h`. Aquí te proporciono una descripción general de cómo utilizar `printf()` y otros aspectos relacionados con la salida de datos en C.

### `printf()` para la salida formateada
La función `printf()` se utiliza para imprimir datos formateados en la consola. Su sintaxis básica es:

~~~c
#include <stdio.h>

int main() {
    int numero = 42;
    printf("El valor de la variable es: %d\n", numero);
    return 0;
}
~~~

En este ejemplo, `%d` es un marcador de posición para un entero, y se sustituirá por el valor de la variable `numero`.

### **Marcadores de Posición Comunes en `printf()`:**
|     Caracter     |     Significado                            |
|-----------------------------|--------------------------------------------|
|             \d              | El dato se convierte a entero decimal      |
|             \o              | El dato entero se convierte a octal        |
|             \x              | El dato entero se convierte en hexadecimal |
|             \u              | El dato entero se convierte a entero sin signo|
|             \c              | El dato se considera de tipo carácter      |
|             \e              | El dato se considera el tipo `float`. Se convierte en notación cientifica de la forma (-)n.mmmmmmE(+l-ldd) |
|             \f              | El dato se considera de tipo `float`. Se convierte a notación decimal, con parte entera y los dígitos de precision. |
|             \g              | El dato se considera de tipo `float`. Se convierte según el código %e o %f dependiendo de cual sea la representación más corta. |
|             \s              | El dato ha de ser una cadena de caracteres.  |
|             \lf              |    El dato se considera el tipo `double` |

### **Secuencias de Escape:**
Puedes usar secuencias de escape para representar caracteres especiales:

|     Secuencia de escape     |     Significado                    |
|-----------------------------|------------------------------------|
|             \a              |     Alarma                         |
|             \b              |     Retroceso de espacio           |
|             \f              |     Avance de página               |
|             \n              | Retorno de carro y avance de línea |
|             \r              |      Retorno de carro              |
|             \t              |          Tabulación                |
|             \v              |   Tabulación vertical              |
|             \\              |       Barra inclinada              |
|             \?              |     Signo de interrogación         |
|             \"              |           Dobles comillas          |
|            \000             |           Número octal             |
|            \xhh             |          Número hexadecimal        |
|             \0              |        Cero, nulo (ASCII 0)        |

### **Ancho y Precisión de Campo:**
En C, al utilizar la función `printf()`, puedes controlar el formato de salida mediante el uso de especificadores de formato que incluyen información sobre el ancho y la precisión de campo. Esto es útil para alinear y formatear correctamente los datos que deseas imprimir. Aquí hay más detalles sobre el ancho y la precisión de campo:

### 1. **Ancho de Campo:**
   - Puedes especificar el ancho total de un campo utilizando un número entero después del símbolo de porcentaje `%`. Por ejemplo, `%10d` indica que el entero debería ocupar al menos 10 espacios, y si es menor, se llenará con espacios en blanco a la izquierda.

   ```c
   printf("%10d\n", 42);  // Imprime "        42"
   ```

   - Se puede utilizar un número negativo para alinear a la izquierda.

   ```c
   printf("%-10d\n", 42);  // Imprime "42        "
   ```

### 2. **Precisión de Campo para Números de Punto Flotante:**
   - Para números de punto flotante, puedes especificar la precisión después de un punto (`.`). Esto controla la cantidad de dígitos después del punto decimal.

   ```c
   printf("%.2f\n", 3.14159);  // Imprime "3.14"
   ```

   - La combinación de ancho y precisión puede utilizarse para controlar el formato.

   ```c
   printf("%8.2f\n", 3.14159);  // Imprime "    3.14"
   ```

### 3. **Ancho y Precisión para Cadenas de Caracteres:**
   - Para cadenas de caracteres, el ancho especifica el número mínimo de caracteres que se imprimirán, y si la cadena es más corta, se llenará con espacios en blanco.

   ```c
   printf("%10s\n", "Hola");  // Imprime "      Hola"
   ```

   - Puedes especificar la precisión para limitar el número de caracteres impresos.

   ```c
   printf("%.3s\n", "Saludos");  // Imprime "Sal"
   ```

### 4. **Combinación de Ancho y Precisión:**
   - Puedes combinar ancho y precisión para controlar tanto el número mínimo de caracteres como la precisión de números de punto flotante o cadenas.

   ```c
   printf("%10.3f\n", 3.14159);  // Imprime "     3.142"
   ```

### 5. **Alineación a la Izquierda y Relleno con Ceros:**
   - Puedes alinear a la izquierda utilizando el modificador `-` y rellenar con ceros utilizando `0`.

   ```c
   printf("%-10d\n", 42);  // Imprime "42        "
   printf("%08d\n", 42);   // Imprime "00000042"
   ```

Estos son solo algunos ejemplos para ilustrar cómo puedes utilizar el ancho y la precisión de campo en la función `printf()`. La combinación de estos elementos te permite formatear la salida de acuerdo con tus necesidades específicas.

### 6. **`puts()` y `putchar()` para Salida sin Formateo:**
Si solo necesitas imprimir una cadena o un carácter sin formato adicional, puedes utilizar `puts()` para cadenas y `putchar()` para caracteres:

```c
puts("Hola, mundo");
putchar('A');
```

## Entrada de datos

La entrada de datos en el lenguaje de programación C se realiza principalmente utilizando las funciones `scanf()` y `getchar()`. Aquí te proporciono una descripción general de cómo utilizar estas funciones y otros aspectos relacionados con la entrada de datos en C:

### **`scanf()` para Entrada Formateada:**
- La función `scanf()` se utiliza para leer datos formateados desde la entrada estándar (teclado). Al igual que `printf()`, utiliza marcadores de formato para especificar el tipo de datos que se va a leer.

    ```c
    #include <stdio.h>

    int main() {
        int numero;
        printf("Ingrese un número: ");
        scanf("%d", &numero);
        printf("Número ingresado: %d\n", numero);
        return 0;
    }
    ```

    Ten en cuenta que se utiliza `&` antes del nombre de la variable para pasar la dirección de memoria de la variable a la función `scanf()`.
