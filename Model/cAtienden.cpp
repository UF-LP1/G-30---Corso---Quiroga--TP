/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>
#include "cAtienden.h"
#include "cEmpleado.h"
using namespace std;



/**
 * cAtienden implementation
 */

cAtienden::cAtienden(string _Nombre, cCliente* _cliente):cEmpleado(_Nombre) {
	this->Nombre = _Nombre;
	this->cliente = _cliente;
}
cAtienden::~cAtienden() {

}

void cAtienden::setcliente(cCliente* cliente) {
	this->cliente = cliente;
	return;
}


void cAtienden:: LlamarCliente() {}

float cAtienden:: EmitirFactura() {
}