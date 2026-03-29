#include <stdio.h>
#include <stdlib.h>

/// Trabajo practico de Repaso de Funciones

/// Funciones
/* 1 - Monto parcial a pagar. Recibe la cantidad de productos y el precio */
int montoParcial(int cantidadProductos, int precioProducto);

/* 2 - Descuento a aplicar. Recibe el monto total a pagar y la cantidad de productos */
float descuentoAplicar(int montoTotal, int cantidad);

/* 3 - Monto final a pagar. Recibe el monto total y el monto a descontar */
float montoFinalAPagar(int montoToal, float montoDescontar);

/* 4 - Detalle de compra. Recibe cantidad de productos, precio por producto, total parcial, descuento aplicado, monto a pagar*/
void detalleCompra(int cantidadProductos, int precioProducto, int totalParcial, float descuentoAplicado, float montoAPagar);

/* 5 - Realizar venta. Recibe cantidad de productos comprados por el cliente, precio por unidad. */
int realizarVenta(int cantidadProductos, int precioProducto);


int main()
{

    int cantidadProductos;
    int precioPorProducto;
    printf("Ingrese la cantidad de productos a vender: ");
    scanf("%i", &cantidadProductos);
    printf("Ingrese el precio por producto: ");
    scanf("%i", &precioPorProducto);

    realizarVenta(cantidadProductos, precioPorProducto);

    return 0;
}


/* 1 - Monto parcial a pagar. Recibe la cantidad de productos y el precio */
int montoParcial(int cantidadProductos, int precioProducto) {

    int monto = cantidadProductos * precioProducto;


    return monto;

}

/* 2 - Descuento a aplicar. Recibe el monto total a pagar y la cantidad de productos */
float descuentoAplicar(int montoTotal, int cantidad) {

    float descuento;

    if(montoTotal > 50000 && cantidad > 10) {

        descuento = montoTotal * 0.15;

    } else if (montoTotal > 100000 && cantidad >= 20) {

        descuento = montoTotal * 0.2;

    } else {
        descuento = 0;
    }

    return descuento;

}


/* 3 - Monto final a pagar. Recibe el monto total y el monto a descontar */
float montoFinalAPagar(int montoToal, float montoDescontar) {

    float montoFinal = (float)montoToal - montoDescontar;

    return montoFinal;

}

/* 4 - Detalle de compra. Recibe cantidad de productos, precio por producto, total parcial, descuento aplicado, monto a pagar*/
void detalleCompra(int cantidadProductos, int precioProducto, int totalParcial, float descuentoAplicado, float montoAPagar) {

    printf("Cantidad de productos: %i\nPrecio por producto: %i\nTotal parcial: %i\nDescuento aplicado: %.2f\n Monto a pagar: %.2f", cantidadProductos, precioProducto, totalParcial, descuentoAplicado, montoAPagar);

}

/* 5 - Realizar venta. Recibe cantidad de productos comprados por el cliente, precio por unidad. */
int realizarVenta(int cantidadProductos, int precioProducto) {

    int monto = montoParcial(cantidadProductos, precioProducto);

    float descuento = descuentoAplicar(monto, cantidadProductos);

    float montoFinal = montoFinalAPagar(monto, descuento);

    detalleCompra(cantidadProductos, precioProducto, monto, descuento, montoFinal);

}
