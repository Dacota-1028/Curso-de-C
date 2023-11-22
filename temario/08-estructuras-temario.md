
## ESTRUCTURAS

Los arrays son estructuras de datos que contienen un número determinado de elementos (su tamaño) y todos los elementos han de ser del mismo tipo de datos; es una estructura de datos homogénea. Esta característica supone una gran limitación cuando se requieren grupos de elementos con tipos diferentes de datos cada uno. Por ejemplo, si se dispone de una lista de temperaturas, es muy útil un array; sin embargo, si se necesita una lista de información de clientes que contengan elementos tales como el nombre, la edad, la dirección, el número de la cuenta, etc., los arrays no son adecuados. La solución a este problema es utilizar un tipo de dato registro, en C llamado estructura. 

Los componentes individuales de una estructura se llaman miembros. Cada miembro (elemento) de una estructura puede contener datos de un tipo diferente de otros miembros. Por ejemplo, se puede utilizar una estructura para almacenar diferentes tipos de información sobre una persona, como nombre, estado civil, edad y fecha de nacimiento. Cada uno de estos elementos se denomina nombre del miembro. 

Una estructura puede contener cualquier número de miembros, cada uno de los cuales tiene un nombre único, denominado nombre del miembro. Supongamos que se desea almacenar los datos de una colección de discos compactos (CD) de música. Estos datos pueden ser:

- Título.
- Artista.
- Número de canciones (Entero).
- Precio (Coma flotante).
- Fecha de compra (Array de caracteres de tamaño 30).

La Figura 9.1 contiene la estructura CD, mostrando gráficamente los tipos de datos dentro de la estructura. Obsérvese que cada miembro es un tipo de dato diferente.

```plaintext
Título                    Artista                  Número de canciones     Precio             Fecha de compra
Ay, ay, ay, cómo se aleja el sol.     NO me pises la sandalias.     10     2222.25     8-10-1999
```

**Figura 9.1. Representación gráfica de una estructura CD.**

**9.1.1. Declaración de una estructura**

Una estructura es un tipo de dato definido por el usuario, que se debe declarar antes de que se pueda utilizar. El formato de la declaración es:

```c
struct <nombre de la estructura>
{
    <tipo de dato miembro> <nombre miembro>;
    <tipo de dato miembro> <nombre miembro>;
    <tipo de dato miembro> <nombre miembro>;
    ...
};
```

La declaración de la estructura CD es:

```c
struct coleccion_CD
{
    char titulo[30];
    char artista[25];
    int num_canciones;
    float precio;
    char fecha_compra[8];
};
```

**Ejemplo:**

```c
struct complejo
{
    ...
};
```

En este otro ejemplo se declara el tipo estructura venta:

```c
struct venta
{
    ...
};
```

**9.1.2. Definición de variables de estructuras**

Al igual que con los tipos de datos enumerados, a una estructura se accede utilizando una variable o variables que se deben definir después de la declaración de la estructura. Del mismo modo que sucede en otras situaciones, en C existen dos conceptos similares a considerar, declaración y definición. La diferencia técnica es la siguiente: una declaración especifica simplemente el nombre y el formato de la estructura de datos, pero no reserva almacenamiento en memoria; la declaración especifica un nuevo tipo de dato: `struct <nombre-estructura>`. Por lo tanto, cada definición de variable para una estructura dada crea un área en memoria donde los datos se almacenan según el formato estructurado declarado.

Las variables de estructuras se pueden definir de dos formas: 1) listándolas inmediatamente después de la llave de cierre de la declaración de la estructura, o 2) listando el tipo de la estructura creada seguida por las variables correspondientes en cualquier lugar del programa antes de utilizarlas. La definición y declaración de la estructura colecciones_CD se puede hacer por cualquiera de los dos métodos:

1.

```c
struct colecciones_CD
{
    char titulo[30];
    char artista[25];
    int num_canciones;
    float precio;
    char fecha_compra[8];
} cdl, cd2, cd3;
```

2.

```c
struct colecciones_CD cdl, cd2, cd3;
```

**Otros ejemplos de definición/declaración:**

Considérese un programa que gestione libros y procese los siguientes datos: título del libro, nombre del autor, editorial y año de publicación. Una estructura info_libro podría ser:

```c
struct info_libro
{
    char titulo[60];
    char autor[30];
    char editorial[30];
    int anyo;
};

struct info_libro librol, libro2, libro3;
```

**Ahora se nos plantea una aplicación de control de los participantes en una carrera popular, cada participante se representa por los datos: nombre, edad, sexo, categoría, club y tiempo. El registro se representa con la estructura corredor:**

```c
struct corredor
{
    char nombre[40];
    int edad;
    char sexo;
    char categoria[20];
    char club[26];
    float tiempo;
};

struct corredor vl, sl, cl;
```

**9.1.3. Uso de estructuras en asignaciones**

