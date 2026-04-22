#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

void cargarKm(Pila *);
int buscarMayor(Pila);
int kmsPorDia(int [], Pila);

int main()
{
    /* Ejercicio 1 */
    Pila Kilometros;
    inicpila(&Kilometros);

    cargarKm(&Kilometros);
    mostrar(&Kilometros);

    /* Eercicio 2 */
    /*
    int mayorTramo = buscarMayor(Kilometros);
    printf("El mayor tramo es: %i\n", mayorTramo);
    */

    /* Ejercicio 3 */
    int kmPorDia[10] = {0};
    int validos = kmsPorDia(kmPorDia, Kilometros);
    for(int i = 0; i < validos; i++) {
        printf("[ %i ] : %i", i, kmPorDia[i]);
    }


    return 0;
}

/// 1 FUNCION: CARGAR KM
void cargarKm(Pila *p_Kilometros) {

    char controlDias = 's';

    while(controlDias != 'n') {
        char controlTramo = 's';
        while(controlTramo != 'n') {
            printf("-- KM --\n");
            leer(p_Kilometros);

            printf("Desea cargar otro tramo s/n: ");
            scanf(" %c", &controlTramo);

        }
        apilar(p_Kilometros, -1);

        printf("Quiere ingresar otro dia s/n: ");
        scanf(" %c", &controlDias);
    }
}

/// 2 FUNCION: MAYOR TRAMO
int buscarMayor(Pila Kilometros) {

    int mayor = 0;

    while(!pilavacia(&Kilometros)) {
        int dato =  desapilar(&Kilometros);

        if(dato > mayor) {

            mayor = dato;

        }

    }

    return mayor;
}

/// 3 FUNCION: SUMAR DIAS
int kmsPorDia(int kmPorDia[], Pila Kilometros) {

    Pila aux;
    inicpila(&aux);

    int validos = 0;
    int suma = 0;
    int finDia = 0;

    /* Eliminamos el -1 del final */
    desapilar(&Kilometros);
    while(!pilavacia(&Kilometros)) {
        finDia = 0;

        while(!pilavacia(&Kilometros) && finDia == 0) {
            int dato = desapilar(&Kilometros);

            if(dato != -1) {
                suma += dato;
            } else {
                finDia = 1;
            }
        }

        apilar(&aux, suma);
        suma = 0;
        validos ++;
    }

    int i = 0;
    while(!pilavacia(&aux)) {

        kmPorDia[i] = desapilar(&aux);
        i++;

    }

    return validos;
}
