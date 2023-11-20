## Estructura de un programa en C
Ahora bamos a finalizar la seccion con el primer programa en el lenguaje de programación C.

Un programa en el lenguaje de programación C se compone de una o más funciones.

~~~c
// Archivo de cabecera
// #include -> Directiva del preprocesador
#include <stdio.h>  // Archivo de cabecera

// Funciones principales
int main(){
    // Es la función utilizada para
    // dar dalida de datos
    printf("Hola Mundo.\n");

    // El número 0 se utiliza para señalar
    // que el programa ha terminado correctamente
    // (con éxito).
    return 0;
}
~~~

Una de las funciones debe ser obligatorio en todo programa en C el **main()**

***Una función en C es un grupo de instrucciones que realizan una o más acciones.***

- 1. **#include:** La directiva `#include` `(# -> almohadilla, hashtag, numeral)`en la primera línea es necesaria para que el programa pueda generar salida. Esta línea hace referencia a un archivo externo llamado `stdio.h`, el cual proporciona información relacionada con la función `printf()`. Es importante notar que los símbolos < y > no forman parte del nombre del archivo; se utilizan para indicar que el archivo pertenece a la biblioteca estándar de C.

- 2. **La función `main()`:** La función `main()` es obligatoria en cada programa en C. Marca el inicio del programa y requiere paréntesis `()` a continuación de `main()`. Las llaves `{` y `}`, las cuales encierran el cuerpo de la función `main()` lo cual indica el fin de la función, y son necesarias en todos los programas en C.

- 3. **printf():** La siguiente línea utiliza la función `printf();` para imprimir un mensaje en la pantalla. En el lenguaje C, `printf()` es una funnción de salida estándar que se utiliza comúnmente para mostrar información en la consola, la salida esperada de la línea anterior será `Hola Mundo!`.

- 4. **\n:** El símbolo `\n` `(barra invertida)` representa la instrucción de nueva línea en programación. Al colocar este símbolo al final de una cadena entre comillas, se le indica al sistema que inicie una nueva línea después de imprimir los caracteres previos. Esto resulta en lafinalización de la línea actual y el inicio de una nueva línea en la salida visualizada.

- 5. **return 0:**  Encontramos la instrucción `return 0`. Esta declaración marca el final de la ejecución del programa y devuelve el control al sistema operativo de la computadora. El valor 0 se emplea para indicar que el programa ha concluido exitosamente, cumpliendo su ejecución de manera adecuada.

- 6. **;:** Observa el punto y coma `(;)` al final de la quinta y sexta línea. En C, es necesario que cada instrucción concluya con un punto y coma, pero este no tiene que estar al final de una línea específicamente. Tienes la flexibilidad de colocar varias sentencias en la misma línea o extender una única sentencia a lo largo de varias líneas según sea necesario. Este uso del punto y coma es crucial para que el compilador interprete correctamente el código en C.