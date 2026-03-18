#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    // Creamos una Pila
    Pila miPila;
    // Inicializamos la pila
    inicpila(&miPila);

    // Agregamos un dato por codigo
    apilar(&miPila, 1);
    // Agregamos un dato por teclado
    leer(&miPila);

    // Devolvemos y eliminamos el ultimo dato agregado a la pila
    int eliminarUltimoDato = desapilar(&miPila);
    printf("Eliminar ultimo dato de la pila: (desapilar): %d\n", eliminarUltimoDato);

    // Mostramos el ultimo dato agregado a la Pila
    int ultimoDato = tope(&miPila);
    printf("Ultimo dato (tope): %d\n", ultimoDato);

    // Muestra 1 : (true) o 0 : (false) segunn si la pila esta vacia o no
    int estaVacia = pilavacia(&miPila);
    printf("Esta vacia (pilavacia): %d\n", estaVacia);

    // Muestra el contenido de la pila
    mostrar(&miPila);

}