Como una estructura es un tipo de dato similar a un int o un char, se puede asignar una estructura a otra. Por ejemplo, se puede hacer que libro3, libro4 y libro5 tengan los mismos valores en sus miembros que librol. Por lo tanto, si es necesario realizar las siguientes sentencias:

```c
libro3 = librol;
libro4 = librol;
libro5 = librol;
```

De modo alternativo se puede escribir:

```c
libro4 = libro5 = libro6 = librol;
```

**9.1.4. Inicialización de una declaración de estructuras**

Se puede inicializar una estructura de dos formas. Se puede inicializar una estructura dentro de la sección de código de su programa, o bien se puede inicializar la estructura como parte de la definición. Cuando se inicializa una estructura como parte de la definición, se especifican los valores iniciales, entre llaves, después de la definición de variables estructura. El formato general en este caso:

```c
struct <tipo> <nombre variable estructura> =
{
    valor miembro,
    valor miembro,
    valor miembro,
    ...
};
```

**Ejemplos:**

```c
struct info_libro
{
   

 char titulo[60];
    char autor[30];
    char editorial[30];
    int anyo;
} librol = {"Maravilla del saber", "Lucas Garcia", "McGraw-Hill", 1999};
```

Otro ejemplo podría ser:

```c
struct coleccion_CD
{
    char titulo[30];
    char artista[25];
    int num_canciones;
    float precio;
    char fecha_compra[8];
} cdl = {"El humo nubla tus ojos", "Cole Porter", 15, 2545, "02/06/99"};
```

Otro ejemplo con la estructura corredor:

```c
struct corredor vl = {"Salvador Rapido", 29, 'V', "senior", "Independiente", 0.0};
```

**9.1.5. El tamaño de una estructura**

El operador sizeof se aplica sobre un tipo de datos o bien sobre una variable. Se puede aplicar para determinar el tamaño que ocupa en memoria una estructura. El siguiente programa ilustra el uso del operador sizeof para determinar el tamaño de una estructura:

```c
#include <stdio.h>

/* Declarar una estructura Persona */
struct persona
{
    char nombre[30];
    int edad;
    float altura;
    float peso;
};

void main()
{
    struct persona mar;
    printf("Sizeof(persona): %d\n", sizeof(mar));
}
```

Al ejecutar el programa se produce la salida:

```plaintext
Sizeof(persona): 40
```

El resultado se obtiene determinando el número de bytes que ocupa la estructura Persona.

**Miembros de la estructura Persona:**

- `nombre` [30] char(1) 30
- `edad` int (2) 2
- `altura` float (4) 4
- `peso` float (4) 4
- Total: 40

## ACCESO A ESTRUCTURAS

Cuando se accede a una estructura, o bien se almacena información en la estructura o se recupera la información de la estructura. Se puede acceder a los miembros de una estructura de una de estas dos formas: 1) utilizando el operador punto (.), o bien 2) utilizando el operador puntero ->.

**9.2.1. Almacenamiento de información en estructuras**

Se puede almacenar información en una estructura mediante inicialización, asignación directa o lectura del teclado. El proceso de inicialización ya se ha examinado; veamos ahora la asignación directa y la lectura del teclado.

**Acceso a una estructura de datos mediante el operador punto**

La asignación de datos a los miembros de una variable estructura se hace mediante el operador punto. La sintaxis en C es:

```c
<nombre variable estructura>.<nombre miembro> = datos;
```

Algunos ejemplos:

```c
strcpy(cd1.titulo, "Granada");
cdl.precio = 3450.75;
cdl.num_canciones = 7;
```

El operador punto proporciona el camino directo al miembro correspondiente. Los datos que se almacenan en un miembro dado deben ser del mismo tipo que el tipo declarado para ese miembro. En el siguiente ejemplo, se leen del teclado los datos de una variable estructura corredor:

```c
struct corredor cr;
printf("Nombre: ");
gets(cr.nombre);
printf("Edad: ");
scanf("%d", &cr.edad);
printf("Sexo: ");
scanf(" %c", &cr.sexo);
printf("Club: ");
gets(cr.club);
if (cr.edad <= 18)
    cr.categoria = "Juvenil";
else if (cr.edad <= 40)
    cr.categoria = "Senior";
else
    cr.categoria = "Veterano";
```

**Acceso a una estructura de datos mediante el operador puntero**

El operador puntero, ->, sirve para acceder a los datos de la estructura a partir de un puntero. Para utilizar este operador, se debe definir primero una variable puntero para apuntar a la estructura. A continuación, simplemente use el operador puntero para apuntar a un miembro dado.

La asignación de datos a estructuras utilizando el operador puntero tiene el formato:

```c
<puntero estructura>-><nombre miembro> = datos;
```

Así, por ejemplo, para una estructura estudiante:

