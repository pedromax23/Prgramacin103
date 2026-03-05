#include <stdio.h>
#include <stdlib.h>

/// TP 2 ESTRUCTURAS SELECTIVAS SIMPLES

int main()
{

    /// EJERCICIO 1
    /* Realizar un algoritmo que permita ingresar un número e informe “Número mayor a cero” o
    “Número menor o igual a cero” según corresponda. */

    /*
    int num = 0;
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    if ( num > 0 ) {

        printf("El numero %i es mayor a 0", num);

    } else {

        printf("El numero %i es menor o igual a 0", num);

    }
    */

    /// EJERCICIO 2
    /* Desarrolle un algoritmo que permita leer dos números desde el teclado (deben ser diferentes)
    y nos muestre por pantalla cuál de los dos es más grande. */

    /*
    int num1 = 0;
    int num2 = 0;

    printf("Ingrese un numero: ");
    scanf("%i", &num1);

    printf("Ingrese otro numero: ");
    scanf("%i", &num2);

    if ( num1 > num2 ) {

        printf("El numero %i es mas grande que el numero %i", num1, num2);

    } else if ( num1 == num2 ) {

        printf("Ingrese dos numeros diferentes");

    } else {

        printf("El numero %i es mas grande que el numero %i", num2, num1);

    }
    */

    /// EJERCICIO 3
    /* Desarrolle un algoritmo que nos permita saber si una persona es mayor de edad (18 años) */

    /*
    int edad = 0;
    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    if ( edad >= 18 ) {
        printf("La persona es mayor");
    } else {
        printf("La persona es menor");
    }
    */

    /// EJERCICIO 4
    /* Escribir un algoritmo que nos diga si un número ingresado por teclado es par o impar */

    /*
    int num = 0;
    printf("Ingrese un nuemro: ");
    scanf("%d", &num);

    if ( (num % 2) == 0 ) {
        printf("El numero %d es par", num);
    } else {
        printf("El numero %d es impar", num);
    }
    */

    /// EJERCICIO 5
    /* En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $5000.
    Calcular y mostrar el total a pagar */

    /*
    int valor = 0;
    printf("Ingrese el valor de la compra: ");
    scanf("%i", &valor);


    float total = 0;
    if ( valor > 5000 ) {

        total = valor - (valor * 0.2);
        printf("El valor a pagar con el 20\%% de descuento es: %.2f", total);

    } else {
        printf("El valor a pagar sin descuento es: %i", valor);
    }
    */

    /// EJERCICIO 6
    /* Desarrolle un algoritmo que lea dos números enteros y los imprima en forma ascendente */

    /*
    int num1 = 0;
    int num2 = 0;
    printf("Ingrese un numero: ");
    scanf("%i", &num1);
    printf("Ingrese otro numero: ");
    scanf("%i", &num2);

    if ( num1 > num2 ) {
        printf("%i %i", num2, num1);
    } else if ( num1 == num2 ) {
        printf("%i %i", num1, num2);
    } else {
        printf("%i %i", num1, num2);
    }
    */

    /// EJERCICIO 7
    /* Hacer un algoritmo que calcule el total a pagar por la compra de camisas. Si se compran tres
    camisas o más se aplica un descuento del 25% sobre el total de la compra y si son menos de
    tres camisas un descuento del 10% */

    /*
    int valorCamisa = 1000;
    int cantidadCamisas = 0;
    printf("Valor de las camisas: %i \n", valorCamisa);
    printf("Ingrese la cantidad de camisas a comprar: ");
    scanf("%i", &cantidadCamisas);
    if ( cantidadCamisas < 0 ) {
        printf("La cantidad de camisas tiene que ser mayor a 0");
        return 0;
    }

    float precioFinal = (float)valorCamisa * (float)cantidadCamisas;

    if ( cantidadCamisas >= 3 ) {
        precioFinal = precioFinal - (precioFinal * 0.25);
        printf("El precio final de las camisas con el descuento del \%%25 es: %.2f", precioFinal);
    } else {
        precioFinal = precioFinal - (precioFinal * 0.1);
        printf("El precio final de las camisas con el descuento del \%%10 es: %.2f", precioFinal);
    }
    */


    return 0;
}
