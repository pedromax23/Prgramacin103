#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/// Funciones con variables simples

int main()
{

    /// EJERCICIO 1
    /* Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100. */
    /*
    int resultado = random();
    printf("El numero random es: %d", resultado);
    */

    /// EJERCICIO 2
    /* Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor. */
    /*
    int mayor = num_mayor(1, 3, 1);
    printf("El numero mas alto es: %d", mayor);
    */

    /// EJERCICIO 3
    /* Diseñe una función que reciba un número entero N y realice la suma de los números enteros
    positivos menores que N y lo retorne. N es un dato ingresado por el usuario en el main. */
    /*
    int entero = 0;
    printf("Ingrese un numero entero: ");
    scanf("%d", &entero);

    int suma_enteros = suma(entero);

    printf("La suma de los numeros enteros menores que %d es: %d", entero, suma_enteros);
    */

    /// EJERCICIO 4
    /* Desarrollar una función que muestre la tabla de multiplicar de un número entero recibido por
    parámetro. */
    /*
    int num = 0;
    printf("Ingrese un numero para mostrarle su tabla de multiplicar: ");
    scanf("%i", &num);

    int tablaDeMultiplicar = tabla(num);
    */

    /// EJERCICIO 5
    /* Realice una pequeña calculadora, utilizando funciones (una función de suma, una de multiplicación, una de resta, una de división */
    /*
    int numero1, numero2;
    printf("Ingrese dos numeros: \n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    int stop = 1;
    while(stop != 0) {
        int opcion;
        printf("1 - Suma\n2 - Resta\n3 - Multiplicacion\n4 - Division\n0 - Cerrar calculadora\n");
        scanf("%d", &opcion);

        int resultado;

        if(opcion == 1) {
            resultado = sumaNums(numero1, numero2);
        } else if(opcion == 2) {
            resultado = resta(numero1, numero2);
        } else if(opcion == 3) {
            resultado = multiplicacion(numero1, numero2);
        } else if(opcion == 4) {
            resultado = division(numero1, numero2);
        } else if(opcion == 0) {
            stop = 0;
        } else {
            printf("Ingrese una opcion disponible");
        }

        printf("El resultado es: %d\n", resultado);
    }
    */

    /// EJERCICIO 6
    /* Realizar una función que reciba un número positivo entero, cambie su signo a negativo y lo retorne. */
    /*
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    int resultado = invertir(num);
    printf("El inverso de %d es: %d", num, resultado);
    */


    return 0;
}


/// EJERCICIO 1
int random() {
    srand(time(NULL));
    int num_random = rand()%101;
    return num_random;
}

/// EJERCICIO 2
int num_mayor(int num1, int num2, int num3) {

    if(num1 > num2 && num1 > num3) {
        return num1;
    } else if(num2 > num3) {
        return num2;
    } else {
        return num3;
    }

}

/// EJERCICIO 3
int suma(int entero){

    int sumaNumeros = 0;

    int i = 0;
    for (i == 0; i < entero; i++) {
        sumaNumeros += i;
    }

    return sumaNumeros;

}

/// EJERCICIO 4
int tabla(int num) {

    printf("Tabla del %i\n", num);
    int i = 1;
    for(i == 0; i <= 10; i++) {

        printf("%i * %i = %i\n", num, i, (num*i));

    }

}

/// EJERCICIO 5
int sumaNums(int num1, int num2) {
    return num1 + num2;
}

int resta(num1, num2) {
    return num1 - num2;
}

int multiplicacion(int num1, int num2) {
    return num1 * num2;
}

int division(num1, num2) {
    if(num2 == 0) {
        return printf("No se puede dividir por 0");
    }

    return num1 / num2;
}

int invertir(int num) {
    return num * -1;
}
