#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


/*







8. Realizar una funci�n que obtenga el m�ximo car�cter de un arreglo dado.
9. Realizar una funci�n que determine si un arreglo es capic�a.
10. Realizar una funci�n que invierta los elementos de un arreglo. (sin utilizar un arreglo auxiliar)
11. Ordenar un arreglo seg�n los siguientes m�todos:
a. Selecci�n
b. Inserci�n
12. Dados dos arreglos ordenados alfab�ticamente, crear un tercer arreglo con los elementos de
los dos primeros intercalados, de manera que quede un arreglo tambi�n ordenado
alfab�ticamente.
13. Dado el vector {1,5,6,7,8} escribir un programa que genere otro vector con la suma del
contenido de todo los elementos anteriores al �ndice actual: {1,6,12,19,27}.
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

/// EJERCICIO 7
void insertarCaracter(char caracteres[], char caracter, int *tamano) {

    int i = 0;

    // Bucle para encontrar la posición correcta para insertar el nuevo carácter
    while(i < *tamano && caracteres[i] < caracter) {
        i++;
    }

    // Buecle para desplazar los elementos hacia la derecha y hacer espacio para el nuevo carácter
    for(int j = *tamano; j > i; j--) {
        caracteres[j] = caracteres[j - 1];
    }

    // Insertar el nuevo carácter en la posición correcta y actualizar el tamaño del arreglo
    caracteres[i] = caracter;
    (*tamano)++;

}

/// EJERCICIO 8
void eliminarCaracter(char caracteres[], char caracter, int *tamano) {

    int i = 0;

    // Bucle para encontrar la posición del carácter a eliminar
    while(i < *tamano && caracteres[i] != caracter) {
        i++;
    }

    // Si el carácter no se encuentra en el arreglo, salir de la función
    if(i == *tamano) {
        printf("El caracter no se encuentra en el arreglo");
        return;
    }

    // Bucle para desplazar los elementos hacia la izquierda y eliminar el carácter
    for(int j = i; j < *tamano - 1; j++) {
        caracteres[j] = caracteres[j + 1];
    }

    // Actualizar el tamaño del arreglo después de eliminar el carácter
    (*tamano)--;

}

/// EJERCICIO 9
int esCapicua(int arreglo[], int tamano) {

    // Bucle para comparar los elementos del arreglo desde el inicio y el final hacia el centro
    for(int i = 0; i < tamano / 2; i++) {

        // Si los elementos no son iguales, el arreglo no es capicúa
        if(arreglo[i] != arreglo[tamano - 1 - i]) {
            return 0; // No es capicúa
        }
    }

    return 1; // Es capicúa

}

/// EJERCICIO 10
void invertirArreglo(int arreglo[], int tamano) {

    // Bucle para intercambiar los elementos del arreglo desde el inicio y el final hacia el centro
    for(int i = 0; i < tamano / 2; i++) {
        // Almacenar el elemento del inicio en una variable temporal
        int temp = arreglo[i];
        // Asignar el elemento del final al elemento del inicio
        arreglo[i] = arreglo[tamano - 1 - i];
        // Asignar el valor almacenado en la variable temporal al elemento del final
        arreglo[tamano - 1 - i] = temp;
    }

}

/// EJERCICIO 11
/*Para el método de selección, se puede implementar una función que recorra el arreglo y seleccione el elemento más pequeño en cada iteración, intercambiándolo con el elemento en la posición actual. 
Para el método de inserción, se puede implementar una función que recorra el arreglo y, para cada elemento, lo inserte en la posición correcta dentro de la parte ordenada del arreglo.*/
void ordarSeleccion(int arreglo[], int tamano) {

    // Bucle para recorrer el arreglo desde el primer elemento hasta el penúltimo
    for(int i = 0; i < tamano -1; i++) {
        // Inicializar el índice del elemento mínimo como el índice actual
        int minIndex = i;
        // Bucle para encontrar el índice del elemento mínimo en el resto del arreglo
        for(int j = i +1; j < tamano; j++) {
            // Si el elemento en la posición j es menor que el elemento en minIndex, actualizar minIndex
            if(arreglo[j] < arreglo[minIndex]) {
                minIndex = j;
            }
        }

        // Intercambiar el elemento mínimo con el elemento en la posición actual
        int temp = arreglo[i];
        arreglo[i] = arreglo[minIndex];
        arreglo[minIndex] = temp;
    }

}