```c
struct estudiante
{
    char Nombre[41];
    int Num_Estudiante;
    int Anyo_de_matricula;
    float Nota;
};

struct estudiante *ptr_est;
struct estudiante mejor;
```

A los miembros de la estructura estudiante se les pueden asignar datos como sigue (siempre y cuando la estructura ya tenga creado su espacio de almacenamiento, por ejemplo, con `malloc()` o bien, tenga la dirección de una variable estructura).

```c
ptr_est = &mejor; /* ptr_est tiene la dirección (apunta a) mejor */
strcpy(ptr_est->Nombre, "Pepe alondra");
ptr_est->Num_Estudiante = 3425;
ptr_est->Nota = 8.5;
```

**Nota:**

Previamente habría que crear espacio de almacenamiento en memoria; por ejemplo, con la función `malloc()`.

**9.2.2. Lectura de información de una estructura**

Si ahora se desea introducir la información en la estructura, basta con acceder a los miembros de la estructura con el operador punto o flecha (puntero). Se puede introducir la información desde el teclado o desde un archivo, o asignar valores calculados.

Así, si `z` es una variable de tipo estructura complejo, se lee la parte real, parte imaginaria y se calcula el módulo:

```c
struct complejo
{
    float pr;
    float pi;
    float modulo;
};

struct complejo z;
printf("\nParte real: ");
scanf("%f", &z.pr);
printf("\nParte imaginaria: ");
scanf("%f", &z.pi);
/* cálculo del módulo */
z.modulo = sqrt(z.pr * z.pr + z.pi * z.pi);
```

**9.2.3. Recuperación de información de una estructura**

Se recupera información de una estructura utilizando el operador de asignación o una sentencia de salida (`printf()`, `puts()`, ...). Igual que antes, se puede emplear el operador punto o el operador flecha (puntero). El formato general toma uno de estos formatos:

1. `<nombre variable> = <nombre variable estructura>.<nombre miembro>;`
   o bien
   `<nombre variable> = <puntero de estructura> -> <nombre miembro>;`

2. para salida:
   o bien
   `printf(" ", <nombre variable estructura>.<nombre miembro>);`
   `printf(" ", <puntero de estructura>-> <nombre miembro>);`

Algunos ejemplos del uso de la estructura complejo:

```c
float x, y;
struct complejo z;
struct complejo *pz;

pz = &z;
x = z.pr;
y = z.pi;
...
printf("\nNúmero complejo (%.lf,%.lf), módulo: %.2f",
       pz->pr, pz->pi, pz->modulo);
```

Aquí está el texto corregido:

## ESTRUCTURAS ANIDADAS

Una estructura puede contener otras estructuras llamadas estructuras anidadas. Las estructuras anidadas ahorran tiempo en la escritura de programas que utilizan estructuras similares. Se deben definir los miembros comunes solo una vez en su propia estructura y a continuación utilizar esa estructura como un miembro de otra estructura. Consideremos las siguientes dos definiciones de estructuras:

```c
struct empleado
{
    char nombre_emp[30];
    char direccion[25];
    char ciudad[20];
    char provincia[20];
    long int cod_postal;
    double salario;
    // ...
};

struct clientes
{
    char nombre_cliente[30];
    char direccion[25];
    char ciudad[20];
    char provincia[20];
    long int cod_postal;
    double saldo;
    // ...
};
```

Estas estructuras contienen muchos datos diferentes, aunque hay datos que están solapados. Así, se podría disponer de una estructura, `info_dir`, que contuviera los miembros comunes.

```c
struct info_dir
{
    char direccion[25];
    char ciudad[20];
    char provincia[20];
    long int cod_postal;
};
```

Esta estructura se puede utilizar como un miembro de las otras estructuras, es decir, anidarse.

```c
struct empleado
{
    char nombre_emp[30];
    struct info_dir direccion_emp;
    double salario;
    // ...
};

struct clientes
{
    char nombre_cliente[30];
    struct info_dir direccion_clien;
    double saldo;
    // ...
};
```

Gráficamente se podrían mostrar estructuras anidadas en la Figura 9.2.

```c
empleado: cliente:
nombre_emp nombre_cliente
direccion
ciudad
provincia cod_postal
direccion
ciudad
provincia
cod_postal
info_dir saldo
info_dir
salario
```

**Figura 9.2. Estructuras anidadas.**

**9.3.1. Ejemplo de estructuras anidadas**

Se desea diseñar una estructura que contenga información de operaciones financieras. Esta estructura debe constar de un número de cuenta, una cantidad de dinero, el tipo de operación (depósito=0, retirada de fondos=1, puesta al día=2 o estado de la cuenta=3) y la fecha y hora en que la operación se ha realizado. A fin de realizar el acceso correcto a los campos día, mes y año, así como el tiempo (la hora y minutos) en que se efectuó la operación, se define una estructura `fecha` y una estructura `tiempo`. La estructura `registro_operacion` tiene como miembros una variable (un campo) de tipo `fecha`, otra variable del tipo `tiempo` y otras variables para representar los otros campos. La representación del tipo de operación se hace con una variable entera, aunque el tipo apropiado es un tipo enumerado (descrito en los siguientes apartados). A continuación se declaran estos tipos, se escribe una función que lee una operación financiera y devuelve la operación leída. La fecha y hora es captada del sistema.

