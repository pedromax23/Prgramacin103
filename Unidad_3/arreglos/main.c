#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


/*







8. Realizar una función que obtenga el máximo carácter de un arreglo dado.
9. Realizar una función que determine si un arreglo es capicúa.
10. Realizar una función que invierta los elementos de un arreglo. (sin utilizar un arreglo auxiliar)
11. Ordenar un arreglo según los siguientes métodos:
a. Selección
b. Inserción
12. Dados dos arreglos ordenados alfabéticamente, crear un tercer arreglo con los elementos de
los dos primeros intercalados, de manera que quede un arreglo también ordenado
alfabéticamente.
13. Dado el vector {1,5,6,7,8} escribir un programa que genere otro vector con la suma del
contenido de todo los elementos anteriores al índice actual: {1,6,12,19,27}.
*/

/// EJERCICIO 1
int cargarDatos(int ArregloA[], int tamano) {

    char control = 's';
    int i = 0;

    while(control == 's' && i < tamano){
        printf("Ingrese un dato para el arreglo: \n");
        scanf("%d", &ArregloA[i]);
        i++;

        printf("Quiere cargar mas datos s/n: \n");
        scanf(" %c", &control);
    }

    return i;

}

///EJERCICIO 2
void mostrarArreglo(int ArregloA[], int cantidad) {
    for(int i = 0; i < cantidad; i++) {
        printf("Dato del arreglo en la posicion %d: %d\n", i, ArregloA[i]);
    }
}

/// EJERCICIO 3
int sumarArreglo(int ArregloA[], int validos) {

    int suma = 0;

    for(int i = 0; i < validos; i++) {

        suma += ArregloA[i];

    }

    return suma;

}

/// EJERCICIO 4
Pila copiarElementos(int ArregloA[], int validos) {

    Pila aux;
    inicpila(&aux);

    for(int i = 0; i < validos; i++) {

        apilar(&aux, ArregloA[i]);

    }

    return aux;

}
/// EJERCICIO 5
int cargarDatosReales(float reales[], int tamano) {
    float min = 0.0, max = 100.0;

    int i = 0;

    for(i; i < tamano; i++) {
        float rango = min + ((float)rand() / RAND_MAX) * (max - min);
        reales[i] = rango;
    }

    return i;

}

float sumarDatosReales(float reales[], int validos) {

    int suma = 0;

    for(int i = 0; i < validos; i++) {

        suma += reales[i];

    }

    return suma;

}

void mostrarDatosReales(float reales[], int validos) {

    for(int i = 0; i < validos; i++) {

        printf("[ %d ] : %.2f", i, reales[i]);

    }

}

/// EJERCICIO 6
void seEncuentra(char caracteres[], char caracter, int tamano) {

    for(int i = 0; i < tamano; i++) {

        if(caracteres[i] == caracter) {
            printf("El caracter se encuentra en el arreglo");
        }
    }

}


int main()
{

    srand(time(NULL));
    /// EJERCICIO 1
    /* Hacer una función que reciba como parámetro un arreglo de números enteros y permita que
    el usuario ingrese valores al mismo por teclado. La función debe retornar la cantidad de
    elementos cargados en el arreglo (o pueden utilizar como puntero válidos). */

    /*
    int ArregloA[3];

    int validos = cargarDatos(ArregloA, 3);
    */


    /// EJERCICIO 2
    /* Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos)
    cargados en él y los muestre por pantalla. */
    /*
    mostrarArreglo(ArregloA, validos);
    */

    /// EJERCICIO 3
    /* 3. Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos)
    cargados en él y calcule la suma de sus elementos. */
    /*
    int sumaElementos = sumarArreglo(ArregloA, validos);
    printf("La suma de los elementos es: %d", sumaElementos);
    */

    /// EJERCICIO 4
    /* Hacer una función que reciba como parámetro un arreglo, la cantidad de elementos (válidos)
    cargados en él y una Pila. La función debe copiar los elementos del arreglo en la pila. */
    /*
    Pila pilaA;
    inicpila(&pilaA);

    pilaA = copiarElementos(ArregloA, validos);
    mostrar(&pilaA);
    */

    /// EJERCICIO 5
    /* Realizar una función que sume los elementos de un arreglo de números reales (float) de
    dimensión 100. (se recomienda hacer una función para cargar y otra para mostrar para este
    tipo de dato asociado al arreglo) */
    /*
    float reales[100];
    int validos = cargarDatosReales(reales, 100);
    float suma = sumarDatosReales(reales, validos);
    mostrarDatosReales(reales, validos);
    */

    /// EJERCICIO 6
    /* Realizar una función que indique si un elemento dado se encuentra en un arreglo de
    caracteres. */

    /*
    char caracteres[3] = {'s', 'd', 'x'};

    seEncuentra(caracteres, 'w', 3);
    */

    /// EJERCICIO 7
    /* Realizar una función que inserte un carácter en un arreglo ordenado alfabéticamente,
    conservando el orden. */



    return 0;
}
