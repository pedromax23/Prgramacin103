#include <stdio.h>
#include <stdlib.h>

/// Trabajo Práctico N° 5: Uso de for

/* Trabajo Práctico N° 5: Uso de for
1)
2)
3)
4)
5)
6)
7)
8)  */

int main()
{

    /// EJERCICIO 1
    /* Realizar un programa que imprima en pantalla los números del 1 al 30 */

    /*
    int i = 0;
    for (i = 0 ; i < 30 ; i++) {

        printf("Numero: %i\n", i+1);

    }
    */

    /// EJERCICIO 2
    /* Escribir un programa que lea 10 números enteros y luego muestre cuántos valores
    ingresados fueron múltiplos de 3 y cuántos de 5. Debemos tener en cuenta que hay
    números que son múltiplos de 3 y de 5 a la vez */

    /*
    int multiplo3 = 0;
    int multiplo5 = 0;

    int i = 0;
    for (i = 0; i < 10; i++) {

        int numero = 0;
        printf("Ingrese un numero entero: ");
        scanf("%i", &numero);

        if (numero % 3 == 0) {
            multiplo3++;
            if (numero % 5 == 0) {
                multiplo5++;
            }
        } else if (numero % 5 == 0) {
            multiplo5++;
        }
    }

    printf("Hay %i multiplos de 3\nHay %i multiplos de 5", multiplo3, multiplo5);
    */

    /// EJERCICIO 3
    /* Leer 10 números, obtener su cubo, y mostrar los resultados por pantalla */

    /*
    int i = 0;
    for (i = 0; i < 10; i++) {

        float numero = 0;
        printf("Ingrese un numero para mostrale su cubo: ");
        scanf("%f", &numero);

        float cubo = numero * numero * numero;
        printf("El cubo de %.2f es: %.2f\n", numero, cubo);

    }
    */

    /// EJERCICIO 4
    /* Leer 10 números e imprimir solamente los números positivos */

    /*
    int i = 0;
    for (i = 0; i < 10; i++) {

        float numero = 0;
        printf("Ingrese un nuemro: ");
        scanf("%f", &numero);

        if(numero >= 0) {
            printf("El numero %.2f es positivo\n", numero);
        }
    }
    */

    /// EJERCICIO 5
    /* Desarrollar un algoritmo que permita la carga de 7 notas por teclado y nos muestre
    posteriormente su promedio */

    /*
    float sumaNotas = 0;

    int i = 0;
    for(i = 0; i < 7; i++) {

        float nota = 0;
        printf("Ingrese la nota %i: ", i+1);
        scanf("%f", &nota);

        sumaNotas += nota;

    }

    float promedio = sumaNotas / 7;

    printf("El promedio del alumno es: %.2f", promedio);
    */

    /// EJERCICIO 6
    /* Escribir un programa que lea 8 notas de alumnos y nos informe cuántos aprobaron (tienen
    notas mayores o iguales a 6) y cuántos desaprobaron (notas menores a 6) */

    /*
    int aprobados = 0;
    int desaprobados = 0;

    int i = 0;
    for(i == 0; i < 8; i++) {

        float nota = 0;
        printf("Ingrese una nota: ");
        scanf("%f", &nota);

        if (nota >= 6) {
            aprobados++;
        } else {
            desaprobados++;
        }
    }

    printf("Aprobaron %i\nDesaprobaron %i", aprobados, desaprobados);
    */

    /// EJERCICIO 7
    /* Leer 15 números negativos, convertirlos a positivos, e imprimir dichos números */

    /*
    int i = 0;
    for(i == 0; i < 15; i++) {

        float numero;
        printf("Ingrese un numero negativo: ");
        scanf("%f", &numero);

        float positivo = numero * -1;

        printf("El numero negativo: %.2f\nConvertido a positivo es: %.2f\n", numero, positivo);

    }
    */

    /// EJERCICIO 8
    /* Calcular e imprimir la tabla de multiplicar de un número a elección del usuario del sistema.
    Imprimir el multiplicando (el numero elegido), el multiplicador (x1, x2, x3, etc) y el
    producto (resultado) */

    /*
    int tabla = 0;
    printf("Ingrese la tabla de que numero quiere: ");
    scanf("%i", &tabla);

    printf("Tabla del %i\n", tabla);
    int i = 1;
    for(i == 0; i <= 10; i++) {

        printf("%i * %i = %i\n", tabla, i, (tabla*i));

    }
    */

    return 0;

}