```c
#include <stdio.h>
#include <dos.h>

struct registro_operacion entrada();
struct fecha
{
    unsigned int mes, dia, anyo;
};

struct tiempo
{
    unsigned int horas, minutos;
};

struct registro_operacion
{
    long numero_cuenta;
    float cantidad;
    int tipo_operacion;
    struct fecha f;
    struct tiempo t;
};

int main()
{
    struct registro_operacion w;
    w = entrada();
    printf("\n\nOperación realizada\n");
    printf("\t%ld\n", w.numero_cuenta);
    printf("\t%d-%d-%d\n", w.f.dia, w.f.mes, w.f.anyo);
    printf("\t%d:%d\n", w.t.horas, w.t.minutos);
    return 0;
}

struct registro_operacion entrada()
{
    struct time t;
    struct date d;
    struct registro_operacion una;
    printf("\nNúmero de cuenta: ");
    scanf("%ld", &una.numero_cuenta);
    puts("\nTipo de operación");
    puts("Deposito(0)");
    puts("Retirada de fondos(1)");
    puts("Puesta al día(2)");
    puts("Estado de la cuenta(3)");
    scanf("%d", &una.tipo_operacion);
    /* Fecha y tiempo del sistema */
    gettime(&t);
    una.t.horas = t.ti_hour;
    una.t.minutos = t.ti_min;
    getdate(&d);
    una.f.anyo = d.da_year;
    una.f.mes = d.da_mon;
    una.f.dia = d.da_day;
    return una;
}

/** Ejercicio 9.1 **/

Se desea registrar una estructura `PersonaEmpleado` que contenga como miembros los datos de una persona empleado que a su vez tenga los datos de la fecha de nacimiento. En un programa se muestra el uso de la estructura, se define una función para dar entrada a los datos de la estructura y otra función para dar salida a los datos de una estructura persona. A la función de entrada se transmite por dirección (`&p`) la variable estructura, por lo que el argumento correspondiente tiene que ser un puntero (`*p`) y el acceso a los campos se hace con el selector `->`.

```c
#include <stdio.h>

struct fecha
{
    unsigned int dia, mes, anyo;
};

struct persona
{
    char nombre[20];
    unsigned int edad;
    int altura;
    int peso;
    struct fecha fec;
};

struct persona_empleado
{
    struct persona una_persona;
    unsigned int salario;
    unsigned int horas_por_semana;
};

/* Prototipos de funciones */
void entrada(struct persona_empleado *p);
void muestra(struct persona_empleado up);

void main()
{
    /* Define una variable persona-empleado */
    struct persona_empleado p;
    /* Llamada a entrada() transmitiendo la direccion */
    entrada(&p);
    /* Salida de los datos almacenados */
}

void entrada(struct persona_empleado *p)
{
    muestra(p);
    printf("\nIntroduzca su nombre: ");
    gets(p->una_persona.nombre);
    printf("Introduzca su edad: ");
    scanf("%d", &p->una_persona.edad);
    printf("Introduzca su altura: ");
    scanf("%d", &

p->una_persona.altura);
    printf("Introduzca su peso: ");
    scanf("%d", &p->una_persona.peso);
    printf("Introduzca su fecha de nacimiento: ");
    scanf("%d %d %d", &p->una_persona.fec.dia,
          &p->una_persona.fec.mes,
          &p->una_persona.fec.anyo);
    printf("Introduzca su salario: ");
    scanf("%d", &p->salario);
    printf("Introduzca número de horas: ");
    scanf("%d", &p->horas_por_semana);
}

