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
cOrtopedia::cOrtopedia(string _Nombre, float _Precio, int _Stock, string _Marca, string _Area,  const int ID, int _CantUnidades, string _Color) {
    this->Nombre = _Nombre;
    this->Precio = _Precio;
    this->Stock = _Stock;
    this->Marca = _Marca;
    this->Area = _Area;
    this->CantUnidades = _CantUnidades;
    this->Color = _Color;
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