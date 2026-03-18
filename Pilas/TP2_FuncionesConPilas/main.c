#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/// TP N°2: Funciones con Pilas

/// EJERCICIO 1
void funcionDeCarga(Pila *miPila) {

    leer(miPila);

}

/// EJERCICIO 2


int main()
{
    Pila miPila;
    inicpila(&miPila);

    int stop = 1;
    do {
        int option, dato;
        printf("1 - Cargar datos\n0 - Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &option);

        switch(option) {
        case 1:

            funcionDeCarga(&miPila);

            printf("Cargar datos...\n");

            break;
        case 0:
            printf("Saliendo...\n");
            stop = 0;
            break;
        default:
            printf("Ingrese una opcion valida");
        }

    } while (!stop == 0);

    mostrar(&miPila);


    return 0;
}
