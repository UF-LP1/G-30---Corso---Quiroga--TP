/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cEmpleado.h"

/**
 * cEmpleado implementation
 */

cEmpleado::cEmpleado(string _Nombre) {
	this->Nombre = _Nombre;
	this->ID = cEmpleado::cont;
	cEmpleado::cont++;
}
cEmpleado::~cEmpleado() {

}

void cEmpleado::setTipoEmpleado(TipoEmpleado tipoEmpleado){
	this->tipoEmpleado = tipoEmpleado;
	return;
}
