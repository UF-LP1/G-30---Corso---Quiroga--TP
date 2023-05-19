/**
 * Project Untitled
 */
#include <iostream>
#include <string>


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
cOrtopedia::cOrtopedia(string _Nombre, float _Precio, int _Stock, string _Marca, string _Area, int ID, TipoProducto tipoProducto, int _CantUnidades, string _Color) :cProducto(_Nombre, _Precio, _Stock, _Marca, _Area, _ID, _tipoProducto;) {
    this->Nombre = _Nombre;
    this->Precio = _Precio;
    this->Stock = _Stock;
    this->Marca = _Marca;
    this->Area = _Area;
    this->CantUnidades = _CantUnidades;
    this->Color = _Color;
    this->tipoProducto = tipoProducto;
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
TipoProducto cOrtopedia::getTipoProducto() {
    return TipoProducto::Ortopedia;
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