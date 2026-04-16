#include <stdio.h>
#include <stdlib.h>

/// Arreglo para devolver los validos de la matriz de palabras
int cargarArrayStrings(int dimC, int dimF, char M[][dimC]) {

    int i = 0;
    char control = 's';

    // Buecle para cargar palabras
    while(control != 'n' && i < dimF) {

        printf("Ingrese una palabra\n");
        // Funcion para guardar una palabra en la fila (i)
        gets(M[i]);
        i++;

        printf("Quiere cargar otra palabra?\n");
        scanf(" %c", &control);
        // Metodo para limpiar el buffer
        while(getchar() != '\n');
    }

    // Retornamos (i) que son los validos
    return i;

}

/// Funcion para mostrar la matriz de palabras
void mostrarArregloPalabras(int dimC, int validosF, char arrPalabras[][dimC]) {

    // Bucle que se ejecuta segun la cantidad de filas
    for(int i = 0; i < validosF; i++) {

        printf("Palabra [%i] : %s\n", i, arrPalabras[i]);

    }

}

int main()
{
    // Definimos la cantidad de filas
    int dimF = 5;
    // Definimos la cantidad de columnas
    int dimC = 100;
    // Definimos la matiz de palabras con las dimensiones
    char arrPalabras[dimF][dimC];

    // Cargamos la matriz y devolvemos los validos
    int validos = cargarArrayStrings(dimC, dimF, arrPalabras);

    // Mostramos la matriz con los valores cargados
    mostrarArregloPalabras(dimC, validos, arrPalabras);


    return 0;
}
