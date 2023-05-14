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
cPerfumeria::cPerfumeria(string _Nombre, float _Precio, int _Stock, string _Marca, string _Area, const int ID, float _CantLitros) {
    this->Nombre = _Nombre;
    this->Precio = _Precio;
    this->Stock = _Stock;
    this->Marca = _Marca;
    this->Area = _Area;
    this->CantLitros = _CantLitros;
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