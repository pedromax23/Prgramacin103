#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/// TP N�2: Funciones con Pilas

/// EJERCICIO 1
void funcionDeCarga(Pila *pilaA) {
<<<<<<< HEAD

    char letra = 's';
    while(letra == 's') {
        leer(pilaA);
        printf("Quieres ingresar otro dato s/n: ");
=======
    char letra = 's';
    while(letra == 's') {
        leer(pilaA);
        printf("Quiere seguir ingresando datos s/n: \n");
>>>>>>> c61f739e7c439ef2d51434eecb2d9afb76bccb64
        scanf(" %c", &letra);
    }

}

/// EJERCICIO 2
<<<<<<< HEAD
Pila pasarAUnaPila(Pila pilaA, Pila pilaB) {
    while(!pilavacia(&pilaA)) {
        apilar(&pilaB, desapilar(&pilaA));
=======
Pila pasarElementos(Pila pilaA, Pila pilaB) {

    while(!pilavacia(&pilaA)) {

        apilar(&pilaB, desapilar(&pilaA));

>>>>>>> c61f739e7c439ef2d51434eecb2d9afb76bccb64
    }

    return pilaB;
}

/// EJERCICIO 3
Pila pasarAUnaPilaSinAlterarElOrden(Pila pilaA, Pila pilaB) {

    Pila auxiliar;
    inicpila(&auxiliar);

    while(!pilavacia(&pilaA)) {
        apilar(&auxiliar, desapilar(&pilaA));
    }
    while(!pilavacia(&auxiliar)) {
        apilar(&pilaB, desapilar(&auxiliar));
    }

    return pilaB;
}

/// EJERCICIO 4
Pila invertirPila(Pila pilaA) {

    Pila auxiliar;
    inicpila(&auxiliar);

    while(!pilavacia(&pilaA)) {
        apilar(&auxiliar, desapilar(&pilaA));
    }

    return auxiliar;

}

/// EJERCICIO 5
void funcionBusqueda(Pila pilaA,int elemento) {

    int estaONo = 0;

    while(!pilavacia(&pilaA)) {
        int datoPila = desapilar(&pilaA);
        if(datoPila == elemento) {
            estaONo = 1;
            break;
        } else {
            estaONo = 0;
        }
    }

    if(estaONo == 1) {
        printf("El elemento esta en la pila");
    } else {
        printf("El elemento no esta en la pila");
    }

}


int main()
{
    Pila pilaA;
    Pila pilaB;
    inicpila(&pilaA);
    inicpila(&pilaB);

    int stop = 1;
    do {
        int option, dato;
        printf("\n1 - Cargar datos\n2 - Pasar de pila A a pila B\n3 - Pasar de pila A a pila B sin alterar el orden\n4 - Invertir pila\n5 - Buscar elemento\n0 - Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &option);

        switch(option) {
        case 1:

            funcionDeCarga(&pilaA);

            break;
        case 2:

            pilaB = pasarAUnaPila(pilaA, pilaB);
            mostrar(&pilaB);

            break;
        case 3:

            pilaB = pasarAUnaPilaSinAlterarElOrden(pilaA, pilaB);
            mostrar(&pilaB);

            break;
        case 4:

            pilaA = invertirPila(pilaA);
            mostrar(&pilaA);

            break;
        case 5:

            int elemento;
            printf("Ingrese un valor entero a buscar: ");
            scanf("%d", &elemento);

            funcionBusqueda(pilaA, elemento);

            break;
        case 0:
            printf("Saliendo...\n");
            stop = 0;
            break;
        default:
            printf("Ingrese una opcion valida");
        }

    } while (!stop == 0);

    mostrar(&pilaA);
    mostrar(&pilaB);

    return 0;
}
