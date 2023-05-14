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
cGolosinas::cGolosinas(string _Nombre, float _Precio, int _Stock, string _Marca, string _Area, const int ID, cTime _FechaVencimiento) {
    this->Nombre = _Nombre;
    this->Precio = _Precio;
    this->Stock = _Stock;
    this->Marca = _Marca;
    this->Area = _Area;
    this->FechaVencimiento = _FechaVencimiento;
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