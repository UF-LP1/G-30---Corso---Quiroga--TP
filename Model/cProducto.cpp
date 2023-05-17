/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cProducto.h"

/**
 * cProducto implementation
 */

cProducto::cProducto(string _Nombre, float _Precio, int _Stock, string _Marca, string _Area, int _ID) {
	this->Nombre = _Nombre;
	this->Precio = _Precio;
	this->Stock = _Stock;
	this->Marca = _Marca;
	this->Area = _Area;
	this->ID = _ID;
}
cProducto::~cProducto() {

}
float cProducto::getPrecio() {
	return this->Precio;
}

void cProducto::setPrecio(float Precio) {}
//void cProducto::irtual bool VerificarStock() {
//
//}