void muestra(struct persona_empleado up)
{
    puts("\n\nDatos de un empleado");
    printf("Nombre: %s\n", up.una_persona.nombre);
    printf("Edad: %d\n", up.una_persona.edad);
    printf("Fecha de nacimiento: %d-%d-%d\n",
           up.una_persona.fec.dia,
           up.una_persona.fec.mes,
           up.una_persona.fec.anyo);
    printf("Altura: %d\n", up.una_persona.altura);
    printf("Peso: %d\n", up.una_persona.peso);
    printf("Número de horas: %d\n", up.horas_por_semana);
}
```

El acceso a miembros de datos de estructuras anidadas requiere el uso de múltiples operadores punto. Por ejemplo, el acceso al día del mes de la fecha de nacimiento de una persona sería:

```c
up.una_persona.fec.dia
```

Las estructuras se pueden anidar a cualquier grado. También es posible inicializar estructuras anidadas en la definición. El siguiente ejemplo inicializa una variable `Luis` de tipo `struct persona`.

```c
struct persona Luis = {"Luis", 25, 1940, 40, {12, 1, 701}};
```

Aquí está el texto corregido:

## ARRAYS DE ESTRUCTURAS

Se puede crear un array de estructuras tal como se crea un array de otros tipos. Los arrays de estructuras son idóneos para almacenar un archivo completo de empleados, un archivo de inventario, o cualquier otro conjunto de datos que se adapte a un formato de estructura. Mientras que los arrays proporcionan un medio práctico de almacenar diversos valores del mismo tipo, los arrays de estructuras le permiten almacenar juntos diversos valores de diferentes tipos, agrupados como estructuras.

Muchos programadores de C utilizan arrays de estructuras como un método para almacenar datos en un archivo de disco. Se pueden introducir y calcular sus datos de disco en arrays de estructuras y a continuación almacenar esas estructuras en memoria. Los arrays de estructuras proporcionan también un medio de guardar datos que se leen del disco.

La declaración de un array de estructuras `info_libro` se puede hacer de un modo similar a cualquier array, es decir,

```c
struct info_libro libros[100];
```

asigna un array de 100 elementos denominado `libros`. Para acceder a los miembros de cada uno de los elementos estructura se utiliza una notación de array. Para inicializar el primer elemento de `libros`, por ejemplo, su código debe hacer referencia a los miembros de `libros[0]` de la forma siguiente:

```c
strcpy(libros[0].titulo, "C++ a su alcance");
strcpy(libros[0].autor, "Luis Joyanes");
strcpy(libros[0].editorial, "McGraw-Hill");
libros[0].anyo = 1999;
```

También puede inicializarse un array de estructuras en el punto de la declaración encerrando la lista de inicializadores entre llaves (`{}`). Por ejemplo,

```c
struct info_libro libros[3] = {
    {"C++ a su alcance", "Luis Joyanes", "McGraw-Hill", 1999},
    {"Estructura de datos", "Luis Joyanes", "McGraw-Hill", 1999},
    {"Problemas en Pascal", "Angel Hermoso", "McGraw-Hill", 1997}
};
```

En el siguiente ejemplo se declara una estructura que representa a un número racional, un array de números racionales es inicializado con valores al azar.

```c
struct racional
{
    int N;
    int D;
};

struct racional rs[4] = {{1, 2}, {2, 3}, {-4, 7}, {0, 1}};
```

**9.4.1. Arrays como miembros**

Los miembros de las estructuras pueden ser también arrays. En este caso, será preciso extremar las precauciones cuando se accede a los elementos individuales del array.

Considérese la siguiente definición de estructura. Esta sentencia declara un array de 100 estructuras, cada estructura contiene información de datos de empleados de una compañía.

```c
struct nomina
{
    char nombre[30];
    int dependientes;
    char departamento[10];
    float horas_dias[7]; /* array de tipo float */
    float salario;
} empleado[100]; /* Un array de 100 empleados */
```

**Ejemplo 9.1**

Una librería desea catalogar su inventario de libros. El siguiente programa crea un array de 100 estructuras, donde cada estructura contiene diversos tipos de variables, incluyendo arrays.

```c
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

struct inventario
{
    char titulo[25];
    char fecha_pub[20];
    char autor[30];
    int num;
    int pedido;
    float precio_venta;
};

int main()
{
    struct inventario libro[100];
    int total = 0;
    char resp, b[20];

    do
    {
        printf("Total libros %d\n", (total + 1));
        printf("¿Cuál es el título?: ");
        gets(libro[total].titulo);
        printf("¿Cuál es la fecha de publicación?: ");
        gets(libro[total].fecha_pub);
        printf("¿Quién es el autor?");
        gets(libro[total].autor);
        printf("¿Cuántos libros existen?: ");
        scanf("%d", &libro[total].num);
        printf("¿Cuántos ejemplares existen pedidos?: ");
        scanf("%d", &libro[total].pedido);
        printf("¿Cuál es el precio de venta?: ");
        gets(b);
        libro[total].precio_venta = atof(b); /* conversión a real */
        fflush(stdin);
        printf("\n ¿Hay más libros? (S/N)");
        scanf("%c", &resp);
        fflush(stdin);
        resp = toupper(resp); /* convierte a mayúsculas */
        if (resp == 'S')
        {
            total++;
            continue;
        }
    } while (resp == 'S');
    return 0;
}
```

Estas correcciones deberían ayudar a mejorar la claridad y corrección del texto.

Aquí tienes el texto corregido:

## UTILIZACIÓN DE ESTRUCTURAS COMO PARÁMETROS

C permite pasar estructuras a funciones, ya sea por valor o por referencia utilizando el operador `&`. Si la estructura es grande, el tiempo necesario para copiar un parámetro `struct` a la pila puede ser prohibitivo. En tales casos, se debe considerar el método de pasar la dirección de la estructura.

El siguiente listado muestra un programa que pasa la dirección de una estructura a una función para entrada de datos. La misma variable estructura se pasa por valor a otra función para la salida de los campos.

```c
#include <stdio.h>

