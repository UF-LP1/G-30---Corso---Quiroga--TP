/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cFarmacia.h"

/**
 * cFarmacia implementation
 */


/**
 * @param Fecha
 * @param Abierto
 * @param Nombre
 * @param Perfumeria
 * @param Ortopedia
 * @param Limpio
 * @param Producto
 */
cFarmacia::cFarmacia(cTime _Fecha, bool _Abierto, string _Nombre, bool _Limpio, string _Producto) {
    this->Fecha = _Fecha;
    this->Abierto = _Abierto;
    this->Nombre = _Nombre;
    this->Limpio = _Limpio;
    this->Producto = _Producto;
}

/**
 * @return bool
 */
bool cFarmacia::AbrirFarmacia() {
    return false;
}

/**
 * @return bool
 */
bool cFarmacia::CerrarFarmacia() {
    return false;
}

/**
 * @return bool
 */
bool cFarmacia::getAbierto() {
    return this->Abierto;
}

/**
 * @param bool
 * @return void
 */
void cFarmacia::setAbierto(bool Abierto) {
    this->Abierto = Abierto;
    return;
}

/**
 * @param Producto
 * @return void
 */
void cFarmacia::SeleccionarProducto(string Producto) {
    return;
}

cFarmacia::~cFarmacia() {

}