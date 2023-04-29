/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cGolosinas.h"

/**
 * cGolosinas implementation
 */


/**
 * @param Nombre
 * @param Precio
 * @param Stock
 * @param Marca
 * @param Area
 * @param ID
 * @param FechaVencimiento
 */
cGolosinas::cGolosinas(string Nombre, float Precio, int Stock, string Marca, string Area, const int ID, cTime FechaVencimiento) {

}

/**
 * @return bool
 */
bool cGolosinas::VerificarStock() {
    return false;
}

/**
 * @return float
 */
float cGolosinas::getPrecio() {
    return this->Precio;
}

/**
 * @param float
 * @return void
 */
void cGolosinas::setPrecio(float Precio) {
    this->Precio = Precio;
    return;
}

cGolosinas::~cGolosinas() {

}