/* Define el tipo estructura info-persona */
struct info_persona {
    char nombre[20];
    char calle[30];
    char ciudad[25];
    char provincia[25];
    char codigo_postal[10];
};

/* prototipos de funciones */
void entrada_persona(struct info_persona* pp);
void ver_info(struct info_persona p);

int main(void) {
    struct info_persona reg_dat;

    /* Pasa por referencia la variable */
    entrada_persona(&reg_dat);

    /* Pasa por valor */
    ver_info(reg_dat);

    printf("\nPulsa cualquier carácter para continuar\n");
    getchar();

    return 0;
}

void entrada_persona(struct info_persona* pp) {
    puts("\n Entrada de los datos de una persona\n");
    printf("Nombre: ");
    gets(pp->nombre);
    printf("Calle: ");
    gets(pp->calle);
    printf("Ciudad: ");
    gets(pp->ciudad);
    printf("Provincia: ");
    gets(pp->provincia);
    printf("Código postal: ");
    gets(pp->codigo_postal);
}

void ver_info(struct info_persona p) {
    puts("\n\tInformación relativa a la persona");
    puts(p.nombre);
    puts(p.calle);
    puts(p.ciudad);
    puts(p.provincia);
    puts(p.codigo_postal);
}
```

Si se desea pasar la estructura por referencia, es necesario utilizar el operador de referencia `&` antes de `reg_dat` en la llamada a la función `entrada_persona()`. El parámetro de la función deberá ser de tipo puntero, `struct info_persona* pp`. El acceso a los miembros a través de un puntero requiere el uso del selector `->`.

Aquí está el texto corregido:

## UNIONES

Las uniones son similares a las estructuras en cuanto agrupan a una serie de variables, pero la forma de almacenamiento es diferente y, por consiguiente, produce efectos distintos. Una estructura (`struct`) permite almacenar variables relacionadas juntas y almacenadas en posiciones contiguas en memoria. Las uniones, declaradas con la palabra reservada `union`, almacenan también múltiples miembros en un paquete; sin embargo, en lugar de situar sus miembros uno detrás de otro, en una unión, todos los miembros se solapan entre sí en la misma posición. El tamaño ocupado por una unión se determina así: se analiza el tamaño de cada variable de la unión, y el mayor tamaño de variable será el tamaño de la unión. La sintaxis de una unión es la siguiente:

```c
union nombre {
    tipo1 miembro1;
    tipo2 miembro2;
    // ...
};
```

Un ejemplo:

```c
union PruebaUnion {
    float Item1;
    int Item2;
};
```

La cantidad de memoria reservada para una unión es igual a la anchura de la variable más grande. En el tipo de unión, cada uno de los miembros de datos comparte memoria con los otros miembros de la unión. La cantidad total de memoria utilizada por la unión compartida es de 8 bytes, ya que el elemento `double` es el miembro de datos más grande de la unión.

```c
union Comparte {
    char letra;
    int elemento;
    float precio;
    double z;
};
```

Una razón para utilizar una unión es ahorrar memoria. En muchos programas, se deben tener varias variables, pero no necesitan utilizarse todas al mismo tiempo. Considérese la situación en que se necesitan tener diversas cadenas de caracteres de entrada. Se pueden crear varios arrays de cadenas de caracteres, tales como los siguientes:

```c
char linea_ordenes[80];
char mensaje_error[80];
char ayuda[80];
```

Estas tres variables ocupan 240 bytes de memoria. Sin embargo, si su programa no necesita utilizar las tres variables simultáneamente, ¿por qué no permitirle compartir la memoria utilizando una unión? Cuando se combinan en el tipo de unión `frases`, estas variables ocupan un total de solo 80 bytes.

```c
union Frases {
    char linea_ordenes[80];
    char mensaje_error[80];
    char ayuda[80];
} cadenas, *pc;
```

Para referirse a los miembros de una unión, se utiliza el operador punto (`.`) o bien el operador flecha (`->`) si se hace desde un puntero a unión. Así:

```c
cadenas.ayuda;
cadenas.mensaje_error;
pc->mensaje_error;
```

Aquí está el texto corregido:

## ENUMERACIONES**

Un `enum` es un tipo definido por el usuario con constantes de nombre de tipo entero. En la declaración de un tipo `enum`, se escribe una lista de identificadores que internamente se asocian con las constantes enteras 0, 1, 2, etc.

**Formato:**
1. ```c
   enum {
       enumerador, enumerador, ... enumerador
   };
   ```
2. ```c
   enum nombre {
       enumerador, enumerador, ... enumerador
   };
   ```

En la declaración del tipo `enum`, pueden asociarse a los identificadores valores constantes en vez de la asociación que por defecto se hace (0, 1, 2, etc.). Para ello se utiliza este formato:

```c
enum nombre {
    enumerador1 = expresion-constante1,
    enumerador2 = expresion-constante2,
    enumerador3 = expresion-constante3,
    // ...
};
```

**Ejemplo 9.2:**
```c
enum Interruptor {
    ENCENDIDO,
    APAGADO
};

