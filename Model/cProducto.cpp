/**
 * Project Untitled
 */
#include <iostream>
#include <string>



using namespace std;

#include "cProducto.h"

/**
 * cProducto implementation
 */

cProducto::cProducto(string _Nombre, float _Precio, int _Stock, string _Marca,  int _ID, TipoProducto _tipoProducto) {
	this->Nombre = _Nombre;
	this->Precio = _Precio;
	this->Stock = _Stock;
	this->Marca = _Marca;
	this->ID = _ID;
	this->tipoProducto = _tipoProducto;
}
cProducto::~cProducto() {

}


//void cProducto::virtual bool VerificarStock() {
//
//}

string cProducto::getNombre()
{
	return this->Nombre;
}


