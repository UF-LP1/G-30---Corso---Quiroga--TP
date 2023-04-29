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

cProducto::cProducto(string Nombre, float Precio, int Stock, string Marca, string Area, const int ID) {

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