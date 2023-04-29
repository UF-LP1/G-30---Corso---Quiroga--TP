/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cCarrito.h"

/**
 * cCarrito implementation
 */


/**
 * @param TipoProducto
 * @param Cantidad
 */
cCarrito::cCarrito(TipoProducto tipoProducto, int Cantidad) {
    this->Cantdad = 5;
    this->productos = New Productos[5];

}

/**
 * @return void
 */
void cCarrito::AgregarProducto() {
    return;
}

/**
 * @return *cProducto
 */
//cProducto* cCarrito::QuitarProducto() {
//    return null;
//}

/**
 * @return void
 */
void cCarrito::EliminarProducto() {
    return;
}

/**
 * @return void
 */
float cCarrito::VerTotal() {
    int i;
    float ToR = 0;
    for (i = 0; i < Cantidad; i++) {
        ToR = ToR + this->_listaProductos[i]->getprecio(); //RECORRO LA LISTA Y LE AGREGO LOS PRECIOS A LOS PRODUCTOS
    }
    return ToR;
}

/**
 * @return int
 */
int cCarrito::BuscarProducto() {
    return 0;
}

/**
 * @return void
 */
void cCarrito::getTipoProducto() {
    return;
}

/**
 * @return void
 */
void cCarrito::setTipoProducto() {
    return;
}

cCarrito::~cCarrito() {

}