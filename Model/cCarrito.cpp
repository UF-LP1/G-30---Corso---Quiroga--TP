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
cCarrito::cCarrito() {
    this->contProducto = 0;
    this->_listaProductos = new cProducto*[this->MAX]();

}

/**
 * @return void
 */
void cCarrito::AgregarProducto() {
    
    cProducto** array = new cProducto * [this->MAX](); //copio la lista
    for (int i = 0; i < this->contProducto; i++) {  // recorro la lista copiada
        if (_listaProductos[i]==NULL)


    }
    
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
bool cCarrito::EliminarProducto(int ID) {
    bool ToR = false;
    cProducto** array = new cProducto * [this->MAX](); //copio la lista
    for (int i = 0; i < this->contProducto; i++) {  // recorro la lista copiada
        if (_listaProductos[i]->getID() == ID) //veo cuando coinside el ID con el ID que busco
            ToR = true; //Si coinsiden, no lo copio en la lista auxiliar, simplemente cambio la variable ToR a true
        else
            array[i] = _listaProductos[i]; //lo copio en una lista auxiliar
    }
    if (ToR)
        this->_listaProductos = array;  // Si ToR = true, la listaProductos es ahora la lista auxiliar modificada (excluye el elemento que encontró con el ID, y si nunca lo encontró, la lista sigue igual)

    return ToR;
}

/**
 * @return void
 */
float cCarrito::VerTotal() {
    int i;
    float ToR = 0;
    for (i = 0; i < contProducto; i++) {
        ToR = ToR + this->_listaProductos[i]->getprecio(); //RECORRO LA LISTA Y LE AGREGO LOS PRECIOS A LOS PRODUCTOS
    }
    return ToR;
}

/**
 * @return int
 */
int cCarrito::BuscarProducto(int ID) {
    int ToR = -1;
    for (int i = 0; i < this->contProducto; i++) {  // recorro la lista 
        if (_listaProductos[i]->getID() == ID) //veo cuando coinside el ID con el ID que busco
            ToR = i; //Si coinsiden, ToR pasa a ser i, que corresponde a la posicion del elemento buscado
    }
    return ToR; //se retorna Tor que puede ser = i si lo encontró, o = -1 si nunca lo encontró
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