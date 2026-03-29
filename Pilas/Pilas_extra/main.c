#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/// EJERCICIO 1
Pila tope_base(Pila pilaA) {

    Pila auxiliar;
    inicpila(&auxiliar);

    int tope;
    tope = desapilar(&pilaA);

    while(!pilavacia(&pilaA)) {
        apilar(&auxiliar, desapilar(&pilaA));
    }

    apilar(&auxiliar, tope);

    while(!pilavacia(&auxiliar)) {

        apilar(&pilaA, desapilar(&auxiliar));

    }

    return pilaA;
}

/// EJERCICIO 2
void repartirCartas(Pila mazo, Pila *jugador1, Pila *jugador2) {

    while(!pilavacia(&mazo)) {

        apilar(jugador1, desapilar(&mazo));
        apilar(jugador2, desapilar(&mazo));

    }

}

int cantidadElementos(Pila pilaA, Pila pilaB) {

    int pilaVacia = 0;

    while(!pilavacia(&pilaA)) {

        desapilar(&pilaA);
        desapilar(&pilaB);

        if(pilavacia(&pilaA) && pilavacia(&pilaB)) {
            pilaVacia = 0;
            break;
        } else if(pilavacia(&pilaA)) {
            pilaVacia = 1;
            break;
        } else if(pilavacia(&pilaB)) {
            pilaVacia = -1;
            break;
        }
    }

    return pilaVacia;

}

/// EJERCICIO 4
int compararValores(Pila pilaA, Pila pilaB) {

    int sonIguales = 1;

    while(!pilavacia(&pilaA)) {
        if(desapilar(&pilaA) != desapilar(&pilaB)) {
            sonIguales = 0;
            break;
        }
    }

    return sonIguales;

}

int main()
{
    /// EJERCICIO 1
    /*
    Pila pilaA;
    inicpila(&pilaA);
    apilar(&pilaA, 1);
    apilar(&pilaA, 2);
    apilar(&pilaA, 3);

    printf("Pila A iniicialmente:\n");
    mostrar(&pilaA);
    pilaA = tope_base(pilaA);
    printf("Pila A modificiada:");
    mostrar(&pilaA);
    */

    /// EJERCICIO 2
    /*
    Pila mazo;
    Pila jugador1;
    Pila jugador2;
    inicpila(&mazo);
    inicpila(&jugador1);
    inicpila(&jugador2);

    apilar(&mazo, 1);
    apilar(&mazo, 2);
    apilar(&mazo, 3);
    apilar(&mazo, 4);

    printf("Pila Mazo:\n");
    mostrar(&mazo);
    repartirCartas(mazo, &jugador1, &jugador2);
    printf("Pila Jugador 1:\n");
    mostrar(&jugador1);
    printf("Pila Jugador 2:\n");
    mostrar(&jugador2);
    */

    /// EJERCICIO 3
    /*
    Pila pilaA;
    Pila pilaB;
    inicpila(&pilaA);
    inicpila(&pilaB);

    apilar(&pilaA, 1);
    apilar(&pilaA, 1);
    apilar(&pilaB, 1);
    apilar(&pilaB, 2);

    int pilaVacia = cantidadElementos(pilaA, pilaB);
    if(pilaVacia == -1) {
        printf("La pila A tiene mas elementos\n");
    } else if(pilaVacia == 0) {
        printf("Las dos pilas tienen la misma cantidad de elementos\n");
    } else if(pilaVacia == 1) {
        printf("La pila B tiene mas elementos\n");
    }
    printf("Pila A:\n");
    mostrar(&pilaA);
    printf("Pila B:\n");
    mostrar(&pilaB);
    */

    /// EJERCICIO 4
    Pila pilaA;
    Pila pilaB;
    inicpila(&pilaA);
    inicpila(&pilaB);

    apilar(&pilaA, 1);
    apilar(&pilaB, 1);

    int sonIguales = compararValores(pilaA, pilaB);

    if(sonIguales == 1) {
        printf("Las pilas son iguales");
    } else {
        printf("Las pilas son diferentes");
    }

    return 0;
}
