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
    for (int i = 0; i < MAX; i++) {
        _listaProductos[i] = NULL;
    }

}

/**
 * @return void
 */
void cCarrito::AgregarProducto(cProducto*producto) {
    if (contProducto < MAX) {
        this->_listaProductos[contProducto] = producto; //inserto el producto en la lista
        contProducto++;
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

/*bool cCarrito::EliminarProducto(int ID) {
    bool ToR = false;
    cProducto** array = new cProducto * [this->MAX](); //copio la lista
    for (int i = 0; i < this->contProducto; i++) {  // recorro la lista copiada
        if (_listaProductos[i]->getID() == ID) //veo cuando coinside el ID con el ID que busco
            ToR = true; //Si coinsiden, no lo copio en la lista auxiliar, simplemente cambio la variable ToR a true
        else
            array[i] = _listaProductos[i]; //lo copio en una lista auxiliar
    }
    if (ToR) {
        this->_listaProductos = array;  // Si ToR = true, la listaProductos es ahora la lista auxiliar modificada (excluye el elemento que encontró con el ID, y si nunca lo encontró, la lista sigue igual)
        contProducto--;
    }
    return ToR;
}*/

bool cCarrito::EliminarProducto(int ID) {
    bool ToR = false;
    int i = 0;
    while (i < contProducto && !ToR) {
        if (_listaProductos[i]->getID() == ID) {
            ToR = true;
        }
        else
            i++;
    }
    if (ToR) {
        
        i++;
        while (i < contProducto) {
            _listaProductos[i - 1] = _listaProductos[i]; //lo corro un lugar a la izquierda
            i++;

        }
        _listaProductos[contProducto-1] = NULL; //la ultima posición donde estaba el elemento eliminado lo declaro NULL
        contProducto--;
    }
    

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
cProducto* cCarrito::BuscarProducto(int ID) {
    
    cProducto* ToR = NULL;

    for (int i = 0; i < this->contProducto; i++) {  // recorro la lista 
        if (_listaProductos[i]->getID() == ID) //veo cuando coinside el ID con el ID que busco
            ToR = _listaProductos[i]; //Si coinsiden, ToR pasa el producto, que corresponde a la posicion del elemento buscado
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