#include <stdio.h>
#include <stdlib.h>

/// TP 3 Estructuras Selectivas Compuestas

int main()
{

    /// EJERCICIO 1
    /* Desarrolle un algoritmo que lea 2 números enteros; si son iguales que los multiplique, si el
    primero es mayor que el segundo que los reste y si no que los sume */

    /*
    int num1 = 0;
    int num2 = 0;
    printf("Ingrese un numero entero: ");
    scanf("%i", &num1);
    printf("Ingrese otro numero entero: ");
    scanf("%i", &num2);


    if ( num1 == num2 ) {
        int multiplicaion = num1 * num2;
        printf("La multiplicacion de %i * %i es: %i", num1, num2, multiplicaion);
    } else if ( num1 > num2 ) {
        int resta = num1 - num2;
        printf("La resta de %i - %i es: %i", num1, num2, resta);
    } else {
        int suma = num1 + num2;
        printf("La suma de %i + %i es: %i", num1, num2, suma);
    }
    */

    /// EJERCICIO 2
    /* Determinar si un alumno desaprueba, aprueba o promociona una materia, sabiendo que
    desaprobará si su promedio de tres calificaciones (valores enteros de 1 a 10) es menor a 6. Si es
    igual o mayor a 6 pero menor a 8 aprueba la materia. Y si es igual o mayor a 8 promociona la
    materia. */

    /*
    int nota1;
    int nota2;
    int nota3;
    printf("Ingrese la nota 1: ");
    scanf("%i", &nota1);
    printf("Ingrese la nota 2: ");
    scanf("%i", &nota2);
    printf("Ingrese la nota 3: ");
    scanf("%i", &nota3);

    float promedio = ((float)nota1 + (float)nota2 + (float)nota3) / 3;

    printf("El promedio del alumno es: %.2f \n", promedio);
    if ( promedio < 6 ) {
        printf("El alumno desaprobo");
    } else if ( promedio >= 6 && promedio < 8 ) {
        printf("El alumno aprobo");
    } else {
        printf("El alumno promociono");
    }
    */

    /// EJERCICIO 3
    /* Desarrolle un algoritmo en el que se almacenen 3 números distintos leídos por teclado y nos
    indique cuál de los tres es el mayor. */

    /*
    int num1;
    int num2;
    int num3;
    printf("Ingrese el numero 1: ");
    scanf("%i", &num1);
    printf("Ingrese el numero 2: ");
    scanf("%i", &num2);
    printf("Ingrese el numero 3: ");
    scanf("%i", &num3);

    if ( num1 > num2 && num1 > num3 ) {
        printf("El numero mas grande es: %i", num1);
    } else if ( num2 > num3 ) {
        printf("El numero mas grande es: %i", num2);
    } else {
        printf("El numero mas grande es: %i", num3);
    }
    */


    /// EJERCICIO 4
    /* Desarrolle un algoritmo que lea 1 número enteros. Si es par y mayor a 10 debe imprimir por
    pantalla un mensaje que muestre que se cumplen esas condiciones. Si el numero esta entre los
    valores 5 y 10, o si es impar, debe imprimir por pantalla un mensaje que muestre que se cumplen
    esas condiciones. Si es menor a 5 debe imprimir por pantalla un mensaje que muestre que se
    cumple esa condición */

    /*
    int num = 0;
    printf("Ingrese un numero: ");
    scanf("%i", &num);


    if ( (num % 2) == 0 && num > 10 ) {
        printf("El numero %i es par y mayor a 10", num);
    } else if ( num > 5 && num < 10 ) {
        printf("El numero %i esta entre 5 y 10", num);
    } else if ( num < 5 ){
        printf("El numero %i es menor a 5", num);
    } else {
        printf("El numero no cumple ninguna de las condiciones");
    }
    */

    /// EJERCICIO 5 Switch
    /* Desarrolle un algoritmo que le pida al usuario 2 números enteros y luego le muestre por pantalla un menú
    de opciones del 1 al 4 simulando una calculadora, para que pueda elegir si quiere sumar (opción 1), restar
    (opción 2), multiplicar (opción 3) o dividir (opción 4) esos dos números enteros */

    /*
    int num1 = 0;
    int num2 = 0;
    printf("Ingrese un numero entero: ");
    scanf("%i", &num1);
    printf("Ingrese otro numero entero: ");
    scanf("%i", &num2);

    int opcion = 0;
    printf("1 - Sumar \n2 - Restar \n3 - Multiplicar \n4 - Dividir \n");
    printf("Ingrese una opcion: \n");
    scanf("%i", &opcion);

    switch (opcion) {
    case 1:
        printf("La suma de %i + %i es: %i", num1, num2, (num1 + num2));
        break;
    case 2:
        printf("La resta de %i - %i es: %i", num1, num2, (num1 - num2));
        break;
    case 3:
        printf("La multiplicacion de %i * %i es: %i", num1, num2, (num1 * num2));
        break;
    case 4:
        printf("La division de %i / %i es: %.2f", num1, num2, ((float)num1 / (float)num2));
        break;
    }
    */

    return 0;
}
