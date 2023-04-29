/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cOrtopedia.h"

/**
 * cOrtopedia implementation
 */


/**
 * @param Nombre
 * @param Precio
 * @param Stock
 * @param Marca
 * @param Area
 * @param ID const int
 * @param CantUnidades
 * @param Color
 */
cOrtopedia::cOrtopedia(string Nombre, float Precio, int Stock, string Marca, string Area, void ID const int, int CantUnidades, string Color) {

}

/**
 * @return bool
 */
bool cOrtopedia::VerificarStock() {
    return false;
}

/**
 * @return float
 */
float cOrtopedia::getPrecio() {
    return this->Precio;
}

/**
 * @param float
 * @return void
 */
void cOrtopedia::setPrecio(float Precio) {
    this->Precio = Precio;
    return;
}

cOrtopedia::~cOrtopedia() {

}