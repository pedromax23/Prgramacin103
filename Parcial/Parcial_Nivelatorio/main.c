#include <stdio.h>
#include <stdlib.h>


/// FUNCIONES

/* Consultar saldo */
int saldoActual(saldo) {
    return saldo;
}

/* Ingresar dinero */
int depositarSaldo(saldoActual, monto) {

    if(monto > 0) {
        saldoActual += monto;
    } else {
        return 0;
    }

    return saldoActual;
}

/* Retirar dinero con recargo */
int retirarSaldo(saldoActual, monto) {

    int montoMasRegargo = monto + (monto*0.05);

    if(monto > 0) {
        saldoActual -= montoMasRegargo;
    } else {
        return 0;
    }

    return saldoActual;
}

/* Transferir dinero */
int transferirDinero(saldoActual, monto) {

    if(monto > 0 && monto < saldoActual) {
        saldoActual -= monto;
    } else {
        return 0;
    }

    return saldoActual;
}

/* Calcular rendimientos */
int calcularRendimientos(saldoActual, meses) {

    int rendimientos;
    float porcentajeRendimiento = (float)meses * 0.2;

    if(meses > 0) {

        rendimientos = (float)saldoActual + ((float)saldoActual * porcentajeRendimiento);

    } else {
        return 0;
    }


    return (float)rendimientos;

}

int main()
{

    int saldo = 15400;


    int stop = 1;
    while(stop != 0) {

        printf("\n--MENU--\n\n1 - Consultar saldo\n2 - Depositar dinero\n3 - Retirar dinero\n4 - Transferir dinero\n5 - Calcular rendimientos\n6 - Salir\n");

        int opcion;
        printf("\nIngrese una opcion: \n");
        scanf("%d", &opcion);

        switch(opcion) {

        case 1: /* Consultar Saldo */

            printf("\nConsultando saldo...\n");

            int consultarSaldo = saldoActual(saldo);
            printf("El saldo actual de la cuenta es: %i\n", consultarSaldo);

            break;

        case 2: /* Depositar Dinero */

            printf("\nDepositar dinero...\n");

            int monto;
            printf("Ingrese el monto a depositar: ");
            scanf("%i", &monto);

            int depositoSaldo = depositarSaldo(saldo, monto);

            if(depositoSaldo != 0) {
                saldo = depositoSaldo;
                printf("\nEl saldo actual ahora es: %i\n", saldo);
            } else {
                printf("\nEl saldo a ingresar debe ser mayor a 0\n");
            }

            break;

        case 3: /* Retirar dinero */

            printf("\nRetirar dinero...\n");

            int montoARetirar;
            printf("Ingrese el monto a retirar: ");
            scanf("%i", &montoARetirar);

            int retirar = retirarSaldo(saldo, montoARetirar);

            if(retirar != 0) {
                saldo = retirar;
                printf("\nEl saldo ahora es: %i y se retiraron: %i + el recargo del %%5\n", saldo, montoARetirar);
            } else {
                printf("\nDebe ingresar un monto mayor a 0\n");
            }

            break;

        case 4: /* Transferir dinero */

            printf("\nTransferir dinero...\n");

            int montoATransferir;
            printf("Ingrese el monto a transferir: ");
            scanf("%i", &montoATransferir);

            int transferencia = transferirDinero(saldo, montoATransferir);

            if(transferencia != 0) {
                saldo = transferencia;
                printf("\nEl saldo ahora es: %i y se transfirieron: %i\n", saldo, montoATransferir);
            } else {
                printf("\nDebe ingresar un monto mayor a 0 y menor al saldo\n");
            }


            break;

        case 5: /* Calcular rendimientos mensuales */

            printf("\nCalcular rendimientos mensuales\n");

            int meses;
            printf("Ingresar la cantidad de meses para calcular el rendimiento: ");
            scanf("%i", &meses);

            int rendimientoMensual = calcularRendimientos(saldo, meses);

            if(rendimientoMensual != 0) {
                printf("\nEl saldo mas el rendimiento de %i meses seria: %i\n", meses, rendimientoMensual);
            } else {
                printf("\nIngrese una cantidad de meses mayor a 0\n");
            }

            break;

        case 6: /* Salir */
            stop = 0;
            printf("Saliendo...");
            break;

        default:
            printf("Ingrese una opción correcta");
        };

    }

    return 0;
}
