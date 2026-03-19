#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/// TP N°2: Funciones con Pilas

/// EJERCICIO 1
void funcionDeCarga(Pila *pilaA) {
    char letra = 's';
    while(letra == 's') {
        leer(pilaA);
        printf("Quiere seguir ingresando datos s/n: \n");
        scanf(" %c", &letra);
    }

}

/// EJERCICIO 2
Pila pasarElementos(Pila pilaA, Pila pilaB) {

    while(!pilavacia(&pilaA)) {

        apilar(&pilaB, desapilar(&pilaA));

    }

    return pilaB;
}

/// EJERCICIO 3
Pila pasarElementosOrdenados(Pila pilaA, Pila pilaB) {

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
///EJERCICIO 5
void funcionDeBusqueda(Pila pilaA,int elemento){

    int dato;
    int seEncontro;

    while(!pilavacia(&pilaA)){
        dato = desapilar(&pilaA);
        if(dato == elemento){
            seEncontro = 1;
            break;
        } else {
            seEncontro = 0;
        }
    }

    if(seEncontro == 1) {
        printf("El dato se encontro\n");
    } else {
        printf("El dato no se encontro\n");
    }
}

/// EJERCICIO 6
Pila eliminarDatos(Pila pilaA, int elemento){

    Pila auxiliar;
    inicpila(&auxiliar);

    int dato;

    while(!pilavacia(&pilaA)){
        dato = desapilar(&pilaA);
        if(dato != elemento){
              apilar(&auxiliar, dato);
        }
    }

    while(!pilavacia(&auxiliar)) {
        apilar(&pilaA, desapilar(&auxiliar));
    }

    return pilaA;
}

/// EJERCICIO 7
int menorElemento(Pila pilaA) {

    int menor = 1000000;

    int dato;
    while(!pilavacia(&pilaA)){
        dato = desapilar(&pilaA);
        if(dato < menor){
              menor = dato;
        }
    }

    return menor;
}

/// EJERCICIO 8
Pila insertarElemento(Pila pilaOrdenada, int elemento){

    Pila auxiliar;
    inicpila(&auxiliar);

    int flag = 0;

    int dato;
    while(!pilavacia(&pilaOrdenada)) {
        dato = desapilar(&pilaOrdenada);
        if(dato < elemento && flag == 0) {
            apilar(&auxiliar, elemento);
            break;
        }
        apilar(&auxiliar, dato);
    }

    if(flag == 0) {
        apilar(&auxiliar, elemento);
    }

    while(!pilavacia(&auxiliar)) {
        apilar(&pilaOrdenada, desapilar(&auxiliar));
    }

    return pilaOrdenada;
}

/// EJERCICIO 9
int sumaPila(Pila pilaA) {

    int suma;
    while(!pilavacia(&pilaA)){
        suma += desapilar(&pilaA);
    }
    return suma;
}

int cuentaPila(Pila pilaA) {
    int cuenta = 0;
    while(!pilavacia(&pilaA)){
        desapilar(&pilaA);
        cuenta ++;
    }

    return cuenta;
}

float divide(Pila pilaA) {

    int suma = sumaPila(pilaA);
    int cuenta = cuentaPila(pilaA);

    float promedio = (float)suma / (float)cuenta;

    return promedio;

}

float promedioPila(Pila pilaA) {

    float promedio = divide(pilaA);

    return promedio;

}


int main()
{
    Pila pilaA;
    Pila pilaB;
    Pila pilaOrdenada;
    inicpila(&pilaA);
    inicpila(&pilaB);
    inicpila(&pilaOrdenada);
    apilar(&pilaOrdenada, 2);
    apilar(&pilaOrdenada, 4);
    apilar(&pilaOrdenada, 9);

    int dato;
    int menor;
    float promedio;

    int stop = 1;
    do {
        int option;
        printf("1 - Cargar datos\n2 - Pasar datos\n3 - Pasar datos ordenados\n4 - Invertir pila A\n5 - Buscar dato\n6 - Eliminar datos\n7 - Encontrar menor\n8 - Insertar dato ordenado\n9 - Promedio de la pila A\n0 - Salir\n");
        printf("Ingrese una opcion: \n");
        scanf("%d", &option);

        switch(option) {
        case 1:

            funcionDeCarga(&pilaA);

            printf("Cargar datos...\n\n");

            break;
        case 2:

            pilaB = pasarElementos(pilaA, pilaB);
            mostrar(&pilaB);

            break;
        case 3:

            pilaB = pasarElementosOrdenados(pilaA, pilaB);
            mostrar(&pilaB);

            break;
        case 4:

            pilaA = invertirPila(pilaA);
            mostrar(&pilaA);

            break;
        case 5:

            printf("Ingrese el valor entero a buscar: ");
            scanf("%d", &dato);

            funcionDeBusqueda(pilaA, dato);

            break;
        case 6:

            printf("Ingrese un dato a eliminar de la pila: ");
            scanf("%d", &dato);

            pilaA = eliminarDatos(pilaA, dato);
            mostrar(&pilaA);

            break;
        case 7:

            menor = menorElemento(pilaA);
            printf("El menor elemento de la pila A es: %d\n", menor);

            break;
        case 8:

            printf("Ingrese un dato a insertar: ");
            scanf("%d", &dato);

            pilaOrdenada = insertarElemento(pilaOrdenada, dato);
            mostrar(&pilaOrdenada);

            break;
        case 9:

            promedio = promedioPila(pilaA);
            printf("El promedio de a pila A es: %.2f\n", promedio);

            break;
        case 0:
            printf("Saliendo...\n");
            stop = 0;
            break;
        default:
            printf("Ingrese una opcion valida");
        }

    } while (!stop == 0);


    return 0;
}
