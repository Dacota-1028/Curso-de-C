# Estructuras de selección

## Temario
1. [Introducción](#Introducción)
2. [If-else](#If-else)
3. [else-if](#else-if)
4. [switch](#switch)
5. [Condiones anidados](#Condiones-anidados)
6. [Operador ternario](#Operador-ternario)
7. [Resumen](#Resumen)

# Introducción

Bienvenido al curso de "Control de Flujo en C". En esta sección, exploraremos las herramientas fundamentales para dirigir el flujo de ejecución en tus programas en C. Desde las simples decisiones con `if-else` hasta estructuras más complejas con `else-if` y `switch`, aprenderás a tomar decisiones condicionales de manera efectiva. Descubre cómo manejar condiciones anidadas para casos más específicos y domina el operador ternario para expresiones condicionales concisas. Mejora tu capacidad para estructurar y controlar el comportamiento de tus programas, un paso crucial en el camino hacia convertirte en un programador competente en el lenguaje C. ¡Comencemos a explorar el control de flujo!

## If-else

En programación, la instrucción "if" es fundamental para la toma de decisiones. Funciona como una bifurcación en el camino, permitiendo que el programa tome diferentes rutas basadas en condiciones lógicas. Esta estructura se asemeja a las decisiones que tomamos a diario en la vida real.

### Sintaxis de `if-else`:

```c
if (condicion) {
    // Código a ejecutar si la condición es verdadera
} else {
    // Código a ejecutar si la condición es falsa
}
```

### Explicación:

- La `condicion` es una expresión booleana que se evalúa como verdadera o falsa.
- Si la `condicion` es verdadera, se ejecutará el bloque de código dentro del primer conjunto de llaves (`{}`) después de `if`.
- Si la `condicion` es falsa, se ejecutará el bloque de código dentro del segundo conjunto de llaves (`{}`) después de `else`.

### Ejemplo:

Supongamos que queremos implementar un programa simple que verifica si un usuario tiene la edad suficiente para conducir. Si la edad es mayor o igual a 18, imprimimos un mensaje indicando que el usuario puede conducir; de lo contrario, imprimimos un mensaje indicando que no puede conducir.

```c
#include <stdio.h>

int main() {
    // Edad del usuario
    int edad;

    // Solicitar la edad al usuario
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    // Verificar si el usuario puede conducir
    if (edad >= 18) {
        printf("¡Puede conducir!\n");
    } else {
        printf("No puede conducir. Espere un poco más.\n");
    }

    return 0;
}
```

En este ejemplo:

- Se utiliza `scanf` para obtener la edad del usuario desde la entrada estándar.
- La estructura `if-else` se utiliza para verificar si la edad es mayor o igual a 18.
- Dependiendo del resultado de la condición, se imprime un mensaje adecuado en la consola.

Este es un ejemplo simple, pero la estructura `if-else` se puede utilizar para manejar decisiones más complejas en programas más grandes. Es una forma fundamental de controlar el flujo de ejecución en la mayoría de los programas.

## else-if

La estructura `else-if` en programación es una extensión lógica de la instrucción `if`. Mientras que `if` permite realizar una acción si una condición es verdadera, `else-if` proporciona una manera de verificar condiciones adicionales si la primera no se cumple.

En términos simples, `else-if` se utiliza cuando hay múltiples condiciones posibles, y queremos ejecutar un bloque de código específico en función de la primera condición verdadera encontrada. Este mecanismo es especialmente útil para gestionar situaciones complejas en las que una única decisión no es suficiente.

En la vida cotidiana, podríamos comparar esto con tomar decisiones graduales basadas en varias variables. Por ejemplo, cuando decides qué ropa ponerte para el día, podrías considerar primero si está lloviendo (`if lluvia`), luego si hace frío (`else-if frío`), y así sucesivamente. Cada condición adicional (`else-if`) refina tu elección en función de la situación actual.

### Sintaxis de `else-if`:

```c
if (condicion1) {
    // Código a ejecutar si condicion1 es verdadera
} else if (condicion2) {
    // Código a ejecutar si condicion1 es falsa y condicion2 es verdadera
} else if (condicion3) {
    // Código a ejecutar si condicion1 y condicion2 son falsas y condicion3 es verdadera
} else {
    // Código a ejecutar si ninguna de las condiciones anteriores es verdadera
}
```

### Ejemplo:

Supongamos que queremos implementar un programa que clasifica la calidad de un producto según una puntuación proporcionada por el usuario. Utilizaremos rangos para determinar la clasificación: 0-3 malo, 4-6 regular, 7-8 bueno, 9-10 excelente.

```c
#include <stdio.h>

int main() {
    // Puntuación del producto proporcionada por el usuario
    int puntuacion;

    // Solicitar la puntuación al usuario
    printf("Proporcione la puntuación del producto (0-10): ");
    scanf("%d", &puntuacion);

    // Clasificar la calidad del producto utilizando else-if
    if (puntuacion >= 0 && puntuacion <= 3) {
        printf("Malo\n");
    } else if (puntuacion >= 4 && puntuacion <= 6) {
        printf("Regular\n");
    } else if (puntuacion >= 7 && puntuacion <= 8) {
        printf("Bueno\n");
    } else if (puntuacion >= 9 && puntuacion <= 10) {
        printf("Excelente\n");
    } else {
        printf("Puntuación no válida\n");
    }

    return 0;
}
```

En este ejemplo:

- Se utiliza `scanf` para obtener la puntuación del usuario desde la entrada estándar.
- Se utiliza una serie de declaraciones `else-if` para clasificar la calidad del producto según la puntuación proporcionada por el usuario.
- Si ninguna de las condiciones anteriores es verdadera, se imprime un mensaje indicando que la puntuación no es válida.

La estructura `else-if` es útil cuando hay múltiples condiciones que deben evaluarse de manera secuencial, y cada bloque de código se ejecuta en función de la primera condición verdadera encontrada.

## switch

La instrucción `switch` en programación C es una estructura de control que permite realizar múltiples casos de comparación sobre el valor de una expresión. Es especialmente útil cuando se quiere evaluar una variable para determinar si coincide con alguno de varios valores posibles. En lugar de utilizar múltiples declaraciones `if-else`, `switch` proporciona una forma más clara y eficiente de manejar múltiples casos. Cada `case` en un bloque `switch` representa una posible coincidencia, y el flujo de control se desplaza al `case` que coincide con el valor de la expresión evaluada. La instrucción `switch` también puede tener un `default`, que se ejecuta si ningún `case` coincide.

### Sintaxis de `switch`:

```c
switch (expresion) {
    case valor1:
        // Código a ejecutar si expresion es igual a valor1
        break;
    case valor2:
        // Código a ejecutar si expresion es igual a valor2
        break;
    // Otros casos posibles...
    default:
        // Código a ejecutar si ninguno de los casos anteriores es verdadero
}
```

### Ejemplo:

Supongamos que queremos implementar un programa que informa el día de la semana según un número proporcionado por el usuario, donde 1 representa lunes, 2 representa martes, y así sucesivamente. También queremos manejar el caso en que el usuario ingresa un valor fuera del rango válido.

```c
#include <stdio.h>

int main() {
    // Día de la semana proporcionado por el usuario
    int numeroDia;

    // Solicitar el número del día al usuario
    printf("Ingrese el número del día (1-7): ");
    scanf("%d", &numeroDia);

    // Clasificar el día de la semana utilizando switch
    switch (numeroDia) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miércoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Número de día no válido\n");
    }

    return 0;
}
```

En este ejemplo:

- Se utiliza `scanf` para obtener el número del día del usuario desde la entrada estándar.
- Se utiliza la estructura `switch` para evaluar el valor de `numeroDia` y ejecutar el bloque de código correspondiente al caso que coincida.
- Si `numeroDia` no coincide con ninguno de los casos, se ejecuta el bloque de código en la etiqueta `default`.

La estructura `switch` es útil cuando se desea comparar una expresión con varios valores posibles de manera más compacta y legible. Cada caso debe terminar con la palabra clave `break` para evitar la ejecución de los casos siguientes. La etiqueta `default` maneja el caso en que ninguno de los casos coincide.

## Condiones anidados

Las condiciones anidadas, ya sea con `if` o `switch`, se refieren a situaciones en las que se colocan estructuras condicionales dentro de otras estructuras condicionales. Esto permite evaluar múltiples condiciones de manera jerárquica o secuencial. A continuación, proporcionaré explicaciones y ejemplos para condiciones anidadas con `if` y `switch`:

### Condiciones Anidadas con `if`:

Las condiciones anidadas con `if` se crean colocando una estructura `if` dentro de otra. Esto permite definir casos más específicos dentro de un caso más general. Aquí hay un ejemplo basado en la vida real:

```c
#include <stdio.h>

int main() {
    int hora;

    // Solicitar la hora al usuario
    printf("Ingrese la hora actual (formato de 24 horas): ");
    scanf("%d", &hora);

    if (hora >= 0 && hora <= 24) {
        if (hora < 12) {
            printf("Buenos días\n");
        } else if (hora < 18) {
            printf("Buenas tardes\n");
        } else {
            printf("Buenas noches\n");
        }
    } else {
        printf("Hora no válida\n");
    }

    return 0;
}
```

En este ejemplo:

- Se utiliza una estructura `if` externa para verificar si la `hora` está dentro del rango válido (0 a 24).
- Dentro de esa estructura `if`, hay dos estructuras `if` anidadas. La primera verifica si la `hora` es menor a 12, y la segunda verifica si la `hora` es menor a 18.

### Condiciones Anidadas con `switch`:

En el caso de `switch`, las condiciones anidadas se crean colocando `switch` dentro de otro `switch`. Cada `switch` evalúa una expresión diferente. Aquí hay un ejemplo:

```c
#include <stdio.h>

int main() {
    int opcionComida;
    int opcionBebida;

    printf("Seleccione una comida (1-3): ");
    scanf("%d", &opcionComida);

    switch (opcionComida) {
        case 1:
            printf("Ha seleccionado pizza.\n");
            printf("Seleccione una bebida (1-2): ");
            scanf("%d", &opcionBebida);
            switch (opcionBebida) {
                case 1:
                    printf("Ha seleccionado cola.\n");
                    break;
                case 2:
                    printf("Ha seleccionado jugo.\n");
                    break;
                default:
                    printf("Opción de bebida no válida.\n");
            }
            break;
        case 2:
            printf("Ha seleccionado hamburguesa.\n");
            break;
        case 3:
            printf("Ha seleccionado ensalada.\n");
            break;
        default:
            printf("Opción de comida no válida.\n");
    }

    return 0;
}
```

En este ejemplo:

- Se utiliza un `switch` externo para evaluar la `opcionComida`.
- Dentro del `case 1`, hay otro `switch` que evalúa la `opcionBebida` si la comida seleccionada es pizza.

Es importante manejar las condiciones anidadas con cuidado para evitar la complejidad excesiva y asegurarse de que el código siga siendo claro y fácil de entender. La elección entre `if` y `switch` depende del contexto y la lógica específica de tu programa.

## Operador ternario

El operador ternario, también conocido como operador condicional, es una construcción que permite realizar una evaluación condicional de manera más compacta. Se utiliza para expresar una operación condicional de manera concisa sin necesidad de usar una declaración "if-else". Este operador toma tres operandos: la condición a evaluar, la expresión que se devuelve si la condición es verdadera, y la expresión que se devuelve si la condición es .

La sintaxis general del operador ternario es:

```c
condicion ? expresion_verdadera : expresion_falsa;
```

La evaluación se realiza de la siguiente manera:

- Si la `condicion` es verdadera, se evalúa y devuelve `expresion_verdadera`.
- Si la `condicion` es falsa, se evalúa y devuelve `expresion_falsa`.

### Ejemplo:

Supongamos que queremos asignar el valor máximo entre dos números, `a` y `b`, a una variable llamada `maximo`. Usando el operador ternario, el código se vería así:

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 7;

    // Usando el operador ternario para encontrar el máximo
    int maximo = (a > b) ? a : b;

    printf("El máximo es: %d\n", maximo);

    return 0;
}
```

En este ejemplo:

- La condición `(a > b)` se evalúa primero.
- Si es verdadera, el valor de `a` se asigna a `maximo`.
- Si es falsa, el valor de `b` se asigna a `maximo`.

Este código es equivalente al siguiente código utilizando una estructura `if-else`:

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 7;
    int maximo;

    if (a > b) {
        maximo = a;
    } else {
        maximo = b;
    }

    printf("El máximo es: %d\n", maximo);

    return 0;
}
```

Ambas versiones producirán el mismo resultado, pero el operador ternario es más conciso y a menudo se utiliza cuando se desea realizar una simple asignación basada en una condición. Es importante usar el operador ternario de manera moderada para mantener la legibilidad del código.

## Resumen

"Hemos concluido exitosamente la sección de Control de Flujo en C, donde exploramos las estructuras esenciales para dirigir el flujo de ejecución en programas. Iniciamos con el clásico 'if-else', permitiendo decisiones basadas en condiciones. Avanzamos a estructuras más complejas con 'else-if', brindando flexibilidad en múltiples elecciones. Introdujimos 'switch' para alternativas claras en situaciones específicas. Profundizamos en condiciones anidadas, permitiendo evaluaciones más detalladas. Finalmente, exploramos el operador ternario para expresiones concisas. Felicidades por completar esta sección fundamental; ahora posees las herramientas para controlar eficientemente el flujo en tus programas C. ¡A seguir avanzando con confianza!"