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
cFarmacia::cFarmacia(cTime Fecha, bool Abierto, string Nombre, enum Perfumeria, enum Ortopedia, bool Limpio, string Producto) {

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