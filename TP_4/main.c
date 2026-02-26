#include <stdio.h>
#include <stdlib.h>

/// TP 4 USO DE WHILE y DO-WHILE

/*
6)
7)  */

int main()
{

    /// WHILE

    /// EJERCICIO 1
    /* Desarrolle un algoritmo que permita visualizar los números del 1 al 10 */

    /*
    int i = 1;

    while (i < 11) {
        printf("Numero: %i\n", i);
        i++;
    }
    */

    /// EJERCICIO 2
    /* Desarrolle un algoritmo que permita visualizar los números impares entre el 1 y el 20 */

    /*
    int i = 2;

    while (i < 20) {

        if (i % 2 != 0) {
            printf("Numero par: %i\n", i);
        }

        i++;
    }
    */

    /// EJERCICIO 3
    /*  Desarrolle un algoritmo que permita visualizar el cuadrado de los números entre el 1 y el
    10 */

    /*
    int i = 2;

    while (i < 10) {

        printf("El cuadrado de el numero: %i es %i\n", i, i*i);

        i++;
    }
    */

    /// EJERCICIO 4
    /* Realizar un algoritmo que permita a un profesor cargar por teclado la cantidad de notas
    que quiera. Al finalizar, debe mostrarse el promedio de las mismas */

    /*
    int cantidad = 0;
    printf("Ingrese la cantidad de notas que quiere ingresar: ");
    scanf("%d", &cantidad);

    int sumaNotas = 0;

    int i = 1;
    while (i < cantidad+1) {

        int nota = 0;
        printf("Ingrese la nota %i: ", i);
        scanf("%i", &nota);

        sumaNotas = sumaNotas + nota;

        i++;
    }

    float promedio = (float)sumaNotas / cantidad;

    printf("%.2f", promedio);
    */

    /// DO-WHILE

    /// EJERCICIO 5
    /* Realizar un programa que permita ingresar el peso (en kilogramos) de piezas. El proceso termina
    cuando ingresamos el valor 0. Al finalizar, se debe informar:
    a) La cantidad total de piezas procesadas.
    b) Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.
    c) Cuántas tienen más de 10.2 Kg.
    d) Cuántas tienen menos de 9.8 Kg. */


    /*
    char seguir;
    int i = 1;

    int entre = 0;
    int mas = 0;
    int menos = 0;

    do {

        float peso;
        printf("Peso de la pieza numero %i: ", i);
        scanf("%f", &peso);

        if (peso >= 9.8 && peso <= 10.2) {
            entre++;
        } else if (peso > 10.2) {
            mas++;
        } else {
            menos++;
        }

        printf("Si desea ingresar otra pieza ingrese 's' de lo contrario ingrese 'n': ");
        scanf(" %c", &seguir);

        i++;

    } while (seguir != 'n');

    printf("Hay %i piezas entre 9.8kg y 10.2kg\nHay %i piezas con mas de 10.2kg\nHay %i piezas con menos de 9.8kg", entre, mas, menos);
    */

    /// EJERCICIO 6

    /* Realizar un programa que acumule (sume) valores positivos o negativos ingresados por teclado. El
    proceso termina cuando ingresamos el valor 0. Al finalizar, imprimir el valor acumulado */

    /*
    float acumulacion = 0;

    int cierreWhile = 1;

    do {

        float numero = 0;
        printf("Ingrese un numero para sumarlo: ");
        scanf("%f", &numero);

        acumulacion = acumulacion + numero;

        printf("Si desea terminar y ver la suma ingrese 0: ");
        scanf("%i", &cierreWhile);

    } while (cierreWhile != 0);

    printf("La suma total de todos los numeros es %.2f", acumulacion);
    */

    /// EJERCICIO 7
    /* En un banco se procesan datos de las cuentas corrientes de sus clientes. El algoritmo debe permitir
    que el usuario del sistema ingrese todas las cuentas que desee, para lo cual primero se ingresara el
    número de cuenta y el saldo actual de cada cuenta, y luego se le preguntara al usuario del sistema
    si desea o no seguir ingresando cuentas. El ingreso de datos debe finalizar cuando el usuario del
    sistema presione la letra ‘n’.
    El algoritmo debe informar:
    a) De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que el
    estado de cuenta es:
    • ‘Acreedor’ si el saldo es > 0.
    • ‘Deudor’ si el saldo es < 0.
    • ‘Nulo’ si el saldo es = 0
    b) La suma total de todos los saldos acreedores */

    /*
    int numeroCuenta;
    int saldoCuenta;
    int saldoAcredores = 0;

    char finWhile;
    do {

        printf("Ingrese el numero de cuenta: ");
        scanf("%i", &numeroCuenta);
        printf("Ingrese el saldo de la cuenta: ");
        scanf("%i", &saldoCuenta);

        if (saldoCuenta > 0) {
            printf("Número de cuenta: %i, Estado: Acreedor\n", numeroCuenta);
            saldoAcredores += saldoCuenta;
        } else if (saldoCuenta < 0) {
            printf("Número de cuenta: %i, Estado: Deudor\n", numeroCuenta);
        } else {
            printf("Número de cuenta: %i, Estado: Nulo\n", numeroCuenta);
        }

        printf("Ingrese la letra 'n' si desea terminar: ");
        scanf(" %c", &finWhile);

    } while (finWhile !='n');

    printf("La suma de el saldo de los acredores es: %i", saldoAcredores);
    */

    return 0;
}