enum Boolean {
    FALSE,
    TRUE
};

enum Color {
    ROJO, VERDE, AZUL
};
```

Este ejemplo define tres constantes ROJO, VERDE y AZUL con valores iguales a 0, 1 y 2, respectivamente. Los miembros de datos de un `enum` se llaman enumeradores, y la constante entera por defecto del primer enumerador de la lista es igual a 0. Observa que, a diferencia de `struct` y `union`, los miembros de un tipo `enum` se separan por el operador coma. El ejemplo anterior es equivalente a la definición de las tres constantes ROJO, VERDE y AZUL de la siguiente manera:

```c
const int ROJO = 0;
const int VERDE = 1;
const int AZUL = 2;
```

En la siguiente declaración de tipo enumerado se le da un nombre al tipo:

```c
enum dias_semana {
    LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO
};

enum Hexaedro {
    VERTICES = 8,
    LADOS = 12,
    CARAS = 6
};
```

Una variable de tipo `enum dias_semana` puede tomar los valores especificados en la declaración del tipo. El siguiente bucle está controlado por una variable del tipo enumerado:

```c
enum dias_semana dia;
for (dia = LUNES; dia <= DOMINGO; dia++) {
    printf("%d ", dia);
}
```

La ejecución del bucle escribiría en pantalla: 0 1 2 3 4 5 6.

A los enumeradores se les pueden asignar valores constantes o expresiones constantes durante la declaración:

```c
enum Hexaedro {
    VERTICES = 8,
    LADOS = 12,
    CARAS = 6
};
```

**Ejercicio 9.2:**
```c
#include <stdio.h>
#include <ctype.h>

enum boolean {
    FALSE,
    TRUE
};

enum boolean vocal(char c);

void main() {
    char car;
    int numvocal = 0;

    puts("\nIntroduce un texto. Para terminar: INTRO");
    while ((car = getchar()) != '\n') {
        if (vocal(tolower(car))) {
            numvocal++;
        }
    }

    printf("\nTotal de vocales leídas: %d\n", numvocal);
}

enum boolean vocal(char c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return TRUE;
        default:
            return FALSE;
    }
}
```

**9.7.1. `sizeof` de tipos de datos estructurados:**
```c
/* declara una union */
union tipo_union {
    char c;
    int i;
    float f;
    double d;
};

/* declara una estructura */
struct tipo_estructura {
    char c;
    int i;
    float f;
    double d;
};

/* declara un tipo enumerado */
enum monedas {
    PESETA,
    DURO,
    CINCODUROS,
    CIEN
};

printf("\nsizeof(tipo_estructura): %d\n", sizeof(struct tipo_estructura));
printf("\nsizeof(tipo_union): %d\n", sizeof(union tipo_union));
printf("\nsizeof(monedas): %d\n", sizeof(enum monedas));
```

La salida que se genera con estos datos sería:
```
sizeof(tipo_estructura): 15
sizeof(tipo_union): 8
sizeof(monedas): 2
```

**9.7.2. typedef:**
```c
typedef double Longitud;

Longitud Distancia(const struct Pto* p, const struct Pto* p2) {
    // ...
    Longitud longitud = sqrt(r_cuadrado);
    return longitud;
}

typedef char* String;
typedef const char* string;

struct complejo {
    float x, y;
};

typedef struct complejo complex;