int main()
{

    srand(time(NULL));
    /// EJERCICIO 1
    /* Hacer una funci�n que reciba como par�metro un arreglo de n�meros enteros y permita que
    el usuario ingrese valores al mismo por teclado. La funci�n debe retornar la cantidad de
    elementos cargados en el arreglo (o pueden utilizar como puntero v�lidos). */

    /*
    int ArregloA[3];

    int validos = cargarDatos(ArregloA, 3);
    */


    /// EJERCICIO 2
    /* Hacer una funci�n que reciba como par�metro un arreglo y la cantidad de elementos (v�lidos)
    cargados en �l y los muestre por pantalla. */
    /*
    mostrarArreglo(ArregloA, validos);
    */

    /// EJERCICIO 3
    /* 3. Hacer una funci�n que reciba como par�metro un arreglo y la cantidad de elementos (v�lidos)
    cargados en �l y calcule la suma de sus elementos. */
    /*
    int sumaElementos = sumarArreglo(ArregloA, validos);
    printf("La suma de los elementos es: %d", sumaElementos);
    */

    /// EJERCICIO 4
    /* Hacer una funci�n que reciba como par�metro un arreglo, la cantidad de elementos (v�lidos)
    cargados en �l y una Pila. La funci�n debe copiar los elementos del arreglo en la pila. */
    /*
    Pila pilaA;
    inicpila(&pilaA);

    pilaA = copiarElementos(ArregloA, validos);
    mostrar(&pilaA);
    */

    /// EJERCICIO 5
    /* Realizar una funci�n que sume los elementos de un arreglo de n�meros reales (float) de
    dimensi�n 100. (se recomienda hacer una funci�n para cargar y otra para mostrar para este
    tipo de dato asociado al arreglo) */
    /*
    float reales[100];
    int validos = cargarDatosReales(reales, 100);
    float suma = sumarDatosReales(reales, validos);
    mostrarDatosReales(reales, validos);
    */

    /// EJERCICIO 6
    /* Realizar una funci�n que indique si un elemento dado se encuentra en un arreglo de
    caracteres. */

    /*
    char caracteres[3] = {'s', 'd', 'x'};

    seEncuentra(caracteres, 'w', 3);
    */

    /// EJERCICIO 7
    /* Realizar una funci�n que inserte un car�cter en un arreglo ordenado alfab�ticamente,
    conservando el orden. */

    // El arreglo debe tener espacio suficiente para el nuevo carácter
    char caracteres[4] = {'a', 'c', 'e'};
    // El tamaño actual del arreglo es 3, pero se debe actualizar a 4 después de insertar el nuevo carácter
    int tamano = 3;

    // Insertar el nuevo carácter 'b' en el arreglo
    insertarCaracter(caracteres, 'b', &tamano);

    // Mostrar el arreglo después de la inserción
    for(int i = 0; i < tamano; i++) {
        printf("%c ", caracteres[i]);
    }

    /// EJERCICIO 8
    /* Realizar una funcin que elimine un carcter de un arreglo ordenado alfabticamente,
    conservando el orden. */

    // Eliminar el carácter 'c' del arreglo
    eliminarCaracter(caracteres, 'c', &tamano);

    // Mostrar el arreglo después de la eliminación
    for(int i = 0; i < tamano; i++) {
        printf("%c ", caracteres[i]);
    }

    /// EJERCICIO 9
    /* Realizar una funci�n que determine si un arreglo es capic�a. */
    
    int arregloCapicua[5] = {1, 2, 3, 2, 1};

    if(esCapicua(arregloCapicua, 5)) {
        printf("El arreglo es capicúa");
    } else {
        printf("El arreglo no es capicúa");
    }

    /// EJERCICIO 10
    /* Realizar una funci�n que invierta los elementos de un arreglo. (sin utilizar un arreglo auxiliar) */

    int arregloInvertir[5] = {1, 2, 3, 4, 5};

    invertirArreglo(arregloInvertir, 5);

    // Mostrar el arreglo después de invertirlo
    for(int i = 0; i < 5; i++) {
        printf("%d ", arregloInvertir[i]);
    }

    /// EJERCICIO 11
    /* Ordenar un arreglo seg�n los siguientes m�todos: 
    a. Selecci�n
    b. Inserci�n */




    return 0;
}
