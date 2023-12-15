## Temario


## Introducción


## Estructuras

#### Definición de Estructuras y su Importancia:

En C, una estructura es un tipo de dato que permite agrupar diferentes variables bajo un mismo nombre. Esto es fundamental para organizar y representar datos de manera más compleja. Las estructuras son esenciales en la programación porque proporcionan una forma de modelar entidades del mundo real de manera más fiel, permitiendo la creación de tipos de datos compuestos.

#### Concepto de Tipos de Datos Compuestos:

Los tipos de datos compuestos, como las estructuras, permiten combinar varios tipos de datos en una sola entidad. Esto es especialmente útil cuando se trata con información que tiene múltiples componentes relacionados entre sí. Los tipos de datos compuestos ayudan a organizar y manejar datos de manera más efectiva y comprensible.

#### Declaración y Uso Básico de Estructuras en C:

En C, la declaración de una estructura sigue una sintaxis específica. Se define utilizando la palabra clave `struct`, seguida por el nombre de la estructura y un bloque de declaración que contiene los diferentes miembros o campos de la estructura. Una vez definida, se pueden declarar variables de esa estructura y acceder a sus campos mediante el operador de selección de miembro (`.`).

### 2. Declaración y Definición de Estructuras:

#### Sintaxis de Declaración de Estructuras:

La sintaxis básica para declarar una estructura en C es la siguiente:

```c
struct NombreDeEstructura {
    tipoDeDato1 miembro1;
    tipoDeDato2 miembro2;
    // ...
};
```

Esta declaración establece el diseño o la plantilla de la estructura, pero no reserva memoria ni crea variables específicas.

#### Definición de Estructuras y Asignación de Nombres:

La definición de una estructura se realiza creando variables específicas basadas en esa plantilla. Esto se hace usando la palabra clave `struct` seguida del nombre de la estructura y el nombre de la variable. Después de definir una estructura, se pueden declarar variables de esa estructura y asignarles valores.

#### Declaración de Variables de Estructura:

```c
struct NombreDeEstructura variableEstructura;
```

Esta declaración crea una variable llamada `variableEstructura` basada en la estructura previamente definida. Luego, se pueden acceder y modificar los miembros de esta variable utilizando el operador de selección de miembro (`.`).

En resumen, la introducción a estructuras en C es esencial para entender cómo organizar datos de manera más compleja y representar entidades del mundo real de manera efectiva en programas. La declaración y definición de estructuras proporcionan una base sólida para el uso de tipos de datos compuestos en el desarrollo de software.