/* Definición de un array de complejos */
complex v[12];
```

La ventaja de `typedef` es que permite dar nombres a tipos de datos más acordes con lo que representan en una determinada aplicación.


Aquí está el texto corregido:

## CAMPOS DE BITS

El lenguaje C permite realizar operaciones con los bits de una palabra. Ya se han estudiado los operadores de manejo de bits: `>>`, `<<`, etc. Con los campos de bits, C permite acceder a un número de bits de una palabra entera. Un campo de bits es un conjunto de bits adyacentes dentro de una palabra entera. La sintaxis para declarar campos de bits se basa en la declaración de estructuras. El formato general:

```c
struct identificador_campo {
    tipo nombre1: longitud1;
    tipo nombre2: longitud2;
    tipo nombre3: longitud3;
    tipo nombren: longitudn;
};
```

El tipo ha de ser entero, `int` generalmente, `unsigned int`. La longitud es el número de bits consecutivos que se toman.

**Ejemplo 9.3:**
```c
struct fecha {
    unsigned dia: 5;
    unsigned mes: 4;
    unsigned año: 7;
    unsigned bisiesto: 1;
};
```

**Ejemplo 9.4:**
```c
struct componentes {
    unsigned diodo: 1;
    unsigned resistencia: 1;
    unsigned amperimetro: 1;
    unsigned transistor: 1;
    unsigned condensador: 1;
    unsigned inductancia: 1;
};
```

Los campos individuales se referencian como cualquier otro miembro de una estructura: con el selector punto (`.`). Por ejemplo,

```c
struct componentes ct;
ct.diodo = 1;
if (ct.amperimetro)
```

Al declarar campos de bits, la suma de los bits declarados puede exceder el tamaño de un entero; en ese caso, se emplea la siguiente posición de almacenamiento entero. No está permitido que un campo de bits solape los límites entre dos `int`.

Al declarar una estructura puede haber miembros que sean variables y otros campos de bits. La siguiente estructura tiene esta característica:

```c
struct reg_estudiante {
    char nombre[33];
    char ape111[33];
    char ape112[33];
    unsigned masculino: 1;
    unsigned femenino: 1;
    unsigned curso: 3;
};
```

Los campos de bits se utilizan para rutinas de encriptación de datos y fundamentalmente para ciertos interfaces de dispositivos externos. Presentan ciertas restricciones. Así, no se puede tomar la dirección de una variable campo de bits; no puede haber arrays de campos de bits; no se puede solapar fronteras de `int`. Depende del procesador que los campos de bits se alineen de izquierda a derecha o de derecha a izquierda (conviene hacer una comprobación para cada procesador, utilizando para ello una `union` con variable entera y campos de bits).

**Ejemplo 9.5:**
```c
/* Tipo estructura de campos de bits */
struct perifericos {
    unsigned perf1: 1;
    unsigned perf2: 1;
    unsigned perf3: 1;
    unsigned perf4: 1;
    unsigned perf5: 1;
    unsigned perf6: 1;
    unsigned perf7: 1;
    unsigned perf8: 1;
};

/* Prototipo de función peticion_acceso */
void peticion_acceso(const struct perifericos ochobits);

/* Función que contabiliza los accesos a cada periférico. */
void accesos_perifericos(int accper[]) {
    int i;
    const struct perifericos ochobits;
    const int neventos = 1000;

    for (i = 0; i < 8; ) {
        accper[i++] = 0;
    }

    /* Bucle principal de 1000 llamadas */
    for (i = 0; i < neventos; i++) {
        peticion_acceso(ochobits);

        if (ochobits.perf1)
            ++accper[0];
        else if (ochobits.perf2)
            ++accper[1];
        else if (ochobits.perf3)
            ++accper[2];
        else if (ochobits.perf4)
            ++accper[3];
        else if (ochobits.perf5)
            ++accper[4];
        else if (ochobits.perf6)
            ++accper[5];
        else if (ochobits.perf7)
            ++accper[6];
        else if (ochobits.perf8)
            ++accper[7];
    }
}
```

**Ejemplo 9.6:**
```c
/* Tipo estructura campo de bits */
struct byte {
    unsigned int a: 1;
    unsigned int b: 1;
    unsigned int c: 1;
    unsigned int d: 1;
    unsigned int e: 1;
    unsigned int f: 1;
    unsigned int g: 1;
    unsigned int h: 1;
};

/* Union para decodificación de bits */
union charbits {
    char ch;
    struct byte bits;
};
```

```c
#include <stdio.h>
#include <conio.h>

#define mayus(ch) ((ch) >= 'a' && (ch) <= 'z' ? ((ch) + 'A' - 'a') : (ch))

struct byte {
    unsigned int a: 1;
    unsigned int b: 1;
    unsigned int c: 1;
    unsigned int d: 1;
    unsigned int e: 1;
    unsigned int f: 1;
    unsigned int g: 1;
    unsigned int h: 1;
};

union charbits {
    char ch;
    struct byte bits;
} caracter;

void decodifica(struct byte b);

void main() {
    puts("Teclea caracteres. Para salir carácter 'X'");
    do {
        caracter.ch = getche();
        printf(": ");
        decodifica(caracter.bits);
    } while (mayus(caracter.ch) != 'X');
}

void decodifica(struct byte b) {
    /* Los campos de bits se alinean de

 derecha a izquierda, por esa razón se escriben los campos en orden inverso */
    printf("%2u%2u%2u%2u%2u%2u%2u%2u\n",
           b.h, b.g, b.f, b.e, b.d, b.c, b.b, b.a);
}
```

Estos son algunos ejemplos corregidos. Revise las correcciones y hágamelo saber si tiene más preguntas o si necesita más ayuda con algún otro fragmento del texto.