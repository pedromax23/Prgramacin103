#include <stdio.h>
#include <stdlib.h>


/// TP 1 GUIA DE EJERCICIOS




int main()
{
    /// EJERCICIO 1
    /* Sumar dos números leídos desde el teclado (los ingresa el usuario) y mostrar el resultado
    por pantalla.*/

    /*
    int numero1;
    printf("Ingrese un numero entero: ");
    scanf("%i", numero1);

    int numero2;
    printf("Ingrese otro numero entero: ");
    scanf("%i", numero2);

    int suma = numero1 + numero2;

    printf("La suma de sus numeros es: %i", suma);
    */


    /// EJERCICIO 2
    /* Realizar el algoritmo necesario para que un profesor pueda ingresar las notas obtenidas
    por un estudiante en su tres exámenes, y luego calcular y mostrar el promedio obtenido
    por el estudiante. */

    /*
    float nota1;
    printf("Ingrese la primer nota: ");
    scanf("%f", &nota1);

    float nota2;
    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);

    float nota3;
    printf("Ingrese la tercer nota: ");
    scanf("%f", &nota3);

    float promedio = (nota1 + nota2 + nota3) / 3;

    printf("El promedio de las notas es: %.2f", promedio);
    */


    /// EJERCICIO 3
    /* Una tienda online ofrece un descuento del 15% sobre el total de la compra y un cliente
    desea saber cuánto deberá pagar finalmente por su compra. */

    /*
    int precio;
    printf("Ingrese el precio del producto: ");
    scanf("%d", &precio);

    float precioFinal = (float)precio - (((float)precio * 15) / 100);

    printf("El precio final del producto con el descuento del 15'%' es: %.2f", precioFinal);
    */


    /// EJERCICIO 4
    /* Un profesor desea saber qué porcentaje de hombres y qué porcentaje de mujeres hay en
    un grupo de estudiantes. */

    /*
    int mujeres;
    int hombres;

    int estudiantesH;
    printf("Ingrese el numero de estudiantes hombres: ");
    scanf("%d", &estudiantesH);

    int estudiantesM;
    printf("Ingrese el numero de estudiantes mujeres: ");
    scanf("%d", &estudiantesM);

    int totalEstudiantes = estudiantesH + estudiantesM;

    float porcentajeH = ((float)estudiantesH * 100) / totalEstudiantes;
    float porcentajeM = ((float)estudiantesM * 100) / totalEstudiantes;

    printf("Hay un \%%%.2f de hombres y \%%%.2f de mujeres", porcentajeH, porcentajeM);
    */

    /// EJERCICIO 5
    /* Desarrolle un algoritmo que resuelva y calcule el área de un círculo. Luego debe mostrar el
    resultado por pantalla. */

    /*
    float pi = 3.14;

    float diametro;
    printf("Ingrese el diametro del circulo: ");
    scanf("%f", &diametro);

    float radio = diametro/2;

    float area = pi * (radio * radio);


    printf("El area de un circulo con diametro %.2f es: %.2f", diametro, area);
    */

    /// EJERCICIO 6
    /* Escribir un algoritmo que permita que el usuario del sistema ingrese tres datos enteros y
    luego se muestren por pantalla en orden inverso. */

    /*
    int num1;
    int num2;
    int num3;
    printf("Ingrese el primer dato entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo dato entero: ");
    scanf("%d", &num2);
    printf("Ingrese el segundo dato entero: ");
    scanf("%d", &num3);

    printf("Los datos enteros mostrados en orden inverso son: %d %d %d", num3, num2, num1);
    */

    /// EJERCICIO 7
    /* Desarrolle un algoritmo que calcule el IVA de cualquier producto. */

    /*
    float precioProducto;
    printf("Ingrese el precio del producto para calcular su IVA: ");
    scanf("%f", &precioProducto);

    float ivaDelProducto = (21 * precioProducto) / 100;

    printf("El IVA del producto es: %f", ivaDelProducto);
    */

    /// EJERCICIO 8
    /* Escribir un algoritmo que calcule y realice un porcentaje de descuento al precio de un
    artículo. El usuario debe ingresar ambos datos por teclado. Mostrar por pantalla el nuevo
    precio con el descuento. */

    /*
    float precioProducto;
    float porcentajeDescuento;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precioProducto);

    printf("Ingrese el porcentaje de descuento para el producto: ");
    scanf("%f", &porcentajeDescuento);

    float precioConDescuento = precioProducto - ((porcentajeDescuento * precioProducto) / 100);

    printf("El producto con precio $%.2f tiene un descuento de \%%%.2f. Su valor final es de: $%.2f", precioProducto, porcentajeDescuento, precioConDescuento);
    */

    return 0;
}
