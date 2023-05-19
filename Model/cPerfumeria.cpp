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
cPerfumeria::cPerfumeria(string _Nombre, float _Precio, int _Stock, string _Marca, int _ID, TipoProducto _tipoProducto, float _CantLitros):cProducto(_Nombre, _Precio, _Stock,_Marca, _ID, _tipoProducto) {
    this->Nombre = _Nombre;
    this->Precio = _Precio;
    this->Stock = _Stock;
    this->Marca = _Marca;
    this->ID = _ID;
    this->CantLitros = _CantLitros;
    this->tipoProducto = _tipoProducto;
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