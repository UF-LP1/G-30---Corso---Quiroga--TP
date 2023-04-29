/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cPerfumeria.h"

/**
 * cPerfumeria implementation
 */


/**
 * @param Nombre
 * @param Precio
 * @param Stock
 * @param Marca
 * @param Area
 * @param ID
 * @param CantLitros
 */
cPerfumeria::cPerfumeria(string Nombre, float Precio, int Stock, string Marca, string Area, const int ID, float CantLitros) {

}

/**
 * @return bool
 */
bool cPerfumeria::VerificarStock() {
    return false;
}

/**
 * @return float
 */
float cPerfumeria::getPrecio() {
    return this->Precio;
}

/**
 * @param float
 * @return void
 */
void cPerfumeria::setPrecio(float Precio) {
    this->Precio = Precio;
    return;
}

cPerfumeria::~cPerfumeria() {

}